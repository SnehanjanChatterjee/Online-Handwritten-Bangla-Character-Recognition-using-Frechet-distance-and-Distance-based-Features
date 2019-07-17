#include<stdio.h>
#include<stdlib.h>
#include<cv.h>
#include<cxcore.h>
#include<highgui.h>
#include<math.h>

void main()
{
	angulartrnsfrm("F:\\SPS Sir Project\\Frechet Distance\\FRECHETDAT\\unit data\\A\\normalized\\unit_scalled_coordinate0000");
	/*display(".\\data\\64-point0001");
	display(".\\data\\64-point0002");
	display(".\\data\\64-point0003");
	display(".\\data\\64-point0010");
	display(".\\data\\64-point0011");
	display(".\\data\\64-point0012");
	display(".\\data\\64-point0013");
	display(".\\data\\64-point0014");
	display(".\\data\\64-point0015");
	display(".\\data\\64-point0016");
	display(".\\data\\64-point0020");
	display(".\\data\\64-point0021");
	display(".\\data\\64-point0022");
	display(".\\data\\64-point0023");
	display(".\\data\\64-point0024");*/

}
void angulartrnsfrm(char* r)
{
	IplImage* img = cvCreateImage(cvSize(2000, 2000), 8, 4);
	FILE* fp;
	char ch[500];
	int i, x[1000], y[1000], z[1000], n, j;
	float mx, my, a, b, c, d;
	int zn, t, ct = 0;
	int sq;
	int minx, miny, maxx, maxy, u;
	fp = fopen(r, "r");
	i = 0;
	while (!feof(fp)) {
		fscanf(fp, "%d %d %d\n", &x[i], &y[i], &z[i]);
		i++;
	}n = i;
	fclose(fp);
	minx = minimum(x, n);
	miny = minimum(y, n);
	maxx = maximum(x, n);
	maxy = maximum(y, n);
	mx = (maxx - minx);
	my = (maxy - miny);
	for (i = 0; i < n - 1; i++)
	{
		if (((z[i] == 0) && (z[i + 1] == 1)) || ((z[i] == 1) && (z[i + 1] == 1)))
		{
			cvLine(img, cvPoint(x[i], y[i]), cvPoint(x[i + 1], y[i + 1]), CV_RGB(255, 0, 0), 1, 8, 0);
			cvRectangle(img, cvPoint(minx, maxy), cvPoint(maxx, miny), CV_RGB(0, 255, 0), 1, 8, 0);
		}
	}
	printf("Enter the number of Zones:");
	scanf("%d", &zn);
	t = zn;
	while (zn > 1)
	{
		if (zn % 2 == 0)
		{
			zn = zn / 2;
			ct++;
		}
		else
		{
			ct = 1;
			break;
		}
	}
	if (ct % 2 != 0)
	{
		printf("Incorrect ZONE.\n");
		exit(0);
	}
	else
	{
		sq = sqrt(t);
		b = mx / sq;
		d = my / sq;
		a = minx + b;
		c = miny + d;
		for (i = 1; i <= sq - 1; i++)
		{
			cvLine(img, cvPoint(minx, c), cvPoint(maxx, c), CV_RGB(0, 255, 0), 1, 8, 0);
			cvLine(img, cvPoint(a, miny), cvPoint(a, maxy), CV_RGB(0, 255, 0), 1, 8, 0);
			a = a + b;
			c = c + d;
		}

	}
	fp = fopen(r, "r");
	i = 0;
	while (!feof(fp)) {
		fscanf(fp, "%d %d %d\n", &x[i], &y[i], &z[i]);
		i++;
	}
	fclose(fp);
	printf("%d\n", i);
	cvNamedWindow("character", CV_WINDOW_AUTOSIZE);
	cvShowImage("character", img);
	sprintf(ch, "%s.bmp", r);
	cvSaveImage(ch, img, 0);
	cvWaitKey(0);
	cvDestroyWindow("character");
	cvReleaseImage(&img);
}

int minimum(int arr[], int n)
{

	int min, i;
	min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];

	}
	return min;
}

int maximum(int arr[], int n)
{

	int max, i;
	max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];

	}
	return max;
}
