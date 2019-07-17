#include<stdio.h>
#include<stdlib.h>
#include<cv.h>
#include<cxcore.h>
#include<highgui.h>
#include<math.h>
int counter = -1, var;
void main()
{
	/*IplImage* img=cvCreateImage(cvSize(2000,2000),8,4);*/
	FILE* fp;
	//char *r = "C:\\DATASET\\A\\normalized\\unit_scalled_coordinate0000";
	char ch[500], r[300];
	int i, x[11000], y[11000], z[11000], n, j;
	int x1[9000], y1[9000];
	float mx, my;

	int minx = 0, miny = 0, maxx = 0, maxy = 0, u;

	int z1[5000], z2[5000], z3[5000], z4[5000], z5[5000], z6[5000], z8[5000], z7[5000];
	for (var = 0; var <= 300; var++)
	{
		int p = 0, q = 0, s = 0, t = 0;
		counter++;
		sprintf(r, "F:\\SPS Sir Project\\Frechet\\FRECHETDAT\\unit data\\YA\\normalized\\unit_scalled_coordinate%04d", var);
		fp = fopen(r, "r");
		i = 0;
		while (!feof(fp))
		{
			fscanf(fp, "%d %d %d\n", &x[i], &y[i], &z[i]);
			i++;
		}n = i;
		printf("OUTPUT:%d\n", n);
		fclose(fp);
		minx = minimum(x, n);
		miny = minimum(y, n);
		maxx = maximum(x, n);
		maxy = maximum(y, n);
		mx = (minx + maxx) / 2;
		my = (miny + maxy) / 2;
		/*for(i=0;i<n-1;i++){
			if(((z[i]==0)&&(z[i+1]==1))||((z[i]==1)&&(z[i+1]==1))){
					cvLine(img,cvPoint(minx,my),cvPoint(maxx,my),CV_RGB(0,255,0),1,8,0);
					cvLine(img,cvPoint(mx,miny),cvPoint(mx,maxy),CV_RGB(0,255,0),1,8,0);
				 cvLine(img,cvPoint(x[i],y[i]),cvPoint(x[i+1],y[i+1]),CV_RGB(255,0,0),1,8,0);
				cvRectangle(img,cvPoint(minx,maxy),cvPoint(maxx,miny),CV_RGB(0,255,0),1,8,0);}}*/
		fp = fopen(r, "r");
		i = 0;
		while (!feof(fp)) {
			fscanf(fp, "%d %d %d\n", &x[i], &y[i], &z[i]);
			if ((x[i] <= mx && x[i] >= minx) && (y[i] <= my && y[i] >= miny))
			{
				z1[p] = x[i];
				z2[p] = y[i];
				p++;
			}
			if ((x[i] > mx && x[i] <= maxx) && (y[i] >= miny && y[i] <= my)) {
				z3[q] = x[i];
				z4[q] = y[i];
				q++;
			}
			if ((x[i] >= minx && x[i] <= mx) && (y[i] > my && y[i] <= maxy)) {
				z5[t] = x[i];
				z6[t] = y[i];
				t++;
			}
			if ((x[i] > mx && x[i] <= maxx) && (y[i] > my && y[i] <= maxy)) {
				z7[s] = x[i];
				z8[s] = y[i];
				s++;
			}
			i++;
		}
		for (i = 0; i < p; i++)
			printf("%d    %d      %d\n", z1[i], z2[i], p);
		printf("\n");
		for (i = 0; i < q; i++)
			printf("%d    %d       %d\n", z3[i], z4[i], q);
		printf("\n");
		for (i = 0; i < t; i++)
			printf("%d    %d       %d\n", z5[i], z6[i], t);
		printf("\n");
		for (i = 0; i < s; i++)
			printf("%d    %d       %d\n", z7[i], z8[i], s);
		frechet(z1, z2, p, z3, z4, q, z5, z6, t, z7, z8, s);
		fclose(fp);
		//getch();
	}
	/*cvNamedWindow("character",CV_WINDOW_AUTOSIZE);
	cvShowImage("character",img);
	cvShowImage("character",img);
	sprintf(ch,"%s.bmp",r);
	cvSaveImage(ch,img,0);
	cvWaitKey(0);
	cvDestroyWindow("character");
	cvReleaseImage(&img);*/
}
int minimum(int arr[], int n)
{
	int min, i;
	min = arr[0];
	for (i = 1; i < n; i++) {
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

void frechet(int z1[], int z2[], int p, int z3[], int z4[], int q, int z5[], int z6[], int t, int z7[], int z8[], int s)
{
	int i, j, y = 0; float temp0[5000], temp1[5000], temp2[5000], temp3[5000], temp4[5000], temp5[5000], temp6[5000], temp7[5000], temp8[5000], temp9[5000], temp10[5000], temp11[5000];
	float k0, k1, k2, k3, k4, k5, k6, k7, k8, k9, k10, k11, f1, f2, f3, f4, f5, f6;
	float max0 = 0, min0 = 0, max1 = 0, min1 = 0, max2 = 0, min2 = 0, max3 = 0, min3 = 0, max4 = 0, min4 = 0, max5 = 0, min5 = 0, max6 = 0, min6 = 0, max7 = 0, min7 = 0, max8 = 0, min8 = 0, max9 = 0, min9 = 0, max10 = 0, min10 = 0, max11 = 0, min11 = 0;
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			if (j == 0)
			{
				max0 = sqrt((pow((z4[j] - z2[i]), 2)) + (pow((z3[j] - z1[i]), 2)));
				//if(var==2)
			   // printf("max-test=%f",max0);
			}

			else {
				k0 = sqrt((pow((z4[j] - z2[i]), 2)) + (pow((z3[j] - z1[i]), 2)));
				//  if(var==2)
				printf("k-test=%f\n", k0);
				if (k0 > max0)
					max0 = k0;
			}
		}
		printf("max0=%f\n ", max0);
		//if(var==2)
		//getch();
		temp0[y++] = max0;
	}

	printf("\n");
	min0 = temp0[0];
	for (i = 1; i < p; i++)
	{
		if (temp0[i] < min0)
			min0 = temp0[i];
	}
	printf("frechet distance of zone 1 wrt zone 2=%f\n", min0);
	printf("\n");
	y = 0;
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < t; j++)
		{
			if (j == 0)
				max1 = sqrt((pow((z6[j] - z2[i]), 2)) + (pow((z5[j] - z1[i]), 2)));
			else
			{
				k1 = sqrt((pow((z6[j] - z2[i]), 2)) + (pow((z5[j] - z1[i]), 2)));
				if (k1 > max1)
					max1 = k1;
			}
		} printf("max1=%f\n ", max1);
		temp1[y++] = max1;
	}

	printf("\n");
	min1 = temp1[0];
	for (i = 1; i < p; i++)
	{
		if (temp1[i] < min1)
			min1 = temp1[i];
	}
	printf("frechet distance of zone 1 wrt zone 3=%f\n", min1);

	printf("\n");
	y = 0;
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < s; j++)
		{
			if (j == 0)
				max2 = sqrt((pow((z8[j] - z2[i]), 2)) + (pow((z7[j] - z1[i]), 2)));
			else
			{
				k2 = sqrt((pow((z8[j] - z2[i]), 2)) + (pow((z7[j] - z1[i]), 2)));
				if (k2 > max2)
					max2 = k2;
			}
		}
		printf("max2=%f\n", max2);
		temp2[y++] = max2;
	}

	printf("\n");
	min2 = temp2[0];
	for (i = 1; i < p; i++)
	{
		if (temp2[i] < min2)
			min2 = temp2[i];
	}
	printf("frechet distance of zone 1 wrt zone 4=%f\n", min2);
	printf("\n");
	y = 0;
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < p; j++)
		{
			if (j == 0)
				max3 = sqrt((pow((z2[j] - z4[i]), 2)) + (pow((z1[j] - z3[i]), 2)));
			else {
				k3 = sqrt((pow((z2[j] - z4[i]), 2)) + (pow((z1[j] - z3[i]), 2)));
				if (k3 > max3)
					max3 = k3;
			}
		} printf("max3=%f\n", max3);
		temp3[y++] = max3;
	}

	printf("\n");
	min3 = temp3[0];
	for (i = 1; i < q; i++)
	{
		if (temp3[i] < min3)
			min3 = temp3[i];
	}
	printf("frechet distance of zone 2 wrt zone 1=%f\n", min3);
	printf("\n");
	y = 0;
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < t; j++)
		{
			if (j == 0)
				max4 = sqrt((pow((z6[j] - z4[i]), 2)) + (pow((z5[j] - z3[i]), 2)));
			else {
				k4 = sqrt((pow((z6[j] - z4[i]), 2)) + (pow((z5[j] - z3[i]), 2)));
				if (k4 > max4)
					max4 = k4;
			}
		} printf("max4=%f\n", max4);
		temp4[y++] = max4;
	}

	printf("\n");
	min4 = temp4[0];
	for (i = 1; i < q; i++)
	{
		if (temp4[i] < min4)
			min4 = temp4[i];
	}
	printf("frechet distance of zone 2 wrt zone 3=%f\n", min4);
	printf("\n");
	y = 0;
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < s; j++)
		{
			if (j == 0)
				max5 = sqrt((pow((z8[j] - z4[i]), 2)) + (pow((z7[j] - z3[i]), 2)));
			else {
				k5 = sqrt((pow((z8[j] - z4[i]), 2)) + (pow((z7[j] - z3[i]), 2)));
				if (k5 > max5)
					max5 = k5;
			}
		} printf("max5=%f\n", max5);
		temp5[y++] = max5;
	}

	printf("\n");
	min5 = temp5[0];
	for (i = 1; i < q; i++)
	{
		if (temp5[i] < min5)
			min5 = temp5[i];
	}
	printf("frechet distance of zone 2 wrt zone 4=%f\n", min5);
	printf("\n");
	y = 0;
	for (i = 0; i < t; i++)
	{
		for (j = 0; j < p; j++)
		{
			if (j == 0)
				max6 = sqrt((pow((z2[j] - z6[i]), 2)) + (pow((z1[j] - z5[i]), 2)));
			else {
				k6 = sqrt((pow((z2[j] - z6[i]), 2)) + (pow((z1[j] - z5[i]), 2)));
				if (k6 > max6)
					max6 = k6;
			}
		} printf("max6=%f\n", max6);
		temp6[y++] = max6;
	}

	printf("\n");
	min6 = temp6[0];
	for (i = 1; i < t; i++)
	{
		if (temp6[i] < min6)
			min6 = temp6[i];
	}
	printf("frechet distance of zone 3 wrt zone 1=%f\n", min6);
	printf("\n");
	y = 0;
	for (i = 0; i < t; i++)
	{
		for (j = 0; j < q; j++)
		{
			if (j == 0)
				max7 = sqrt((pow((z4[j] - z6[i]), 2)) + (pow((z3[j] - z5[i]), 2)));
			else {
				k7 = sqrt((pow((z4[j] - z6[i]), 2)) + (pow((z3[j] - z5[i]), 2)));
				if (k7 > max7)
					max7 = k7;
			}
		} printf("max7=%f\n", max7);
		temp7[y++] = max7;
	}

	printf("\n");
	min7 = temp7[0];
	for (i = 1; i < t; i++)
	{
		if (temp7[i] < min7)
			min7 = temp7[i];
	}
	printf("frechet distance of zone 3 wrt zone 2=%f\n", min7);
	printf("\n");
	y = 0;
	for (i = 0; i < t; i++)
	{
		for (j = 0; j < s; j++)
		{
			if (j == 0)
				max8 = sqrt((pow((z8[j] - z6[i]), 2)) + (pow((z7[j] - z5[i]), 2)));
			else {
				k8 = sqrt((pow((z8[j] - z6[i]), 2)) + (pow((z7[j] - z5[i]), 2)));
				if (k8 > max8)
					max8 = k8;
			}
		} printf("max8=%f\n", max8);
		temp8[y++] = max8;
	}
	printf("\n");
	min8 = temp8[0];
	for (i = 1; i < t; i++)
	{
		if (temp8[i] < min8)
			min8 = temp8[i];
	}
	printf("frechet distance of zone 3 wrt zone 4=%f\n", min8);
	printf("\n");
	y = 0;
	for (i = 0; i < s; i++)
	{
		for (j = 0; j < p; j++)
		{
			if (j == 0)
				max9 = sqrt((pow((z2[j] - z8[i]), 2)) + (pow((z1[j] - z7[i]), 2)));
			else {
				k9 = sqrt((pow((z2[j] - z8[i]), 2)) + (pow((z1[j] - z7[i]), 2)));
				if (k9 > max9)
					max9 = k9;
			}
		} printf("max9=%f\n", max9);
		temp9[y++] = max9;
	}
	printf("\ns=%d", s);
	min9 = temp9[0];
	for (i = 1; i < s; i++)
	{
		if (temp9[i] < min9)
			min9 = temp9[i];
	}
	printf("frechet distance of zone 4 wrt zone 1=%f\n", min9);
	printf("\n");
	y = 0;
	for (i = 0; i < s; i++)
	{
		for (j = 0; j < q; j++)
		{
			if (j == 0)
				max10 = sqrt((pow((z4[j] - z8[i]), 2)) + (pow((z3[j] - z7[i]), 2)));
			else {
				k10 = sqrt((pow((z4[j] - z8[i]), 2)) + (pow((z3[j] - z7[i]), 2)));
				if (k10 > max10)
					max10 = k10;
			}
		} printf("max10=%f\n", max10);
		temp10[y++] = max10;
	}

	printf("\n");
	min10 = temp10[0];
	for (i = 1; i < s; i++)
	{
		if (temp10[i] < min10)
			min10 = temp10[i];
	}
	printf("frechet distance of zone 4 wrt zone 2=%f\n", min10);
	printf("\n");
	y = 0;
	for (i = 0; i < s; i++)
	{
		for (j = 0; j < t; j++)
		{
			if (j == 0)
				max11 = sqrt((pow((z6[j] - z8[i]), 2)) + (pow((z5[j] - z7[i]), 2)));
			else {
				k11 = sqrt((pow((z6[j] - z8[i]), 2)) + (pow((z5[j] - z7[i]), 2)));
				if (k11 > max11)
					max11 = k11;
			}
		} printf("max11=%f\n", max11);
		temp11[y++] = max11;
	}

	printf("\n");
	min11 = temp11[0];
	for (i = 1; i < s; i++)
	{
		if (temp11[i] < min11)
			min11 = temp11[i];
	}
	printf("frechet distance of zone 4 wrt zone 3=%f\n", min11);
	printf("\n");
	//printf("min=%f min3=%f",min,min3);
	if (min0 > min3)
		f1 = min3;
	else
		f1 = min0;
	printf("ultimate frechet distance of zone 1 wrt zone 2=%f\n", f1);
	if (min1 > min6)
		f2 = min6;
	else
		f2 = min1;
	printf("ultimate frechet distance of zone 1 wrt zone 3=%f\n", f2);
	if (min2 > min9)
		f3 = min9;
	else
		f3 = min2; printf("ultimate frechet distance of zone 1 wrt zone 4=%f\n", f3);
	if (min4 > min7)
		f4 = min7;
	else
		f4 = min4;
	printf("ultimate frechet distance of zone 2 wrt zone 3=%f\n", f4);
	if (min5 > min10)
		f5 = min10;
	else
		f5 = min5;
	printf("ultimate frechet distance of zone 2 wrt zone 4=%f\n", f5);
	if (min8 > min11)
		f6 = min11;
	else
		f6 = min8;
	printf("ultimate frechet distance of zone 3 wrt zone 4=%f\n", f6);
	FILE* ptr;
	ptr = fopen("F:\\SPS Sir Project\\Frechet\\FRECHETDAT\\frechetCheckYA.dat", "a");
	fprintf(ptr, "\n%d,%f,%f,%f,%f,%f,%f,YA", counter, f1, f2, f3, f4, f5, f6);
	fclose(ptr);
}
