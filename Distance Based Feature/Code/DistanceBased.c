#include<stdio.h>
#include<stdlib.h>
#include<cv.h>
#include<cxcore.h>
#include<highgui.h>
#include<math.h>
int z1[500], z2[500];
int x[1000], y[1000], z[1000];
int i = 0, j = 0, t;
int a = 0, b = 0;
int n = -1, k = 0;
int g;
float val = 0;
int seg, var = 0;
char r[200];
void main()
{
	FILE* ptr, * ptr1;
	FILE* fp;
	printf("Enter no of segment coordinates");
	scanf("%d", &seg);
	a = (64 / seg);
	printf("No of segments are : %d", a);
	printf("\n");
	ptr1 = fopen("F:\\SPS Sir Project\\Frechet\\FRECHETDAT\\DistBased(32Segments_10k).dat", "a");
	g = 0;
	for (var = 0; var < 1; var++)
	{
		sprintf(r, "F:\\SPS Sir Project\\Frechet\\FRECHETDAT\\unit data\\YA\\normalized\\unit_scalled_coordinate%04d", var);
		puts(r);
		fp = fopen(r, "r");
		i = 0, j = 0;
		b = 0;
		n = -1, k = 0;
		g++;
		while (!feof(fp))
		{
			printf("the i_values : %d\n", i);
			fscanf(fp, "%d   %d   %d\n", &x[i], &y[i], &z[i]);
			printf("the b_values : %d\n", b);
			printf("\n");
			if (i == n || i == 0)
			{
				z1[b] = x[i];
				z2[b] = y[i];
				b++;
				n += (seg);
			}
			i++;
		}
		fclose(fp);
		fprintf(ptr1, "%d,", g);
		for (i = 0; i < (b - 1); i++)
		{
			for (j = 1; j < b; j++)
			{
				if (i != j && i < j)
				{
					val = 0;
					val = sqrt((pow((z1[i] - z1[j]), 2)) + (pow((z2[i] - z2[j]), 2)));
					printf("the distance between %d and %d is %f", i, j, val);
					printf("\n");
					fprintf(ptr1, "%f,", val);
				}
			}
		}
		fprintf(ptr1, "YA\n");
	}
	fclose(ptr1);
}
