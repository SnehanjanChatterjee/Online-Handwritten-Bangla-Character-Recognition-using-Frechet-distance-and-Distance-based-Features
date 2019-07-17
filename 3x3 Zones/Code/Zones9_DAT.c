#include<stdio.h>
#include<stdlib.h>
#include<cv.h>
#include<cxcore.h>
#include<highgui.h>
#include<math.h>
void zonecalc(int, int, int, int[], int[]);
float frechet(int, int, int[], int[], int[], int[], int, int);
int counter = 0; int g = 1;
int z1x[11000], z2x[11000], z3x[11000], z4x[11000], z5x[11000], z6x[11000], z7x[11000], z8x[11000], z9x[11000], z10x[11000], z11x[11000], z12x[11000], z13x[100], z14x[100], z15x[100], z16x[100], z17x[100], z18x[100], z19x[100], z20x[100], z21x[100], z22x[100], z23x[100], z24x[100], z25x[100], z26x[100], z27x[100], z28x[100], z29x[100], z30x[100], z31x[100], z32x[100], z33x[100], z34x[100], z35x[100], z36x[100], z37x[100], z38x[100], z39x[100], z40x[100], z41x[100], z42x[100], z43x[100], z44x[100], z45x[100], z46x[100], z47x[100], z48x[100], z49x[100], z50x[100], z51x[100], z52x[100], z53x[100], z54x[100], z55x[100], z56x[100], z57x[100], z58x[100], z59x[100], z60x[100], z61x[100], z62x[100], z63x[100], z64x[100];
int z1y[11000], z2y[11000], z3y[11000], z4y[11000], z5y[11000], z6y[11000], z7y[11000], z8y[11000], z9y[11000], z10y[11000], z11y[11000], z12y[11000], z13y[100], z14y[100], z15y[100], z16y[100], z17y[100], z18y[100], z19y[100], z20y[100], z21y[100], z22y[100], z23y[100], z24y[100], z25y[100], z26y[100], z27y[100], z28y[100], z29y[100], z30y[100], z31y[100], z32y[100], z33y[100], z34y[100], z35y[100], z36y[100], z37y[100], z38y[100], z39y[100], z40y[100], z41y[100], z42y[100], z43y[100], z44y[100], z45y[100], z46y[100], z47y[100], z48y[100], z49y[100], z50y[100], z51y[100], z52y[100], z53y[100], z54y[100], z55y[100], z56y[100], z57y[100], z58y[100], z59y[100], z60y[100], z61y[100], z62y[100], z63y[100], z64y[100];
int z1c = 0, z2c = 0, z3c = 0, z4c = 0, z5c = 0, z6c = 0, z7c = 0, z8c = 0, z9c = 0, z10c = 0, z11c = 0, z12c = 0, z13c = 0, z14c = 0, z15c = 0, z16c = 0, z17c = 0, z18c = 0, z19c = 0, z20c = 0, z21c = 0, z22c = 0, z23c = 0, z24c = 0, z25c = 0, z26c = 0, z27c = 0, z28c = 0, z29c = 0, z30c = 0, z31c = 0, z32c = 0, z33c = 0, z34c = 0, z35c = 0, z36c = 0, z37c = 0, z38c = 0, z39c = 0, z40c = 0, z41c = 0, z42c = 0, z43c = 0, z44c = 0, z45c = 0, z46c = 0, z47c = 0, z48c = 0, z49c = 0, z50c = 0, z51c = 0, z52c = 0, z53c = 0, z54c = 0, z55c = 0, z56c = 0, z57c = 0, z58c = 0, z59c = 0, z60c = 0, z61c = 0, z62c = 0, z63c = 0, z64c = 0;
float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0, f32 = 0, f33 = 0, f34 = 0, f35 = 0, f36 = 0, f37 = 0, f38 = 0, f39 = 0, f40, f41 = 0, f42 = 0, f43 = 0, f44 = 0, f45 = 0, f46 = 0, f47 = 0, f48 = 0, f49 = 0, f50 = 0, f51 = 0, f52 = 0, f53 = 0, f54 = 0, f55 = 0, f56 = 0, f57 = 0, f58 = 0, f59 = 0, f60 = 0, f61 = 0, f62 = 0, f63 = 0, f64 = 0, f65 = 0, f66 = 0, f67 = 0, f68 = 0, f69 = 0, f70 = 0, f71 = 0, f72 = 0, f73 = 0, f74 = 0, f75 = 0, f76 = 0, f77 = 0, f78 = 0, f79 = 0, f80 = 0, f81 = 0, f82 = 0, f83 = 0, f84 = 0, f85 = 0, f86 = 0, f87 = 0, f88 = 0, f89 = 0, f90 = 0, f91 = 0, f92 = 0, f93 = 0, f94 = 0, f95 = 0, f96 = 0, f97 = 0, f98 = 0, f99 = 0, f100 = 0;
float f101 = 0, f102 = 0, f103 = 0, f104 = 0, f105 = 0, f106 = 0, f107 = 0, f108 = 0, f109 = 0, f110 = 0, f111 = 0, f112 = 0, f113 = 0, f114 = 0, f115 = 0, f116 = 0, f117 = 0, f118 = 0, f119 = 0, f120 = 0, f121 = 0, f122 = 0, f123 = 0, f124 = 0, f125 = 0, f126 = 0, f127 = 0, f128 = 0, f129 = 0, f130 = 0, f131 = 0, f132 = 0, f133 = 0, f134 = 0, f135 = 0, f136 = 0, f137 = 0, f138 = 0, f139 = 0, f140, f141 = 0, f142 = 0, f143 = 0, f144 = 0, f145 = 0, f146 = 0, f147 = 0, f148 = 0, f149 = 0, f150 = 0, f151 = 0, f152 = 0, f153 = 0, f154 = 0, f155 = 0, f156 = 0, f157 = 0, f158 = 0, f159 = 0, f160 = 0, f161 = 0, f162 = 0, f163 = 0, f164 = 0, f165 = 0, f166 = 0, f167 = 0, f168 = 0, f169 = 0, f170 = 0, f171 = 0, f172 = 0, f173 = 0, f174 = 0, f175 = 0, f176 = 0, f177 = 0, f178 = 0, f179 = 0, f180 = 0, f181 = 0, f182 = 0, f183 = 0, f184 = 0, f185 = 0, f186 = 0, f187 = 0, f188 = 0, f189 = 0, f190 = 0, f191 = 0, f192 = 0, f193 = 0, f194 = 0, f195 = 0, f196 = 0, f197 = 0, f198 = 0, f199 = 0, f200 = 0;
float f201 = 0, f202 = 0, f203 = 0, f204 = 0, f205 = 0, f206 = 0, f207 = 0, f208 = 0, f209 = 0, f210 = 0, f211 = 0, f212 = 0, f213 = 0, f214 = 0, f215 = 0, f216 = 0, f217 = 0, f218 = 0, f219 = 0, f220 = 0, f221 = 0, f222 = 0, f223 = 0, f224 = 0, f225 = 0, f226 = 0, f227 = 0, f228 = 0, f229 = 0, f230 = 0, f231 = 0, f232 = 0, f233 = 0, f234 = 0, f235 = 0, f236 = 0, f237 = 0, f238 = 0, f239 = 0, f240 = 0, f241 = 0, f242 = 0, f243 = 0, f244 = 0, f245 = 0, f246 = 0, f247 = 0, f248 = 0, f249 = 0, f250 = 0, f251 = 0, f252 = 0, f253 = 0, f254 = 0, f255 = 0, f256 = 0, f257 = 0, f258 = 0, f259 = 0, f260 = 0, f261 = 0, f262 = 0, f263 = 0, f264 = 0, f265 = 0, f266 = 0, f267 = 0, f268 = 0, f269 = 0, f270 = 0, f271 = 0, f272 = 0, f273 = 0, f274 = 0, f275 = 0, f276 = 0, f277 = 0, f278 = 0, f279 = 0, f280 = 0, f281 = 0, f282 = 0, f283 = 0, f284 = 0, f285 = 0, f286 = 0, f287 = 0, f288 = 0, f289 = 0, f290 = 0, f291 = 0, f292 = 0, f293 = 0, f294 = 0, f295 = 0, f296 = 0, f297 = 0, f298 = 0, f299 = 0, f300 = 0, f301 = 0, f302 = 0, f303 = 0, f304 = 0, f305 = 0, f306 = 0, f307 = 0, f308 = 0, f309 = 0, f310 = 0;
int z1 = 1, z2 = 2, z3 = 3, z4 = 4, z5 = 5, z6 = 6, z7 = 7, z8 = 8, z9 = 9, z10 = 10, z11 = 11, z12 = 12, z13 = 13, z14 = 14, z15 = 15, z16 = 16, z17 = 17, z18 = 18, z19 = 19, z20 = 20, z21 = 21, z22 = 22, z23 = 23, z24 = 24, z25 = 25, z26 = 26, z27 = 27, z28 = 28, z29 = 29, z30 = 30, z31 = 31, z32 = 32, z33 = 33, z34 = 34, z35 = 35, z36 = 36, z37 = 37, z38 = 38, z39 = 39, z40 = 40, z41 = 41, z42 = 42, z43 = 43, z44 = 44, z45 = 45, z46 = 46, z47 = 47, z48 = 48, z49 = 49, z50 = 50, z51 = 51, z52 = 52, z53 = 53, z54 = 54, z55 = 55, z56 = 56, z57 = 57, z58 = 58, z59 = 59, z60 = 60, z61 = 61, z62 = 62, z63 = 63, z64 = 64;

void main()
{
	//char *r = "G:\\A\\A\\normalized\\unit_scalled_coordinate0000";
		//IplImage* img=cvCreateImage(cvSize(2000,2000),8,4);
	FILE* fp;
	/**Variable declaration*/

	//fp=fopen(r,"r");
	int zn, t, var;
	char r[100];
	printf("Enter number of Zones: ");
	scanf("%d", &zn);
	t = zn;
	g = 0;
	for (var = 0; var < 300; var++)
	{
		float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0, f32 = 0, f33 = 0, f34 = 0, f35 = 0, f36 = 0, f37 = 0, f38 = 0, f39 = 0, f40, f41 = 0, f42 = 0, f43 = 0, f44 = 0, f45 = 0, f46 = 0, f47 = 0, f48 = 0, f49 = 0, f50 = 0, f51 = 0, f52 = 0, f53 = 0, f54 = 0, f55 = 0, f56 = 0, f57 = 0, f58 = 0, f59 = 0, f60 = 0, f61 = 0, f62 = 0, f63 = 0, f64 = 0, f65 = 0, f66 = 0, f67 = 0, f68 = 0, f69 = 0, f70 = 0, f71 = 0, f72 = 0, f73 = 0, f74 = 0, f75 = 0, f76 = 0, f77 = 0, f78 = 0, f79 = 0, f80 = 0, f81 = 0, f82 = 0, f83 = 0, f84 = 0, f85 = 0, f86 = 0, f87 = 0, f88 = 0, f89 = 0, f90 = 0, f91 = 0, f92 = 0, f93 = 0, f94 = 0, f95 = 0, f96 = 0, f97 = 0, f98 = 0, f99 = 0, f100 = 0;
		float f101 = 0, f102 = 0, f103 = 0, f104 = 0, f105 = 0, f106 = 0, f107 = 0, f108 = 0, f109 = 0, f110 = 0, f111 = 0, f112 = 0, f113 = 0, f114 = 0, f115 = 0, f116 = 0, f117 = 0, f118 = 0, f119 = 0, f120 = 0, f121 = 0, f122 = 0, f123 = 0, f124 = 0, f125 = 0, f126 = 0, f127 = 0, f128 = 0, f129 = 0, f130 = 0, f131 = 0, f132 = 0, f133 = 0, f134 = 0, f135 = 0, f136 = 0, f137 = 0, f138 = 0, f139 = 0, f140, f141 = 0, f142 = 0, f143 = 0, f144 = 0, f145 = 0, f146 = 0, f147 = 0, f148 = 0, f149 = 0, f150 = 0, f151 = 0, f152 = 0, f153 = 0, f154 = 0, f155 = 0, f156 = 0, f157 = 0, f158 = 0, f159 = 0, f160 = 0, f161 = 0, f162 = 0, f163 = 0, f164 = 0, f165 = 0, f166 = 0, f167 = 0, f168 = 0, f169 = 0, f170 = 0, f171 = 0, f172 = 0, f173 = 0, f174 = 0, f175 = 0, f176 = 0, f177 = 0, f178 = 0, f179 = 0, f180 = 0, f181 = 0, f182 = 0, f183 = 0, f184 = 0, f185 = 0, f186 = 0, f187 = 0, f188 = 0, f189 = 0, f190 = 0, f191 = 0, f192 = 0, f193 = 0, f194 = 0, f195 = 0, f196 = 0, f197 = 0, f198 = 0, f199 = 0, f200 = 0;
		float f201 = 0, f202 = 0, f203 = 0, f204 = 0, f205 = 0, f206 = 0, f207 = 0, f208 = 0, f209 = 0, f210 = 0, f211 = 0, f212 = 0, f213 = 0, f214 = 0, f215 = 0, f216 = 0, f217 = 0, f218 = 0, f219 = 0, f220 = 0, f221 = 0, f222 = 0, f223 = 0, f224 = 0, f225 = 0, f226 = 0, f227 = 0, f228 = 0, f229 = 0, f230 = 0, f231 = 0, f232 = 0, f233 = 0, f234 = 0, f235 = 0, f236 = 0, f237 = 0, f238 = 0, f239 = 0, f240 = 0, f241 = 0, f242 = 0, f243 = 0, f244 = 0, f245 = 0, f246 = 0, f247 = 0, f248 = 0, f249 = 0, f250 = 0, f251 = 0, f252 = 0, f253 = 0, f254 = 0, f255 = 0, f256 = 0, f257 = 0, f258 = 0, f259 = 0, f260 = 0, f261 = 0, f262 = 0, f263 = 0, f264 = 0, f265 = 0, f266 = 0, f267 = 0, f268 = 0, f269 = 0, f270 = 0, f271 = 0, f272 = 0, f273 = 0, f274 = 0, f275 = 0, f276 = 0, f277 = 0, f278 = 0, f279 = 0, f280 = 0, f281 = 0, f282 = 0, f283 = 0, f284 = 0, f285 = 0, f286 = 0, f287 = 0, f288 = 0, f289 = 0, f290 = 0, f291 = 0, f292 = 0, f293 = 0, f294 = 0, f295 = 0, f296 = 0, f297 = 0, f298 = 0, f299 = 0, f300 = 0, f301 = 0, f302 = 0, f303 = 0, f304 = 0, f305 = 0, f306 = 0, f307 = 0, f308 = 0;
		int z1c = 0, z2c = 0, z3c = 0, z4c = 0, z5c = 0, z6c = 0, z7c = 0, z8c = 0, z9c = 0, z10c = 0, z11c = 0, z12c = 0, z13c = 0, z14c = 0, z15c = 0, z16c = 0, z17c = 0, z18c = 0, z19c = 0, z20c = 0, z21c = 0, z22c = 0, z23c = 0, z24c = 0, z25c = 0, z26c = 0, z27c = 0, z28c = 0, z29c = 0, z30c = 0, z31c = 0, z32c = 0, z33c = 0, z34c = 0, z35c = 0, z36c = 0, z37c = 0, z38c = 0, z39c = 0, z40c = 0, z41c = 0, z42c = 0, z43c = 0, z44c = 0, z45c = 0, z46c = 0, z47c = 0, z48c = 0, z49c = 0, z50c = 0, z51c = 0, z52c = 0, z53c = 0, z54c = 0, z55c = 0, z56c = 0, z57c = 0, z58c = 0, z59c = 0, z60c = 0, z61c = 0, z62c = 0, z63c = 0, z64c = 0;
		char ch[100];
		g++;
		int i = 0, j = 0, n = 0, ro, k = 1, v = 0, x[11000], y[11000], z[11000], tempx[11000], tempy[11000];
		float vx[500], vy[500];
		float mx, my, cx, cy;
		float a = 0, b = 0, c = 0, d = 0;
		int ct = 0, count = 1, sq; int m;
		int minx, miny, maxx, maxy, tmx, tmy, u;
		//    float a=0,b=0,c=0,d=0;
		sprintf(r, "F:\\SPS Sir Project\\Frechet\\FRECHETDAT\\unit data\\AA\\normalized\\unit_scalled_coordinate%04d", var);
		puts(r);
		//  system("pause");
		fp = fopen(r, "r");
		i = 0;
		while (!feof(fp))
		{
			fscanf(fp, "%d %d %d\n", &x[i], &y[i], &z[i]);
			i++;
		}n = i;
		fclose(fp);

		minx = minimum(x, n); tmx = minx;
		miny = minimum(y, n); tmy = miny;
		maxx = maximum(x, n);
		maxy = maximum(y, n);
		mx = (maxx - minx);
		my = (maxy - miny);
		cx = (maxx + minx) / 2;
		cy = (maxy + miny) / 2;
		vx[0] = minx;
		vy[0] = miny;
		IplImage* img = cvCreateImage(cvSize(2000, 2000), 8, 4);
		for (i = 0; i < n - 1; i++)
		{
			if (((z[i] == 0) && (z[i + 1] == 1)) || ((z[i] == 1) && (z[i + 1] == 1)))
			{
				cvLine(img, cvPoint(x[i], y[i]), cvPoint(x[i + 1], y[i + 1]), CV_RGB(255, 0, 0), 1, 8, 0);
				cvRectangle(img, cvPoint(minx, maxy), cvPoint(maxx, miny), CV_RGB(0, 255, 0), 1, 8, 0);
			}
		}



		while (zn > 1)
		{
			if (zn % 2 == 0)
			{
				zn = zn / 2;
				ct++;
			}
			else {
				ct = 1;
				break;
			}
		}

		if (ct % 2 != 0)
		{
			sq = sqrt(t);
			b = mx / (float)sq;
			d = my / (float)sq;
			a = minx + b; vx[1] = a;
			c = miny + d; vy[1] = c;

		}
		else
		{
			sq = sqrt(t);
			b = mx / (float)sq;
			d = my / (float)sq;
			a = minx + b; vx[1] = a;
			c = miny + d; vy[1] = c;

		}   for (i = 1; i < sq; i++)
		{
			cvLine(img, cvPoint(minx, c), cvPoint(maxx, c), CV_RGB(0, 255, 0), 1, 8, 0);
			cvLine(img, cvPoint(a, miny), cvPoint(a, maxy), CV_RGB(0, 255, 0), 1, 8, 0);
			a = a + b; vx[i + 1] = a;
			c = c + d; vy[i + 1] = c;
		}


		//for(i=0;i<=sq;i++)
			//printf("%f\t%f\n",vx[i],vy[i]);

		//printf("Number of Co-ordinate Points: %d\n\n",n);

		ro = 0;
		for (i = 1; i <= sq; i++)
		{
			for (j = 1; j <= sq; j++)
			{
				v = 0; ro = 0;
				//printf("Zone %d:\n",k);
				while (ro < n)
				{
					if ((x[ro] >= tmx && x[ro] < vx[i]) && (y[ro] >= tmy && y[ro] < vy[j]))
					{
						//printf("( %d, %d )\n",x[ro],y[ro]);
						tempx[v] = x[ro]; tempy[v] = y[ro];
						ro++; v++;
					}
					else if ((x[ro] >= tmx && x[ro] <= vx[i]) && (y[ro] >= tmy && y[ro] <= vy[j]) && (i == sq) && (j == sq))
					{
						//printf("( %d, %d )\n",x[ro],y[ro]);
						tempx[v] = x[ro]; tempy[v] = y[ro];
						ro++; v++;
					}
					else if ((x[ro] >= tmx && x[ro] < vx[i]) && (y[ro] >= tmy && y[ro] <= vy[j]) && (i != sq) && (j == sq))
					{
						//printf("( %d, %d )\n",x[ro],y[ro]);
						tempx[v] = x[ro]; tempy[v] = y[ro];
						ro++; v++;
					}
					else if ((x[ro] >= tmx && x[ro] <= vx[i]) && (y[ro] >= tmy && y[ro] < vy[j]) && (i == sq) && (j != sq))
					{
						//printf("( %d, %d )\n",x[ro],y[ro]);
						tempx[v] = x[ro]; tempy[v] = y[ro];
						ro++; v++;
					}
					else
						ro++;
				}
				//printf("Number of elements in Zone %d: %d\n",k,v);
				//printf("\n");
				tmy = vx[j];
				zonecalc(t, v, k, tempx, tempy);
				k++;
			}
			tmx = vx[i];
			tmy = miny;
		}
		//cvNamedWindow("character",CV_WINDOW_AUTOSIZE);
		//cvShowImage("character",img);
		//sprintf(ch,"%s.bmp",r);
		//cvSaveImage(ch,img,0);
		//cvWaitKey(1);
		cvDestroyWindow("character");
		cvReleaseImage(&img);
	}
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

void zonecalc(int zn, int v, int k, int tempx[], int tempy[])
{
	int i;
	float fv1 = 0, fv2 = 0;


	//printf("%d",zn);
	//printf("%d\n",v);
   // printf("*****************  %d *******************",zn);
  //  system("pause");
	if (zn == 4)
	{
		counter++;
		switch (k)
		{
		case 1: z1c = v;
			printf("%d\n", z1c);
			for (i = 0; i < z1c; i++)
			{
				z1x[i] = tempx[i];
				z1y[i] = tempy[i];
				printf("\t\t%d %d\n", z1x[i], z1y[i]);
			}
			break;
		case 2: z2c = v;
			printf("%d\n", z2c);
			for (i = 0; i < z2c; i++)
			{
				z2x[i] = tempx[i];
				z2y[i] = tempy[i];
				printf("\t\t%d %d\n", z2x[i], z2y[i]);
			}
			break;
		case 3: z3c = v;
			printf("%d\n", z3c);
			for (i = 0; i < z3c; i++)
			{
				z3x[i] = tempx[i];
				z3y[i] = tempy[i];

				printf("\t\t%d %d\n", z3x[i], z3y[i]);
			}
			break;
		case 4: z4c = v;
			printf("%d\n", z4c);
			for (i = 0; i < z4c; i++)
			{
				z4x[i] = tempx[i];
				z4y[i] = tempy[i];
				printf("\t\t%d %d\n", z4x[i], z4y[i]);
			}
			break;
		}printf("counter=%d", counter);
		if (counter == zn)
		{
			fv1 = frechet(z1, z2, z1x, z1y, z2x, z2y, z1c, z2c);
			fv2 = frechet(z2, z1, z2x, z2y, z1x, z1y, z2c, z1c);
			if (fv1 <= fv2) {
				f1 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z2, f1);
			}
			else {
				f1 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z2, f1);
			}
			fv1 = frechet(z1, z3, z1x, z1y, z3x, z3y, z1c, z3c);
			fv2 = frechet(z3, z1, z3x, z3y, z1x, z1y, z3c, z1c);
			if (fv1 <= fv2) {
				f2 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z3, f2);
			}
			else {
				f2 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z3, f2);
			}
			fv1 = frechet(z1, z4, z1x, z1y, z4x, z4y, z1c, z4c);
			fv2 = frechet(z4, z1, z4x, z4y, z1x, z1y, z4c, z1c);
			if (fv1 <= fv2) {
				f3 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z4, f3);
			}
			else {
				f3 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z4, f3);
			}
			fv1 = frechet(z2, z3, z2x, z2y, z3x, z3y, z2c, z3c);
			fv2 = frechet(z3, z2, z3x, z3y, z2x, z2y, z3c, z2c);
			if (fv1 <= fv2) {
				f4 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z3, f4);
			}
			else {
				f4 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z3, f4);
			}
			fv1 = frechet(z2, z4, z2x, z2y, z4x, z4y, z2c, z4c);
			fv2 = frechet(z4, z2, z4x, z4y, z2x, z2y, z4c, z2c);
			if (fv1 <= fv2) {
				f5 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z4, f5);
			}
			else {
				f5 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z4, f5);
			}
			fv1 = frechet(z3, z4, z3x, z3y, z4x, z4y, z3c, z4c);
			fv2 = frechet(z4, z3, z4x, z4y, z3x, z3y, z4c, z3c);
			if (fv1 <= fv2) {
				f6 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z4, f6);
			}
			else {
				f6 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z4, f6);
			}
			printf("\n");
			//FILE *ptr;
	//ptr=fopen("C:\\FRECHETDAT\\frechetCheck_newz25.dat","a");
	//fprintf(ptr,"%f,%f,%f,%f,%f,%f,A\n",f1,f2,f3,f4,f5,f6);
	//fclose(ptr);
		}
	}
	if (zn == 9)
	{
		counter++;
		switch (k)
		{
		case 1: z1c = v;
			//printf("%d\n",z1c);
			for (i = 0; i < z1c; i++)
			{
				z1x[i] = tempx[i];
				z1y[i] = tempy[i];
				//printf("\t\t%d %d\n",z1x[i],z1y[i]);
			}
			break;
		case 2: z2c = v;
			//printf("%d\n",z2c);
			for (i = 0; i < z2c; i++)
			{
				z2x[i] = tempx[i];
				z2y[i] = tempy[i];
				// printf("\t\t%d %d\n",z2x[i],z2y[i]);
			}
			break;
		case 3: z3c = v;
			//printf("%d\n",z3c);
			for (i = 0; i < z3c; i++)
			{
				z3x[i] = tempx[i];
				z3y[i] = tempy[i];
				//printf("\t\t%d %d\n",z3x[i],z3y[i]);
			}
			break;
		case 4: z4c = v;
			//printf("%d\n",z4c);
			for (i = 0; i < z4c; i++)
			{
				z4x[i] = tempx[i];
				z4y[i] = tempy[i];
				//printf("\t\t%d %d\n",z4x[i],z4y[i]);
			}
			break;
		case 5: z5c = v;
			//printf("%d\n",z5c);
			for (i = 0; i < z5c; i++)
			{
				z5x[i] = tempx[i];
				z5y[i] = tempy[i];
				//printf("\t\t%d %d\n",z5x[i],z5y[i]);
			}
			break;
		case 6: z6c = v;
			// printf("%d\n",z6c);
			for (i = 0; i < z6c; i++)
			{
				z6x[i] = tempx[i];
				z6y[i] = tempy[i];
				//printf("\t\t%d %d\n",z6x[i],z6y[i]);
			}
			break;
		case 7: z7c = v;
			//printf("%d\n",z7c);
			for (i = 0; i < z7c; i++)
			{
				z7x[i] = tempx[i];
				z7y[i] = tempy[i];
				//printf("\t\t%d %d\n",z7x[i],z7y[i]);
			}
			break;
		case 8: z8c = v;
			//printf("%d\n",z8c);
			for (i = 0; i < z8c; i++)
			{
				z8x[i] = tempx[i];
				z8y[i] = tempy[i];
				//printf("\t\t%d %d\n",z8x[i],z8y[i]);
			}
			break;
		case 9: z9c = v;
			//printf("%d\n",z9c);
			for (i = 0; i < z9c; i++)
			{
				z9x[i] = tempx[i];
				z9y[i] = tempy[i];
				//printf("\t\t%d %d\n",z9x[i],z9y[i]);
			}
			break;
		}
		if (counter % zn == 0)
		{
			if (z1c != 0 && z2c != 0)
			{
				fv1 = frechet(z1, z2, z1x, z1y, z2x, z2y, z1c, z2c);
				fv2 = frechet(z2, z1, z2x, z2y, z1x, z1y, z2c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f1 = fv1;
			else
				f1 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z2, f1); printf("\n");
			if (z1c != 0 && z3c != 0)
			{
				fv1 = frechet(z1, z3, z1x, z1y, z3x, z3y, z1c, z3c);
				fv2 = frechet(z3, z1, z3x, z3y, z1x, z1y, z3c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f2 = fv1;
			else
				f2 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z3, f2); printf("\n");
			if (z1c != 0 && z4c != 0)
			{
				fv1 = frechet(z1, z4, z1x, z1y, z4x, z4y, z1c, z4c);
				fv2 = frechet(z4, z1, z4x, z4y, z1x, z1y, z4c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f3 = fv1;
			else
				f3 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z4, f3); printf("\n");
			if (z1c != 0 && z5c != 0)
			{
				fv1 = frechet(z1, z5, z1x, z1y, z5x, z5y, z1c, z5c);
				fv2 = frechet(z5, z1, z5x, z5y, z1x, z1y, z5c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f4 = fv1;
			else
				f4 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z5, f4); printf("\n");
			if (z1c != 0 && z6c != 0)
			{
				fv1 = frechet(z1, z6, z1x, z1y, z6x, z6y, z1c, z6c);
				fv2 = frechet(z6, z1, z6x, z6y, z1x, z1y, z6c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f5 = fv1;
			else
				f5 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z6, f5); printf("\n");
			if (z1c != 0 && z7c != 0)
			{
				fv1 = frechet(z1, z7, z1x, z1y, z7x, z7y, z1c, z7c);
				fv2 = frechet(z7, z1, z7x, z7y, z1x, z1y, z7c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f6 = fv1;
			else
				f6 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z7, f6); printf("\n");
			if (z1c != 0 && z8c != 0)
			{
				fv1 = frechet(z1, z8, z1x, z1y, z2x, z2y, z1c, z8c);
				fv2 = frechet(z8, z1, z8x, z8y, z1x, z1y, z8c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f7 = fv1;
			else
				f7 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z8, f7); printf("\n");
			if (z1c != 0 && z9c != 0)
			{
				fv1 = frechet(z1, z9, z1x, z1y, z9x, z9y, z1c, z9c);
				fv2 = frechet(z9, z1, z9x, z9y, z1x, z1y, z9c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f8 = fv1;
			else
				f8 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z9, f8); printf("\n");
			if (z2c != 0 && z3c != 0)
			{
				fv1 = frechet(z2, z3, z2x, z2y, z3x, z3y, z2c, z3c);
				fv2 = frechet(z3, z2, z3x, z3y, z2x, z2y, z3c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f9 = fv1;
			else
				f9 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z3, f9); printf("\n");
			if (z2c != 0 && z4c != 0)
			{
				fv1 = frechet(z2, z4, z2x, z2y, z4x, z4y, z2c, z4c);
				fv2 = frechet(z4, z2, z4x, z4y, z2x, z2y, z4c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f10 = fv1;
			else
				f10 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z4, f10); printf("\n");
			if (z2c != 0 && z5c != 0)
			{
				fv1 = frechet(z2, z5, z2x, z2y, z5x, z5y, z2c, z5c);
				fv2 = frechet(z5, z2, z5x, z5y, z2x, z2y, z5c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f11 = fv1;
			else
				f11 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z5, f11); printf("\n");
			if (z2c != 0 && z6c != 0)
			{
				fv1 = frechet(z2, z6, z2x, z2y, z6x, z6y, z2c, z6c);
				fv2 = frechet(z6, z2, z6x, z6y, z2x, z2y, z6c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f12 = fv1;
			else
				f12 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z6, f12); printf("\n");
			if (z2c != 0 && z7c != 0)
			{
				fv1 = frechet(z2, z7, z2x, z2y, z7x, z7y, z2c, z7c);
				fv2 = frechet(z7, z2, z7x, z7y, z2x, z2y, z7c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f13 = fv1;
			else
				f13 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z7, f13); printf("\n");
			if (z2c != 0 && z8c != 0)
			{
				fv1 = frechet(z2, z8, z2x, z2y, z8x, z8y, z2c, z8c);
				fv2 = frechet(z8, z2, z8x, z8y, z2x, z2y, z8c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f14 = fv1;
			else
				f14 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z8, f14); printf("\n");
			if (z2c != 0 && z9c != 0)
			{
				fv1 = frechet(z2, z9, z2x, z2y, z9x, z9y, z2c, z9c);
				fv2 = frechet(z9, z2, z9x, z9y, z2x, z2y, z9c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f15 = fv1;
			else
				f15 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z9, f15); printf("\n");
			if (z3c != 0 && z4c != 0)
			{
				fv1 = frechet(z3, z4, z3x, z3y, z4x, z4y, z3c, z4c);
				fv2 = frechet(z4, z3, z4x, z4y, z3x, z3y, z4c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f16 = fv1;
			else
				f16 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z4, f16); printf("\n");
			printf("\n");
			if (z3c != 0 && z5c != 0)
			{
				fv1 = frechet(z3, z5, z3x, z3y, z5x, z5y, z3c, z5c);
				fv2 = frechet(z5, z3, z5x, z5y, z3x, z3y, z5c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f17 = fv1;
			else
				f17 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z5, f17); printf("\n");
			printf("\n");
			if (z3c != 0 && z6c != 0)
			{
				fv1 = frechet(z3, z6, z3x, z3y, z6x, z6y, z3c, z6c);
				fv2 = frechet(z6, z3, z6x, z6y, z3x, z3y, z6c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f18 = fv1;
			else
				f18 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z6, f18); printf("\n");
			printf("\n");
			if (z3c != 0 && z7c != 0)
			{
				fv1 = frechet(z3, z7, z3x, z3y, z7x, z7y, z3c, z7c);
				fv2 = frechet(z7, z3, z7x, z7y, z3x, z3y, z7c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f19 = fv1;
			else
				f19 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z7, f19); printf("\n");
			printf("\n");
			if (z3c != 0 && z8c != 0)
			{
				fv1 = frechet(z3, z8, z3x, z3y, z8x, z8y, z3c, z8c);
				fv2 = frechet(z8, z3, z8x, z8y, z3x, z3y, z8c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f20 = fv1;
			else
				f20 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z8, f20); printf("\n");
			printf("\n");
			if (z3c != 0 && z9c != 0)
			{
				fv1 = frechet(z3, z9, z3x, z3y, z9x, z9y, z3c, z9c);
				fv2 = frechet(z9, z3, z9x, z9y, z3x, z3y, z9c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f21 = fv1;
			else
				f21 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z9, f21); printf("\n");
			if (z5c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z5, z4x, z4y, z5x, z5y, z4c, z5c);
				fv2 = frechet(z5, z4, z5x, z5y, z4x, z4y, z5c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f22 = fv1;
			else
				f22 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z5, f22); printf("\n");

			if (z6c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z6, z4x, z4y, z6x, z6y, z4c, z6c);
				fv2 = frechet(z6, z4, z6x, z6y, z4x, z4y, z6c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f23 = fv1;
			else
				f23 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z6, f23); printf("\n");

			if (z7c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z7, z4x, z4y, z7x, z7y, z4c, z7c);
				fv2 = frechet(z7, z4, z7x, z7y, z4x, z4y, z7c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f24 = fv1;
			else
				f24 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z7, f24); printf("\n");

			if (z8c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z8, z4x, z4y, z8x, z8y, z4c, z8c);
				fv2 = frechet(z8, z4, z8x, z8y, z4x, z4y, z8c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f25 = fv1;
			else
				f25 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z8, f25); printf("\n");

			if (z9c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z9, z4x, z4y, z9x, z9y, z4c, z9c);
				fv2 = frechet(z9, z4, z9x, z9y, z4x, z4y, z9c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f26 = fv1;
			else
				f26 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z9, f26); printf("\n");
			if (z5c != 0 && z6c != 0)
			{
				fv1 = frechet(z5, z6, z5x, z5y, z6x, z6y, z5c, z6c);
				fv2 = frechet(z6, z5, z6x, z6y, z5x, z5y, z6c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f27 = fv1;
			else
				f27 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z6, f27); printf("\n");
			if (z5c != 0 && z7c != 0)
			{
				fv1 = frechet(z5, z7, z5x, z5y, z7x, z7y, z5c, z7c);
				fv2 = frechet(z7, z5, z7x, z7y, z5x, z5y, z7c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f28 = fv1;
			else
				f28 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z7, f28); printf("\n");

			if (z5c != 0 && z8c != 0)
			{
				fv1 = frechet(z5, z8, z5x, z5y, z8x, z8y, z5c, z8c);
				fv2 = frechet(z8, z5, z8x, z8y, z5x, z5y, z8c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f29 = fv1;
			else
				f29 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z8, f29); printf("\n");
			printf("\n");
			if (z5c != 0 && z9c != 0)
			{
				fv1 = frechet(z5, z9, z5x, z5y, z9x, z9y, z5c, z9c);
				fv2 = frechet(z9, z5, z9x, z9y, z5x, z5y, z9c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f30 = fv1;
			else
				f30 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z9, f30); printf("\n");
			if (z6c != 0 && z7c != 0)
			{
				fv1 = frechet(z6, z7, z6x, z6y, z7x, z7y, z6c, z7c);
				fv2 = frechet(z7, z6, z7x, z7y, z6x, z6y, z7c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f31 = fv1;
			else
				f31 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z7, f31); printf("\n");
			printf("\n");
			if (z6c != 0 && z8c != 0)
			{
				fv1 = frechet(z6, z8, z6x, z6y, z8x, z8y, z6c, z8c);
				fv2 = frechet(z8, z6, z8x, z8y, z6x, z6y, z8c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f32 = fv1;
			else
				f32 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z8, f32); printf("\n");
			if (z6c != 0 && z9c != 0)
			{
				fv1 = frechet(z6, z9, z6x, z6y, z9x, z9y, z6c, z9c);
				fv2 = frechet(z9, z6, z9x, z9y, z6x, z6y, z9c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f33 = fv1;
			else
				f33 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z9, f33); printf("\n");
			if (z7c != 0 && z8c != 0)
			{
				fv1 = frechet(z7, z8, z7x, z7y, z8x, z8y, z7c, z8c);
				fv2 = frechet(z8, z7, z8x, z8y, z7x, z7y, z8c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f34 = fv1;
			else
				f34 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z8, f34); printf("\n");
			if (z7c != 0 && z9c != 0)
			{
				fv1 = frechet(z7, z9, z7x, z7y, z9x, z9y, z7c, z9c);
				fv2 = frechet(z9, z7, z9x, z9y, z7x, z7y, z9c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f35 = fv1;
			else
				f35 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z9, f35); printf("\n");
			if (z9c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z9, z8x, z8y, z9x, z9y, z8c, z9c);
				fv2 = frechet(z9, z8, z9x, z9y, z8x, z8y, z9c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f36 = fv1;
			else
				f36 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z9, f36); printf("\n");
			FILE* ptr;
			ptr = fopen("F:\\SPS Sir Project\\Frechet\\FRECHETDAT\\9_zones.dat", "a");
			fprintf(ptr, "\n%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,AA", f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36);

			fclose(ptr);

		}
	}


	/* if(zn == 16)
	 {
		 counter++;
		 switch(k)
		 {
			 case 1: z1c = v;
					 printf("%d\n",z1c);
					 for(i=0;i<z1c;i++)
					 {
						 z1x[i] = tempx[i];
						 z1y[i] = tempy[i];
						 printf("\t\t%d %d\n",z1x[i],z1y[i]);
					 }
					 break;
			 case 2: z2c = v;
					 printf("%d\n",z2c);
					 for(i=0;i<z2c;i++)
					 {
						 z2x[i] = tempx[i];
						 z2y[i] = tempy[i];
						 printf("\t\t%d %d\n",z2x[i],z2y[i]);
					 }
					 break;
			 case 3: z3c = v;
					 printf("%d\n",z3c);
					 for(i=0;i<z3c;i++)
					 {
						 z3x[i] = tempx[i];
						 z3y[i] = tempy[i];
						 printf("\t\t%d %d\n",z3x[i],z3y[i]);
					 }
					 break;
			 case 4: z4c = v;
					 printf("%d\n",z4c);
					 for(i=0;i<z4c;i++)
					 {
						 z4x[i] = tempx[i];
						 z4y[i] = tempy[i];
						 printf("\t\t%d %d\n",z4x[i],z4y[i]);
					 }
					 break;
			 case 5: z5c = v;
					 printf("%d\n",z5c);
					 for(i=0;i<z5c;i++)
					 {
						 z5x[i] = tempx[i];
						 z5y[i] = tempy[i];
						 printf("\t\t%d %d\n",z5x[i],z5y[i]);
					 }
					 break;
			 case 6: z6c = v;
					 printf("%d\n",z6c);
					 for(i=0;i<z6c;i++)
					 {
						 z6x[i] = tempx[i];
						 z6y[i] = tempy[i];
						 printf("\t\t%d %d\n",z6x[i],z6y[i]);
					 }
					 break;
			 case 7: z7c = v;
					 printf("%d\n",z7c);
					 for(i=0;i<z7c;i++)
					 {
						 z7x[i] = tempx[i];
						 z7y[i] = tempy[i];
						 printf("\t\t%d %d\n",z7x[i],z7y[i]);
					 }
					 break;
			 case 8: z8c = v;
					 printf("%d\n",z8c);
					 for(i=0;i<z8c;i++)
					 {
						 z8x[i] = tempx[i];
						 z8y[i] = tempy[i];
						 printf("\t\t%d %d\n",z8x[i],z8y[i]);
					 }
					 break;
			 case 9: z9c = v;
					 printf("%d\n",z9c);
					 for(i=0;i<z9c;i++)
					 {
						 z9x[i] = tempx[i];
						 z9y[i] = tempy[i];
						 printf("\t\t%d %d\n",z9x[i],z9y[i]);
					 }
					 break;
			 case 10: z10c = v;
					 printf("%d\n",z10c);
					 for(i=0;i<z10c;i++)
					 {
						 z10x[i] = tempx[i];
						 z10y[i] = tempy[i];
						 printf("\t\t%d %d\n",z10x[i],z10y[i]);
					 }
					 break;
			 case 11: z11c = v;
					 printf("%d\n",z11c);
					 for(i=0;i<z11c;i++)
					 {
						 z11x[i] = tempx[i];
						 z11y[i] = tempy[i];
						 printf("\t\t%d %d\n",z11x[i],z11y[i]);
					 }
					 break;
			 case 12: z12c = v;
					 printf("%d\n",z12c);
					 for(i=0;i<z12c;i++)
					 {
						 z12x[i] = tempx[i];
						 z12y[i] = tempy[i];
						 printf("\t\t%d %d\n",z12x[i],z12y[i]);
					 }
					 break;
			 case 13: z13c = v;
					 printf("%d\n",z13c);
					 for(i=0;i<z13c;i++)
					 {
						 z13x[i] = tempx[i];
						 z13y[i] = tempy[i];
						 printf("\t\t%d %d\n",z13x[i],z13y[i]);
					 }
					 break;
			 case 14: z14c = v;
					 printf("%d\n",z14c);
					 for(i=0;i<z14c;i++)
					 {
						 z14x[i] = tempx[i];
						 z14y[i] = tempy[i];
						 printf("\t\t%d %d\n",z14x[i],z14y[i]);
					 }
					 break;
			 case 15: z15c = v;
					 printf("%d\n",z15c);
					 for(i=0;i<z15c;i++)
					 {
						 z15x[i] = tempx[i];
						 z15y[i] = tempy[i];
						 printf("\t\t%d %d\n",z15x[i],z15y[i]);
					 }
					 break;
			 case 16: z16c = v;
					 printf("%d\n",z16c);
					 for(i=0;i<z16c;i++)
					 {
						 z16x[i] = tempx[i];
						 z16y[i] = tempy[i];
						 printf("\t\t%d %d\n",z16x[i],z16y[i]);
					 }
					 break;
		 }printf("counter=%d",counter);
		 if(counter == zn)
		 {
			 fv1 = frechet(z1, z2, z1x,z1y, z2x, z2y, z1c, z2c );
			 fv2 = frechet(z2, z1, z2x,z2y, z1x, z1y, z2c, z1c );
			 if(fv1<=fv2){
				 f1 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z2,f1);}
			 else{
				 f1 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z2,f1);}
			 fv1 = frechet(z1, z3, z1x,z1y, z3x, z3y, z1c, z3c );
			 fv2 = frechet(z3, z1, z3x,z3y, z1x, z1y, z3c, z1c );
			 if(fv1<=fv2){
				 f2 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z3,f2);}
			 else{
				 f2 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z3,f2);}
			 fv1 = frechet(z1, z4, z1x,z1y, z4x, z4y, z1c, z4c );
			 fv2 = frechet(z4, z1, z4x,z4y, z1x, z1y, z4c, z1c );
			 if(fv1<=fv2){
				 f3 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z4,f3);}
			 else{
				 f3 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z4,f3);}
			 fv1 = frechet(z1, z5, z1x,z1y, z5x, z5y, z1c, z5c );
			 fv2 = frechet(z5, z1, z5x,z5y, z1x, z1y, z5c, z1c );
			 if(fv1<=fv2){
				 f4 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z5,f4);}
			 else{
				 f4 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z5,f4);}
			 fv1 = frechet(z1, z6, z1x,z1y, z6x, z6y, z1c, z6c );
			 fv2 = frechet(z6, z1, z6x,z6y, z1x, z1y, z6c, z1c );
			 if(fv1<=fv2){
				 f5 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z6,f5);}
			 else{
				 f5 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z6,f5);}
			 fv1 = frechet(z1, z7, z1x,z1y, z7x, z7y, z1c, z7c );
			 fv2 = frechet(z7, z1, z7x,z7y, z1x, z1y, z7c, z1c );
			 if(fv1<=fv2){
				 f6 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z7,f6);}
			 else{
				 f6 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z7,f6);}
			 fv1 = frechet(z1, z8, z1x,z1y, z8x, z8y, z1c, z8c );
			 fv2 = frechet(z8, z1, z8x,z8y, z1x, z1y, z8c, z1c );
			 if(fv1<=fv2){
				 f7 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z8,f7);}
			 else{
				 f7 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z8,f7);}
			 fv1 = frechet(z1, z9, z1x,z1y, z9x, z9y, z1c, z9c );
			 fv2 = frechet(z9, z1, z9x,z9y, z1x, z1y, z9c, z1c );
			 if(fv1<=fv2){
				 f8 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z9,f8);}
			 else{
				 f8 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z9,f8);}
			 fv1 = frechet(z1, z10, z1x,z1y, z10x, z10y, z1c, z10c );
			 fv2 = frechet(z10, z1, z10x,z10y, z1x, z1y, z10c, z1c );
			 if(fv1<=fv2){
				 f9 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z10,f9);}
			 else{
				 f9 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z10,f9);}
			 fv1 = frechet(z1, z11, z1x,z1y, z11x, z11y, z1c, z11c );
			 fv2 = frechet(z11, z1, z11x,z11y, z1x, z1y, z11c, z1c );
			 if(fv1<=fv2){
				 f10 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z11,f10);}
			 else{
				 f10 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z11,f10);}
			 fv1 = frechet(z1, z12, z1x,z1y, z12x, z12y, z1c, z12c );
			 fv2 = frechet(z12, z1, z12x,z12y, z1x, z1y, z12c, z1c );
			 if(fv1<=fv2){
				 f11 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z12,f11);}
			 else{
				 f11 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z12,f11);}
			 fv1 = frechet(z1, z13, z1x,z1y, z13x, z13y, z1c, z13c );
			 fv2 = frechet(z13, z1, z13x,z13y, z1x, z1y, z13c, z1c );
			 if(fv1<=fv2){
				 f12 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z13,f12);}
			 else{
				 f12 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z13,f12);}
			 fv1 = frechet(z1, z14, z1x,z1y, z14x, z14y, z1c, z14c );
			 fv2 = frechet(z14, z1, z14x,z14y, z1x, z1y, z14c, z1c );
			 if(fv1<=fv2){
				 f13 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z14,f13);}
			 else{
				 f13 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z14,f13);}
			 fv1 = frechet(z1, z15, z1x,z1y, z15x, z15y, z1c, z15c );
			 fv2 = frechet(z15, z1, z15x,z15y, z1x, z1y, z15c, z1c );
			 if(fv1<=fv2){
				 f14 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z15,f14);}
			 else{
				 f14 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z15,f14);}
			 fv1 = frechet(z1, z16, z1x,z1y, z16x, z16y, z1c, z16c );
			 fv2 = frechet(z16, z1, z16x,z16y, z1x, z1y, z16c, z1c );
			 if(fv1<=fv2){
				 f15 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z1,z16,f15);}
			 else{
				 f15 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z1,z16,f15);}
			 fv1 = frechet(z2, z3, z2x,z2y, z3x, z3y, z2c, z3c );
			 fv2 = frechet(z3, z2, z3x,z3y, z2x, z2y, z3c, z2c );
			 if(fv1<=fv2){
				 f16 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z3,f16);}
			 else{
				 f16 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z3,f16);}
			 fv1 = frechet(z2, z4, z2x,z2y, z4x, z4y, z2c, z4c );
			 fv2 = frechet(z4, z2, z4x,z4y, z2x, z2y, z4c, z2c );
			 if(fv1<=fv2){
				 f17 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z4,f17);}
			 else{
				 f17 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z4,f17);}
			 fv1 = frechet(z2, z5, z2x,z2y, z5x, z5y, z2c, z5c );
			 fv2 = frechet(z5, z2, z5x,z5y, z2x, z2y, z5c, z2c );
			 if(fv1<=fv2){
				 f18 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z5,f18);}
			 else{
				 f18 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z5,f18);}
			 fv1 = frechet(z2, z6, z2x,z2y, z6x, z6y, z2c, z6c );
			 fv2 = frechet(z6, z2, z6x,z6y, z2x, z2y, z6c, z2c );
			 if(fv1<=fv2){
				 f19 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z6,f19);}
			 else{
				 f19 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z6,f19);}
			 fv1 = frechet(z2, z7, z2x,z2y, z7x, z7y, z2c, z7c );
			 fv2 = frechet(z7, z2, z7x,z7y, z2x, z2y, z7c, z2c );
			 if(fv1<=fv2){
				 f20 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z7,f20);}
			 else{
				 f20 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z7,f20);}
			 fv1 = frechet(z2, z8, z2x,z2y, z8x, z8y, z2c, z8c );
			 fv2 = frechet(z8, z2, z8x,z8y, z2x, z2y, z8c, z2c );
			 if(fv1<=fv2){
				 f21 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z8,f21);}
			 else{
				 f21 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z8,f21);}
			 fv1 = frechet(z2, z9, z2x,z2y, z9x, z9y, z2c, z9c );
			 fv2 = frechet(z9, z2, z9x,z9y, z2x, z2y, z9c, z2c );
			 if(fv1<=fv2){
				 f22 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z9,f22);}
			 else{
				 f22 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z9,f22);}
			 fv1 = frechet(z2, z10, z2x,z2y, z10x, z10y, z2c, z10c );
			 fv2 = frechet(z10, z2, z10x,z10y, z2x, z2y, z10c, z2c );
			 if(fv1<=fv2){
				 f23 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z10,f23);}
			 else{
				 f23 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z10,f9);}
			 fv1 = frechet(z2, z11, z2x,z2y, z11x, z11y, z2c, z11c );
			 fv2 = frechet(z11, z2, z11x,z11y, z2x, z2y, z11c, z2c );
			 if(fv1<=fv2){
				 f24 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z11,f24);}
			 else{
				 f24 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z11,f24);}
			 fv1 = frechet(z2, z12, z2x,z2y, z12x, z12y, z2c, z12c );
			 fv2 = frechet(z12, z2, z12x,z12y, z2x, z2y, z12c, z2c );
			 if(fv1<=fv2){
				 f25 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z12,f25);}
			 else{
				 f25 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z12,f25);}
			 fv1 = frechet(z2, z13, z2x,z2y, z13x, z13y, z2c, z13c );
			 fv2 = frechet(z13, z2, z13x,z13y, z2x, z2y, z13c, z2c );
			 if(fv1<=fv2){
				 f26 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z13,f26);}
			 else{
				 f26 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z13,f26);}
			 fv1 = frechet(z2, z14, z2x,z2y, z14x, z14y, z2c, z14c );
			 fv2 = frechet(z14, z2, z14x,z14y, z2x, z2y, z14c, z2c );
			 if(fv1<=fv2){
				 f27 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z14,f27);}
			 else{
				 f27 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z14,f27);}
			 fv1 = frechet(z2, z15, z2x,z2y, z15x, z15y, z2c, z15c );
			 fv2 = frechet(z15, z2, z15x,z15y, z2x, z2y, z15c, z2c );
			 if(fv1<=fv2){
				 f28 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z15,f28);}
			 else{
				 f28 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z15,f28);}
			 fv1 = frechet(z2, z16, z2x,z2y, z16x, z16y, z2c, z16c );
			 fv2 = frechet(z16, z2, z16x,z16y, z2x, z2y, z16c, z2c );
			 if(fv1<=fv2){
				 f29 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z2,z16,f29);}
			 else{
				 f29 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z2,z16,f29);}
			 fv1 = frechet(z3, z4, z3x,z3y, z4x, z4y, z3c, z4c );
			 fv2 = frechet(z4, z3, z4x,z4y, z3x, z3y, z4c, z3c );
			 if(fv1<=fv2){
				 f30 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z4,f30);}
			 else{
				 f30 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z4,f30);}
			 fv1 = frechet(z3, z5, z3x,z3y, z5x, z5y, z3c, z5c );
			 fv2 = frechet(z5, z3, z5x,z5y, z3x, z3y, z5c, z3c );
			 if(fv1<=fv2){
				 f31 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z5,f31);}
			 else{
				 f31 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z5,f31);}
			 fv1 = frechet(z3, z6, z3x,z3y, z6x, z6y, z3c, z6c );
			 fv2 = frechet(z6, z3, z6x,z6y, z3x, z3y, z6c, z3c );
			 if(fv1<=fv2){
				 f32 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z6,f32);}
			 else{
				 f32 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z6,f32);}
			 fv1 = frechet(z3, z7, z3x,z3y, z7x, z7y, z3c, z7c );
			 fv2 = frechet(z7, z3, z7x,z7y, z3x, z3y, z7c, z3c );
			 if(fv1<=fv2){
				 f33 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z7,f33);}
			 else{
				 f33 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z7,f33);}
			 fv1 = frechet(z3, z8, z3x,z3y, z8x, z8y, z3c, z8c );
			 fv2 = frechet(z8, z3, z8x,z8y, z3x, z3y, z8c, z3c );
			 if(fv1<=fv2){
				 f34 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z8,f34);}
			 else{
				 f34 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z8,f34);}
			 fv1 = frechet(z3, z9, z3x,z3y, z9x, z9y, z3c, z9c );
			 fv2 = frechet(z9, z3, z9x,z9y, z3x, z3y, z9c, z3c );
			 if(fv1<=fv2){
				 f35 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z9,f35);}
			 else{
				 f35 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z9,f35);}
			 fv1 = frechet(z3, z10, z3x,z3y, z10x, z10y, z3c, z10c );
			 fv2 = frechet(z10, z3, z10x,z10y, z3x, z3y, z10c, z3c );
			 if(fv1<=fv2){
				 f36 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z10,f36);}
			 else{
				 f36 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z10,f36);}
			 fv1 = frechet(z3, z11, z3x,z3y, z11x, z11y, z3c, z11c );
			 fv2 = frechet(z11, z3, z11x,z11y, z3x, z3y, z11c, z3c );
			 if(fv1<=fv2){
				 f37 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z11,f37);}
			 else{
				 f37 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z11,f37);}
			 fv1 = frechet(z3, z12, z3x,z3y, z12x, z12y, z3c, z12c );
			 fv2 = frechet(z12, z3, z12x,z12y, z3x, z3y, z12c, z3c );
			 if(fv1<=fv2){
				 f38 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z12,f38);}
			 else{
				 f38 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z12,f38);}
			 fv1 = frechet(z3, z13, z3x,z3y, z13x, z13y, z3c, z13c );
			 fv2 = frechet(z13, z3, z13x,z13y, z3x, z3y, z13c, z3c );
			 if(fv1<=fv2){
				 f39 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z13,f39);}
			 else{
				 f39 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z13,f39);}
			 fv1 = frechet(z3, z14, z3x,z3y, z14x, z14y, z3c, z14c );
			 fv2 = frechet(z14, z3, z14x,z14y, z3x, z3y, z14c, z3c );
			 if(fv1<=fv2){
				 f40 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z14,f40);}
			 else{
				 f40 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z14,f40);}
			 fv1 = frechet(z3, z15, z3x,z3y, z15x, z15y, z3c, z15c );
			 fv2 = frechet(z15, z3, z15x,z15y, z3x, z3y, z15c, z3c );
			 if(fv1<=fv2){
				 f41 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z15,f41);}
			 else{
				 f41 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z15,f41);}
			 fv1 = frechet(z3, z16, z3x,z3y, z16x, z16y, z3c, z16c );
			 fv2 = frechet(z16, z3, z16x,z16y, z3x, z3y, z16c, z3c );
			 if(fv1<=fv2){
				 f42 = fv1;
				 printf("Frechet distance between %d and %d is: %f",z3,z16,f42);}
			 else{
				 f42 = fv2;
				 printf("Frechet distance between %d and %d is: %f",z3,z16,f42);}
			 fv1 = frechet(z4, z5, z4x,z4y, z5x, z5y, z4c, z5c );
			 fv2 = frechet(z5, z4, z5x,z5y, z4x, z4y, z5c, z4c );
			 if(fv1<=fv2)
				 f43 = fv1;
			 else
				 f43 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z5,f43);
			 fv1 = frechet(z4, z6, z4x,z4y, z6x, z6y, z4c, z6c );
			 fv2 = frechet(z6, z4, z6x,z6y, z4x, z4y, z6c, z4c );
			 if(fv1<=fv2)
				 f44 = fv1;
			 else
				 f44 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z6,f44);
			 fv1 = frechet(z4, z7, z4x,z4y, z7x, z7y, z4c, z7c );
			 fv2 = frechet(z7, z4, z7x,z7y, z4x, z4y, z7c, z4c );
			 if(fv1<=fv2)
				 f45 = fv1;
			 else
				 f45 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z7,f45);
			 fv1 = frechet(z4, z8, z4x,z4y, z8x, z8y, z4c, z8c );
			 fv2 = frechet(z8, z4, z8x,z8y, z4x, z4y, z8c, z4c );
			 if(fv1<=fv2)
				 f46 = fv1;
			 else
				 f46 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z8,f46);
			 fv1 = frechet(z4, z9, z4x,z4y, z9x, z9y, z4c, z9c );
			 fv2 = frechet(z9, z4, z9x,z9y, z4x, z4y, z9c, z4c );
			 if(fv1<=fv2)
				 f47 = fv1;
			 else
				 f47 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z9,f47);
			 fv1 = frechet(z4, z10, z4x,z4y, z10x, z10y, z4c, z10c );
			 fv2 = frechet(z10, z4, z10x,z10y, z4x, z4y, z10c, z4c );
			 if(fv1<=fv2)
				 f48 = fv1;
			 else
				 f48 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z10,f48);
			 fv1 = frechet(z4, z11, z4x,z4y, z11x, z11y, z4c, z11c );
			 fv2 = frechet(z11, z4, z11x,z11y, z4x, z4y, z11c, z4c );
			 if(fv1<=fv2)
				 f49 = fv1;
			 else
				 f49 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z11,f49);
			 fv1 = frechet(z4, z12, z4x,z4y, z12x, z12y, z4c, z12c );
			 fv2 = frechet(z12, z4, z12x,z12y, z4x, z4y, z12c, z4c );
			 if(fv1<=fv2)
				 f50 = fv1;
			 else
				 f50 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z12,f50);
			 fv1 = frechet(z4, z13, z4x,z4y, z13x, z13y, z4c, z13c );
			 fv2 = frechet(z13, z4, z13x,z13y, z4x, z4y, z13c, z4c );
			 if(fv1<=fv2)
				 f51 = fv1;
			 else
				 f51 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z13,f51);
			 fv1 = frechet(z4, z14, z4x,z4y, z14x, z14y, z4c, z14c );
			 fv2 = frechet(z14, z4, z14x,z14y, z4x, z4y, z14c, z4c );
			 if(fv1<=fv2)
				 f52 = fv1;
			 else
				 f52 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z14,f52);
			 fv1 = frechet(z4, z15, z4x,z4y, z15x, z15y, z4c, z15c );
			 fv2 = frechet(z15, z4, z15x,z15y, z4x, z4y, z15c, z4c );
			 if(fv1<=fv2)
				 f53 = fv1;
			 else
				 f53 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z15,f53);
			 fv1 = frechet(z4, z16, z4x,z4y, z16x, z16y, z4c, z16c );
			 fv2 = frechet(z16, z4, z16x,z16y, z4x, z4y, z16c, z4c );
			 if(fv1<=fv2)
				 f54 = fv1;
			 else
				 f54 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z4,z16,f54);
			 fv1 = frechet(z5, z6, z5x,z5y, z6x, z6y, z5c, z6c );
			 fv2 = frechet(z6, z5, z6x,z6y, z5x, z5y, z6c, z5c );
			 if(fv1<=fv2)
				 f55 = fv1;
			 else
				 f55 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z6,f55);
			 fv1 = frechet(z5, z7, z5x,z5y, z7x, z7y, z5c, z7c );
			 fv2 = frechet(z7, z5, z7x,z7y, z5x, z5y, z7c, z5c );
			 if(fv1<=fv2)
				 f56 = fv1;
			 else
				 f56 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z7,f56);
			 fv1 = frechet(z5, z8, z5x,z5y, z8x, z8y, z5c, z8c );
			 fv2 = frechet(z8, z5, z8x,z8y, z5x, z5y, z8c, z5c );
			 if(fv1<=fv2)
				 f57 = fv1;
			 else
				 f57 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z8,f57);
			 fv1 = frechet(z5, z9, z5x,z5y, z9x, z9y, z5c, z9c );
			 fv2 = frechet(z9, z3, z9x,z9y, z5x, z5y, z9c, z5c );
			 if(fv1<=fv2)
				 f58 = fv1;
			 else
				 f58 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z9,f58);
			 fv1 = frechet(z5, z10, z5x,z5y, z10x, z10y, z5c, z10c );
			 fv2 = frechet(z10, z5, z10x,z10y, z5x, z5y, z10c, z5c );
			 if(fv1<=fv2)
				 f59 = fv1;
			 else
				 f59 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z10,f59);
			 fv1 = frechet(z5, z11, z5x,z5y, z11x, z11y, z5c, z11c );
			 fv2 = frechet(z11, z5, z11x,z11y, z5x, z5y, z11c, z5c );
			 if(fv1<=fv2)
				 f60 = fv1;
			 else
				 f60 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z11,f60);
			 fv1 = frechet(z5, z12, z5x,z5y, z12x, z12y, z5c, z12c );
			 fv2 = frechet(z12, z5, z12x,z12y, z5x, z5y, z12c, z5c );
			 if(fv1<=fv2)
				 f61 = fv1;
			 else
				 f61 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z12,f61);
			 fv1 = frechet(z5, z13, z5x,z5y, z13x, z13y, z5c, z13c );
			 fv2 = frechet(z13, z5, z13x,z13y, z5x, z5y, z13c, z5c );
			 if(fv1<=fv2)
				 f62 = fv1;
			 else
				 f62 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z13,f62);
			 fv1 = frechet(z5, z14, z5x,z5y, z14x, z14y, z5c, z14c );
			 fv2 = frechet(z14, z5, z14x,z14y, z5x, z5y, z14c, z5c );
			 if(fv1<=fv2)
				 f63 = fv1;
			 else
				 f63 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z14,f63);
			 fv1 = frechet(z5, z15, z5x,z5y, z15x, z15y, z5c, z15c );
			 fv2 = frechet(z15, z5, z15x,z15y, z5x, z5y, z15c, z5c );
			 if(fv1<=fv2)
				 f64 = fv1;
			 else
				 f64 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z15,f64);
			 fv1 = frechet(z5, z16, z5x,z5y, z16x, z16y, z5c, z16c );
			 fv2 = frechet(z16, z5, z16x,z16y, z5x, z5y, z16c, z5c );
			 if(fv1<=fv2)
				 f65 = fv1;
			 else
				 f65 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z5,z16,f65);
			 printf("\n");
			 if(z6c!=0 && z7c!=0)
			 {
			 fv1 = frechet(z6, z7, z6x,z6y, z7x, z7y, z6c, z7c );//printf("fv1_test=%f",fv1);
			 fv2 = frechet(z7, z6, z7x,z7y, z6x, z6y, z7c, z6c );//printf("fv2_test=%f",fv2);
			 }
			 else
		 {
			 fv1=0;fv2=0;
		 }

			 //printf("\n\n%f",frechet(z6, z7, z6x,z6y, z7x, z7y, z6c, z7c ));
			 //printf("\n\n%f",frechet(z7, z6, z7x,z7y, z6x, z6y, z7c, z6c ));
			 if(fv1<=fv2)


				 f66 = fv1;//printf("f66_test=%d\n",f66);}
			 else
				 f66 = fv2;


			 printf("Frechet distance between %d and %d is: %f",z6,z7,f66);printf("\n");
			if(z6c!=0 && z8c!=0)
			{

			 fv1 = frechet(z6, z8, z6x,z6y, z8x, z8y, z6c, z8c );
			 fv2 = frechet(z8, z6, z8x,z8y, z6x, z6y, z8c, z6c );}
			 else{fv1=0;fv2=0;}
			 if(fv1<=fv2)
				 f67 = fv1;
			 else
				 f67 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z6,z8,f67);printf("\n");
			 if(z6c!=0 && z9c!=0)
			 {fv1 = frechet(z6, z9, z6x,z6y, z9x, z9y, z6c, z9c );
			 fv2 = frechet(z9, z6, z9x,z9y, z6x, z6y, z9c, z6c );}
			 else{
				 fv1=0;
				 fv2=0;
			 }
			 if(fv1<=fv2)
				 f68 = fv1;
			 else
				 f68 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z6,z9,f68);
			 fv1 = frechet(z6, z10, z6x,z6y, z10x, z10y, z6c, z10c );
			 fv2 = frechet(z10, z6, z10x,z10y, z6x, z6y, z10c, z6c );
			 if(fv1<=fv2)
				 f69 = fv1;
			 else
				 f69 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z6,z10,f69);
			 fv1 = frechet(z6, z11, z6x,z6y, z11x, z11y, z6c, z11c );
			 fv2 = frechet(z11, z6, z11x,z11y, z6x, z6y, z11c, z6c );
			 if(fv1<=fv2)
				 f70 = fv1;
			 else
				 f70 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z6,z11,f70);
			 fv1 = frechet(z6, z12, z6x,z6y, z12x, z12y, z6c, z12c );
			 fv2 = frechet(z12, z6, z12x,z12y, z6x, z6y, z12c, z6c );
			 if(fv1<=fv2)
				 f71 = fv1;
			 else
				 f71 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z6,z12,f71);
			 fv1 = frechet(z6, z13, z6x,z6y, z13x, z13y, z6c, z13c );
			 fv2 = frechet(z13, z6, z13x,z13y, z6x, z6y, z13c, z6c );
			 if(fv1<=fv2)
				 f72 = fv1;
			 else
				 f72 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z6,z13,f72);
			 fv1 = frechet(z6, z14, z6x,z6y, z14x, z14y, z6c, z14c );
			 fv2 = frechet(z14, z6, z14x,z14y, z6x, z6y, z14c, z6c );
			 if(fv1<=fv2)
				 f73 = fv1;
			 else
				 f73 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z6,z14,f73);
			 fv1 = frechet(z6, z15, z6x,z6y, z15x, z15y, z6c, z15c );
			 fv2 = frechet(z15, z6, z15x,z15y, z6x, z6y, z15c, z6c );
			 if(fv1<=fv2)
				 f74 = fv1;
			 else
				 f74 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z6,z15,f74);
			 fv1 = frechet(z6, z16, z6x,z6y, z16x, z16y, z6c, z16c );
			 fv2 = frechet(z16, z6, z16x,z16y, z6x, z6y, z16c, z6c );
			 if(fv1<=fv2)
				 f75 = fv1;
			 else
				 f75 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z6,z16,f75);
			 fv1 = frechet(z7, z8, z7x,z7y, z8x, z8y, z7c, z8c );
			 fv2 = frechet(z8, z7, z8x,z8y, z7x, z7y, z8c, z7c );
			 if(fv1<=fv2)
				 f76 = fv1;
			 else
				 f76 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z7,z8,f76);
			 fv1 = frechet(z7, z9, z7x,z7y, z9x, z9y, z7c, z9c );
			 fv2 = frechet(z9, z3, z9x,z9y, z7x, z7y, z9c, z7c );
			 if(fv1<=fv2)
				 f77 = fv1;
			 else
				 f77 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z7,z9,f77);
			 fv1 = frechet(z7, z10, z7x,z7y, z10x, z10y, z7c, z10c );
			 fv2 = frechet(z10, z7, z10x,z10y, z7x, z7y, z10c, z7c );
			 if(fv1<=fv2)
				 f78 = fv1;
			 else
				 f78 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z7,z10,f78);
			 fv1 = frechet(z7, z11, z7x,z7y, z11x, z11y, z7c, z11c );
			 fv2 = frechet(z11, z7, z11x,z11y, z7x, z7y, z11c, z7c );
			 if(fv1<=fv2)
				 f79 = fv1;
			 else
				 f79 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z7,z11,f79);
			 fv1 = frechet(z7, z12, z7x,z7y, z12x, z12y, z7c, z12c );
			 fv2 = frechet(z12, z7, z12x,z12y, z7x, z7y, z12c, z7c );
			 if(fv1<=fv2)
				 f80 = fv1;
			 else
				 f80 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z7,z12,f80);
			 fv1 = frechet(z7, z13, z7x,z7y, z13x, z13y, z7c, z13c );
			 fv2 = frechet(z13, z7, z13x,z13y, z7x, z7y, z13c, z7c );
			 if(fv1<=fv2)
				 f81 = fv1;
			 else
				 f81 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z7,z13,f81);
			 fv1 = frechet(z7, z14, z7x,z7y, z14x, z14y, z7c, z14c );
			 fv2 = frechet(z14, z7, z14x,z14y, z7x, z7y, z14c, z7c );
			 if(fv1<=fv2)
				 f82 = fv1;
			 else
				 f82 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z7,z14,f82);
			 fv1 = frechet(z7, z15, z7x,z7y, z15x, z15y, z7c, z15c );
			 fv2 = frechet(z15, z7, z15x,z15y, z7x, z7y, z15c, z7c );
			 if(fv1<=fv2)
				 f83 = fv1;
			 else
				 f83 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z7,z15,f83);
			 fv1 = frechet(z7, z16, z7x,z7y, z16x, z16y, z7c, z16c );
			 fv2 = frechet(z16, z7, z16x,z16y, z7x, z7y, z16c, z7c );
			 if(fv1<=fv2)
				 f84 = fv1;
			 else
				 f84 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z7,z16,f84);
			 fv1 = frechet(z8, z9, z8x,z8y, z9x, z9y, z8c, z9c );
			 fv2 = frechet(z9, z3, z9x,z9y, z8x, z8y, z9c, z8c );
			 if(fv1<=fv2)
				 f85 = fv1;
			 else
				 f85 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z8,z9,f85);
			 fv1 = frechet(z8, z10, z8x,z8y, z10x, z10y, z8c, z10c );
			 fv2 = frechet(z10, z8, z10x,z10y, z8x, z8y, z10c, z8c );
			 if(fv1<=fv2)
				 f86 = fv1;
			 else
				 f86 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z8,z10,f86);
			 fv1 = frechet(z8, z11, z8x,z8y, z11x, z11y, z8c, z11c );
			 fv2 = frechet(z11, z8, z11x,z11y, z8x, z8y, z11c, z8c );
			 if(fv1<=fv2)
				 f87 = fv1;
			 else
				 f87 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z8,z11,f87);
			 fv1 = frechet(z8, z12, z8x,z8y, z12x, z12y, z8c, z12c );
			 fv2 = frechet(z12, z8, z12x,z12y, z8x, z8y, z12c, z8c );
			 if(fv1<=fv2)
				 f88 = fv1;
			 else
				 f88 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z8,z12,f88);
			 fv1 = frechet(z8, z13, z8x,z8y, z13x, z13y, z8c, z13c );
			 fv2 = frechet(z13, z8, z13x,z13y, z8x, z8y, z13c, z8c );
			 if(fv1<=fv2)
				 f89 = fv1;
			 else
				 f89 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z8,z13,f89);
			 fv1 = frechet(z8, z14, z8x,z8y, z14x, z14y, z8c, z14c );
			 fv2 = frechet(z14, z8, z14x,z14y, z8x, z8y, z14c, z8c );
			 if(fv1<=fv2)
				 f90 = fv1;
			 else
				 f90 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z8,z14,f90);
			 fv1 = frechet(z8, z15, z8x,z8y, z15x, z15y, z8c, z15c );
			 fv2 = frechet(z15, z8, z15x,z15y, z8x, z8y, z15c, z8c );
			 if(fv1<=fv2)
				 f91 = fv1;
			 else
				 f91 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z8,z15,f91);
			 fv1 = frechet(z8, z16, z8x,z8y, z16x, z16y, z8c, z16c );
			 fv2 = frechet(z16, z8, z16x,z16y, z8x, z8y, z16c, z8c );
			 if(fv1<=fv2)
				 f92 = fv1;
			 else
				 f92 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z8,z16,f92);
			 fv1 = frechet(z9, z10, z9x,z9y, z10x, z10y, z9c, z10c );
			 fv2 = frechet(z10, z9, z10x,z10y, z9x, z9y, z10c, z9c );
			 if(fv1<=fv2)
				 f93 = fv1;
			 else
				 f93 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z9,z10,f93);
			 fv1 = frechet(z9, z11, z9x,z9y, z11x, z11y, z9c, z11c );
			 fv2 = frechet(z11, z9, z11x,z11y, z9x, z9y, z11c, z9c );
			 if(fv1<=fv2)
				 f94 = fv1;
			 else
				 f94 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z9,z11,f94);
			 fv1 = frechet(z9, z12, z9x,z9y, z12x, z12y, z9c, z12c );
			 fv2 = frechet(z12, z9, z12x,z12y, z9x, z9y, z12c, z9c );
			 if(fv1<=fv2)
				 f95 = fv1;
			 else
				 f95 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z9,z12,f95);
			 fv1 = frechet(z9, z13, z9x,z9y, z13x, z13y, z9c, z13c );
			 fv2 = frechet(z13, z9, z13x,z13y, z9x, z9y, z13c, z9c );
			 if(fv1<=fv2)
				 f96 = fv1;
			 else
				 f96 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z9,z13,f96);
			 fv1 = frechet(z9, z14, z9x,z9y, z14x, z14y, z9c, z14c );
			 fv2 = frechet(z14, z9, z14x,z14y, z9x, z9y, z14c, z9c );
			 if(fv1<=fv2)
				 f97 = fv1;
			 else
				 f97 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z9,z14,f97);
			 fv1 = frechet(z9, z15, z9x,z9y, z15x, z15y, z9c, z15c );
			 fv2 = frechet(z15, z9, z15x,z15y, z9x, z9y, z15c, z9c );
			 if(fv1<=fv2)
				 f98 = fv1;
			 else
				 f98 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z9,z15,f98);
			 fv1 = frechet(z9, z16, z9x,z9y, z16x, z16y, z9c, z16c );
			 fv2 = frechet(z16, z9, z16x,z16y, z9x, z9y, z16c, z9c );
			 if(fv1<=fv2)
				 f99 = fv1;
			 else
				 f99 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z9,z16,f99);
			 fv1 = frechet(z10, z11, z10x,z10y, z11x, z11y, z10c, z11c );
			 fv2 = frechet(z11, z10, z11x,z11y, z10x, z10y, z11c, z10c );
			 if(fv1<=fv2)
				 f100 = fv1;
			 else
				 f100 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z10,z11,f100);
			 fv1 = frechet(z10, z12, z10x,z10y, z12x, z12y, z10c, z12c );
			 fv2 = frechet(z12, z10, z12x,z12y, z10x, z10y, z12c, z10c );
			 if(fv1<=fv2)
				 f101 = fv1;
			 else
				 f101 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z10,z12,f101);
			 fv1 = frechet(z10, z13, z10x,z10y, z13x, z13y, z10c, z13c );
			 fv2 = frechet(z13, z10, z13x,z13y, z10x, z10y, z13c, z10c );
			 if(fv1<=fv2)
				 f102 = fv1;
			 else
				 f102 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z10,z13,f102);
			 fv1 = frechet(z10, z14, z10x,z10y, z14x, z14y, z10c, z14c );
			 fv2 = frechet(z14, z10, z14x,z14y, z10x, z10y, z14c, z10c );
			 if(fv1<=fv2)
				 f103 = fv1;
			 else
				 f103 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z10,z14,f103);
			 fv1 = frechet(z10, z15, z10x,z10y, z15x, z15y, z10c, z15c );
			 fv2 = frechet(z15, z10, z15x,z15y, z10x, z10y, z15c, z10c );
			 if(fv1<=fv2)
				 f104 = fv1;
			 else
				 f104 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z10,z15,f104);
			 fv1 = frechet(z10, z16, z10x,z10y, z16x, z16y, z10c, z16c );
			 fv2 = frechet(z16, z10, z16x,z16y, z10x, z10y, z16c, z10c );
			 if(fv1<=fv2)
				 f105 = fv1;
			 else
				 f105 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z10,z16,f105);
			 fv1 = frechet(z11, z12, z11x,z11y, z12x, z12y, z11c, z12c );
			 fv2 = frechet(z12, z11, z12x,z12y, z11x, z11y, z12c, z11c );
			 if(fv1<=fv2)
				 f106 = fv1;
			 else
				 f106 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z11,z12,f106);
			 fv1 = frechet(z11, z13, z11x,z11y, z13x, z13y, z11c, z13c );
			 fv2 = frechet(z13, z11, z13x,z13y, z11x, z11y, z13c, z11c );
			 if(fv1<=fv2)
				 f107 = fv1;
			 else
				 f107 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z11,z13,f107);
			 fv1 = frechet(z11, z14, z11x,z11y, z14x, z14y, z11c, z14c );
			 fv2 = frechet(z14, z11, z14x,z14y, z11x, z11y, z14c, z11c );
			 if(fv1<=fv2)
				 f108 = fv1;
			 else
				 f108 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z11,z14,f108);
			 fv1 = frechet(z11, z15, z11x,z11y, z15x, z15y, z11c, z15c );
			 fv2 = frechet(z15, z11, z15x,z15y, z11x, z11y, z15c, z11c );
			 if(fv1<=fv2)
				 f109 = fv1;
			 else
				 f109 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z11,z15,f109);
			 fv1 = frechet(z11, z16, z11x,z11y, z16x, z16y, z11c, z16c );
			 fv2 = frechet(z16, z11, z16x,z16y, z11x, z11y, z16c, z11c );
			 if(fv1<=fv2)
				 f110 = fv1;
			 else
				 f110 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z11,z16,f110);
			 fv1 = frechet(z12, z13, z12x,z12y, z13x, z13y, z12c, z13c );
			 fv2 = frechet(z13, z12, z13x,z13y, z12x, z12y, z13c, z12c );
			 if(fv1<=fv2)
				 f111 = fv1;
			 else
				 f111 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z12,z13,f111);
			 fv1 = frechet(z12, z14, z12x,z12y, z14x, z14y, z12c, z14c );
			 fv2 = frechet(z14, z12, z14x,z14y, z12x, z12y, z14c, z12c );
			 if(fv1<=fv2)
				 f112 = fv1;
			 else
				 f112 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z12,z14,f112);
			 fv1 = frechet(z12, z15, z12x,z12y, z15x, z15y, z12c, z15c );
			 fv2 = frechet(z15, z12, z15x,z15y, z12x, z12y, z15c, z12c );
			 if(fv1<=fv2)
				 f113 = fv1;
			 else
				 f113 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z12,z15,f113);
			 fv1 = frechet(z12, z16, z12x,z12y, z16x, z16y, z12c, z16c );
			 fv2 = frechet(z16, z12, z16x,z16y, z12x, z12y, z16c, z12c );
			 if(fv1<=fv2)
				 f114 = fv1;
			 else
				 f114 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z12,z16,f114);
			 fv1 = frechet(z13, z14, z13x,z13y, z14x, z14y, z13c, z14c );
			 fv2 = frechet(z14, z13, z14x,z14y, z13x, z13y, z14c, z13c );
			 if(fv1<=fv2)
				 f115 = fv1;
			 else
				 f115 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z13,z14,f115);
			 fv1 = frechet(z13, z15, z13x,z13y, z15x, z15y, z13c, z15c );
			 fv2 = frechet(z15, z13, z15x,z15y, z13x, z13y, z15c, z13c );
			 if(fv1<=fv2)
				 f116 = fv1;
			 else
				 f116 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z13,z15,f116);
			 fv1 = frechet(z13, z16, z13x,z13y, z16x, z16y, z13c, z16c );
			 fv2 = frechet(z16, z13, z16x,z16y, z13x, z13y, z16c, z13c );
			 if(fv1<=fv2)
				 f117 = fv1;
			 else
				 f117 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z13,z16,f117);
			 fv1 = frechet(z14, z15, z14x,z14y, z15x, z15y, z14c, z15c );
			 fv2 = frechet(z15, z14, z15x,z15y, z14x, z14y, z15c, z14c );
			 if(fv1<=fv2)
				 f118 = fv1;
			 else
				 f118 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z14,z15,f118);
			 fv1 = frechet(z14, z16, z14x,z14y, z16x, z16y, z14c, z16c );
			 fv2 = frechet(z16, z14, z16x,z16y, z14x, z14y, z16c, z14c );
			 if(fv1<=fv2)
				 f119 = fv1;
			 else
				 f119 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z14,z16,f119);
			 fv1 = frechet(z15, z16, z15x,z15y, z16x, z16y, z15c, z16c );
			 fv2 = frechet(z16, z15, z16x,z16y, z15x, z15y, z16c, z15c );
			 if(fv1<=fv2)
				 f120 = fv1;
			 else
				 f120 = fv2;
			 printf("Frechet distance between %d and %d is: %f",z15,z16,f120);
			 FILE *ptr;
			 ptr=fopen("./x1A.csv","a");
			 fprintf(ptr,"%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,A\n",f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15,f16,f17,f18,f19,f20,f21,f22,f23,f24,f25,f26,f27,f28,f29,f30,f31,f32,f33,f34,f35,f36,f37,f38,f39,f40,f41,f42,f43,f44,f45,f46,f47,f48,f49,f50,f51,f52,f53,f54,f55,f56,f57,f58,f59,f60,f61,f62,f63,f64,f65,f66,f67,f68,f69,f70,f71,f72,f73,f74,f75,f76,f77,f78,f79,f80,f81,f82,f83,f84,f85,f86,f87,f88,f89,f90,f91,f92,f93,f94,f95,f96,f97,f98,f99,f100,f101,f102,f103,f104,f105,f106,f107,f108,f109,f110,f111,f112,f113,f114,f115,f116,f117,f118,f119,f120);
			 fprintf(ptr,"\n");
			 fclose(ptr);
		 }
	 }*/
	if (zn == 25)

	{

		counter++;
		switch (k)
		{
		case 1: z1c = 0;
			z1c = v;
			printf("%d\n", z1c);
			for (i = 0; i < z1c; i++)
			{
				z1x[i] = tempx[i];
				z1y[i] = tempy[i];
				printf("\t\t%d %d\n", z1x[i], z1y[i]);
			}
			break;
		case 2: z2c = v;
			printf("%d\n", z2c);
			for (i = 0; i < z2c; i++)
			{
				z2x[i] = tempx[i];
				z2y[i] = tempy[i];
				printf("\t\t%d %d\n", z2x[i], z2y[i]);
			}
			break;
		case 3: z3c = v;
			printf("%d\n", z3c);
			for (i = 0; i < z3c; i++)
			{
				z3x[i] = tempx[i];
				z3y[i] = tempy[i];
				printf("\t\t%d %d\n", z3x[i], z3y[i]);
			}
			break;
		case 4: z4c = v;
			printf("%d\n", z4c);
			for (i = 0; i < z4c; i++)
			{
				z4x[i] = tempx[i];
				z4y[i] = tempy[i];
				printf("\t\t%d %d\n", z4x[i], z4y[i]);
			}
			break;
		case 5: z5c = v;
			printf("%d\n", z5c);
			for (i = 0; i < z5c; i++)
			{
				z5x[i] = tempx[i];
				z5y[i] = tempy[i];
				printf("\t\t%d %d\n", z5x[i], z5y[i]);
			}
			break;
		case 6: z6c = v;
			printf("%d\n", z6c);
			for (i = 0; i < z6c; i++)
			{
				z6x[i] = tempx[i];
				z6y[i] = tempy[i];
				printf("\t\t%d %d\n", z6x[i], z6y[i]);
			}
			break;
		case 7: z7c = v;
			printf("%d\n", z7c);
			for (i = 0; i < z7c; i++)
			{
				z7x[i] = tempx[i];
				z7y[i] = tempy[i];
				printf("\t\t%d %d\n", z7x[i], z7y[i]);
			}
			break;
		case 8: z8c = v;
			printf("%d\n", z8c);
			for (i = 0; i < z8c; i++)
			{
				z8x[i] = tempx[i];
				z8y[i] = tempy[i];
				printf("\t\t%d %d\n", z8x[i], z8y[i]);
			}
			break;
		case 9: z9c = v;
			printf("%d\n", z9c);
			for (i = 0; i < z9c; i++)
			{
				z9x[i] = tempx[i];
				z9y[i] = tempy[i];
				printf("\t\t%d %d\n", z9x[i], z9y[i]);
			}
			break;
		case 10: z10c = v;
			printf("%d\n", z10c);
			for (i = 0; i < z10c; i++)
			{
				z10x[i] = tempx[i];
				z10y[i] = tempy[i];
				printf("\t\t%d %d\n", z10x[i], z10y[i]);
			}
			break;
		case 11: z11c = v;
			printf("%d\n", z11c);
			for (i = 0; i < z11c; i++)
			{
				z11x[i] = tempx[i];
				z11y[i] = tempy[i];
				printf("\t\t%d %d\n", z11x[i], z11y[i]);
			}
			break;
		case 12: z12c = v;
			printf("%d\n", z12c);
			for (i = 0; i < z12c; i++)
			{
				z12x[i] = tempx[i];
				z12y[i] = tempy[i];
				printf("\t\t%d %d\n", z12x[i], z12y[i]);
			}
			break;
		case 13: z13c = v;
			printf("%d\n", z13c);
			for (i = 0; i < z13c; i++)
			{
				z13x[i] = tempx[i];
				z13y[i] = tempy[i];
				printf("\t\t%d %d\n", z13x[i], z13y[i]);
			}
			break;
		case 14: z14c = v;
			printf("%d\n", z14c);
			for (i = 0; i < z14c; i++)
			{
				z14x[i] = tempx[i];
				z14y[i] = tempy[i];
				printf("\t\t%d %d\n", z14x[i], z14y[i]);
			}
			break;
		case 15: z15c = v;
			printf("%d\n", z15c);
			for (i = 0; i < z15c; i++)
			{
				z15x[i] = tempx[i];
				z15y[i] = tempy[i];
				printf("\t\t%d %d\n", z15x[i], z15y[i]);
			}
			break;
		case 16: z16c = v;
			printf("%d\n", z16c);
			for (i = 0; i < z16c; i++)
			{
				z16x[i] = tempx[i];
				z16y[i] = tempy[i];
				printf("\t\t%d %d\n", z16x[i], z16y[i]);
			}
			break;
		case 17: z17c = v;
			printf("%d\n", z17c);
			for (i = 0; i < z17c; i++)
			{
				z17x[i] = tempx[i];
				z17y[i] = tempy[i];
				printf("\t\t%d %d\n", z17x[i], z17y[i]);
			}
			break;
		case 18: z18c = v;
			printf("%d\n", z18c);
			for (i = 0; i < z18c; i++)
			{
				z18x[i] = tempx[i];
				z18y[i] = tempy[i];
				printf("\t\t%d %d\n", z18x[i], z18y[i]);
			}
			break;
		case 19: z19c = v;
			printf("%d\n", z19c);
			for (i = 0; i < z19c; i++)
			{
				z19x[i] = tempx[i];
				z19y[i] = tempy[i];
				printf("\t\t%d %d\n", z19x[i], z19y[i]);
			}
			break;
		case 20: z20c = v;
			printf("%d\n", z20c);
			for (i = 0; i < z20c; i++)
			{
				z20x[i] = tempx[i];
				z20y[i] = tempy[i];
				printf("\t\t%d %d\n", z20x[i], z20y[i]);
			}
			break;
		case 21: z21c = v;
			printf("%d\n", z21c);
			for (i = 0; i < z21c; i++)
			{
				z21x[i] = tempx[i];
				z21y[i] = tempy[i];
				printf("\t\t%d %d\n", z21x[i], z21y[i]);
			}
			break;
		case 22: z22c = v;
			printf("%d\n", z22c);
			for (i = 0; i < z22c; i++)
			{
				z22x[i] = tempx[i];
				z22y[i] = tempy[i];
				printf("\t\t%d %d\n", z22x[i], z22y[i]);
			}
			break;
		case 23: z23c = v;
			printf("%d\n", z23c);
			for (i = 0; i < z23c; i++)
			{
				z23x[i] = tempx[i];
				z23y[i] = tempy[i];
				printf("\t\t%d %d\n", z23x[i], z23y[i]);
			}
			break;
		case 24: z24c = v;
			printf("%d\n", z24c);
			for (i = 0; i < z24c; i++)
			{
				z24x[i] = tempx[i];
				z24y[i] = tempy[i];
				printf("\t\t%d %d\n", z24x[i], z24y[i]);
			}
			break;
		case 25: z25c = v;
			printf("%d\n", z25c);
			for (i = 0; i < z25c; i++)
			{
				z25x[i] = tempx[i];
				z25y[i] = tempy[i];
				printf("\t\t%d %d\n", z25x[i], z25y[i]);
			}
			break;


		}printf("counter=%d", counter);

		if (counter % zn == 0)
		{
			if (z1c != 0 && z2c != 0)
			{
				fv1 = frechet(z1, z2, z1x, z1y, z2x, z2y, z1c, z2c);
				fv2 = frechet(z2, z1, z2x, z2y, z1x, z1y, z2c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f1 = fv1;
			else
				f1 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z2, f1); printf("\n");
			if (z1c != 0 && z3c != 0)
			{
				fv1 = frechet(z1, z3, z1x, z1y, z3x, z3y, z1c, z3c);
				fv2 = frechet(z3, z1, z3x, z3y, z1x, z1y, z3c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f2 = fv1;
			else
				f2 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z3, f2); printf("\n");
			if (z1c != 0 && z4c != 0)
			{
				fv1 = frechet(z1, z4, z1x, z1y, z4x, z4y, z1c, z4c);
				fv2 = frechet(z4, z1, z4x, z4y, z1x, z1y, z4c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f3 = fv1;
			else
				f3 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z4, f3); printf("\n");
			if (z1c != 0 && z5c != 0)
			{
				fv1 = frechet(z1, z5, z1x, z1y, z5x, z5y, z1c, z5c);
				fv2 = frechet(z5, z1, z5x, z5y, z1x, z1y, z5c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f4 = fv1;
			else
				f4 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z5, f4); printf("\n");
			if (z1c != 0 && z6c != 0)
			{
				fv1 = frechet(z1, z6, z1x, z1y, z6x, z6y, z1c, z6c);
				fv2 = frechet(z6, z1, z6x, z6y, z1x, z1y, z6c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f5 = fv1;
			else
				f5 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z6, f5); printf("\n");
			if (z1c != 0 && z7c != 0)
			{
				fv1 = frechet(z1, z7, z1x, z1y, z7x, z7y, z1c, z7c);
				fv2 = frechet(z7, z1, z7x, z7y, z1x, z1y, z7c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f6 = fv1;
			else
				f6 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z7, f6); printf("\n");
			if (z1c != 0 && z8c != 0)
			{
				fv1 = frechet(z1, z8, z1x, z1y, z2x, z2y, z1c, z8c);
				fv2 = frechet(z8, z1, z8x, z8y, z1x, z1y, z8c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f7 = fv1;
			else
				f7 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z8, f7); printf("\n");
			if (z1c != 0 && z9c != 0)
			{
				fv1 = frechet(z1, z9, z1x, z1y, z9x, z9y, z1c, z9c);
				fv2 = frechet(z9, z1, z9x, z9y, z1x, z1y, z9c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f8 = fv1;
			else
				f8 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z9, f8); printf("\n");
			if (z1c != 0 && z10c != 0)
			{
				fv1 = frechet(z1, z10, z1x, z1y, z10x, z10y, z1c, z10c);
				fv2 = frechet(z10, z1, z10x, z10y, z1x, z1y, z10c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f9 = fv1;
			else
				f9 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z10, f9); printf("\n");
			if (z1c != 0 && z11c != 0)
			{
				fv1 = frechet(z1, z11, z1x, z1y, z11x, z11y, z1c, z11c);
				fv2 = frechet(z11, z1, z11x, z11y, z1x, z1y, z11c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f10 = fv1;
			else
				f10 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z11, f10); printf("\n");
			if (z1c != 0 && z12c != 0)
			{
				fv1 = frechet(z1, z12, z1x, z1y, z12x, z12y, z1c, z12c);
				fv2 = frechet(z12, z1, z12x, z12y, z1x, z1y, z12c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f11 = fv1;
			else
				f11 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z12, f11); printf("\n");
			if (z1c != 0 && z13c != 0)
			{
				fv1 = frechet(z1, z13, z1x, z1y, z13x, z13y, z1c, z13c);
				fv2 = frechet(z13, z1, z13x, z13y, z1x, z1y, z13c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f12 = fv1;
			else
				f12 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z13, f12); printf("\n");
			if (z1c != 0 && z14c != 0)
			{
				fv1 = frechet(z1, z14, z1x, z1y, z14x, z14y, z1c, z14c);
				fv2 = frechet(z14, z1, z14x, z14y, z1x, z1y, z14c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f13 = fv1;
			else
				f13 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z14, f13); printf("\n");
			if (z1c != 0 && z15c != 0)
			{
				fv1 = frechet(z1, z15, z1x, z1y, z15x, z15y, z1c, z15c);
				fv2 = frechet(z15, z1, z15x, z15y, z1x, z1y, z15c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f14 = fv1;
			else
				f14 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z15, f14); printf("\n");
			if (z1c != 0 && z16c != 0)
			{
				fv1 = frechet(z1, z16, z1x, z1y, z16x, z16y, z1c, z16c);
				fv2 = frechet(z16, z1, z16x, z16y, z1x, z1y, z16c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f15 = fv1;
			else
				f15 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z16, f15); printf("\n");
			if (z1c != 0 && z17c != 0)
			{
				fv1 = frechet(z1, z17, z1x, z1y, z17x, z17y, z1c, z17c);
				fv2 = frechet(z17, z1, z17x, z17y, z1x, z1y, z17c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f16 = fv1;
			else
				f16 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z17, f16); printf("\n");
			if (z1c != 0 && z18c != 0)
			{
				fv1 = frechet(z1, z18, z1x, z1y, z18x, z18y, z1c, z18c);
				fv2 = frechet(z18, z1, z18x, z18y, z1x, z1y, z18c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f17 = fv1;
			else
				f17 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z18, f17); printf("\n");
			if (z1c != 0 && z19c != 0)
			{
				fv1 = frechet(z1, z19, z1x, z1y, z19x, z19y, z1c, z19c);
				fv2 = frechet(z19, z1, z19x, z19y, z1x, z1y, z19c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f18 = fv1;
			else
				f18 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z19, f18); printf("\n");
			if (z1c != 0 && z20c != 0)
			{
				fv1 = frechet(z1, z20, z1x, z1y, z20x, z20y, z1c, z20c);
				fv2 = frechet(z20, z1, z20x, z20y, z1x, z1y, z20c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f19 = fv1;
			else
				f19 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z20, f19); printf("\n");
			if (z1c != 0 && z21c != 0)
			{
				fv1 = frechet(z1, z21, z1x, z1y, z21x, z21y, z1c, z21c);
				fv2 = frechet(z21, z1, z21x, z21y, z1x, z1y, z21c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f20 = fv1;
			else
				f20 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z21, f20); printf("\n");
			if (z1c != 0 && z22c != 0)
			{
				fv1 = frechet(z1, z22, z1x, z1y, z22x, z22y, z1c, z22c);
				fv2 = frechet(z22, z1, z22x, z22y, z1x, z1y, z22c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f21 = fv1;
			else
				f21 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z22, f21); printf("\n");
			if (z1c != 0 && z23c != 0)
			{
				fv1 = frechet(z1, z23, z1x, z1y, z23x, z23y, z1c, z23c);
				fv2 = frechet(z23, z1, z23x, z23y, z1x, z1y, z23c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f22 = fv1;
			else
				f22 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z23, f22); printf("\n");
			if (z1c != 0 && z24c != 0)
			{
				fv1 = frechet(z1, z24, z1x, z1y, z24x, z24y, z1c, z24c);
				fv2 = frechet(z24, z1, z24x, z24y, z1x, z1y, z24c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f23 = fv1;
			else
				f23 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z24, f23); printf("\n");
			if (z1c != 0 && z25c != 0)
			{
				fv1 = frechet(z1, z25, z1x, z1y, z25x, z25y, z1c, z25c);
				fv2 = frechet(z25, z1, z25x, z25y, z1x, z1y, z25c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f24 = fv1;
			else
				f24 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z25, f24); printf("\n");
			if (z2c != 0 && z3c != 0)
			{
				fv1 = frechet(z2, z3, z2x, z2y, z3x, z3y, z2c, z3c);
				fv2 = frechet(z3, z2, z3x, z3y, z2x, z2y, z3c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f25 = fv1;
			else
				f25 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z3, f25); printf("\n");
			if (z2c != 0 && z4c != 0)
			{
				fv1 = frechet(z2, z4, z2x, z2y, z4x, z4y, z2c, z4c);
				fv2 = frechet(z4, z2, z4x, z4y, z2x, z2y, z4c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f26 = fv1;
			else
				f26 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z4, f26); printf("\n");
			if (z2c != 0 && z5c != 0)
			{
				fv1 = frechet(z2, z5, z2x, z2y, z5x, z5y, z2c, z5c);
				fv2 = frechet(z5, z2, z5x, z5y, z2x, z2y, z5c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f27 = fv1;
			else
				f27 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z5, f27); printf("\n");
			if (z2c != 0 && z6c != 0)
			{
				fv1 = frechet(z2, z6, z2x, z2y, z6x, z6y, z2c, z6c);
				fv2 = frechet(z6, z2, z6x, z6y, z2x, z2y, z6c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f28 = fv1;
			else
				f28 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z6, f28); printf("\n");
			if (z2c != 0 && z7c != 0)
			{
				fv1 = frechet(z2, z7, z2x, z2y, z7x, z7y, z2c, z7c);
				fv2 = frechet(z7, z2, z7x, z7y, z2x, z2y, z7c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f29 = fv1;
			else
				f29 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z7, f29); printf("\n");
			if (z2c != 0 && z8c != 0)
			{
				fv1 = frechet(z2, z8, z2x, z2y, z8x, z8y, z2c, z8c);
				fv2 = frechet(z8, z2, z8x, z8y, z2x, z2y, z8c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f30 = fv1;
			else
				f30 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z8, f30); printf("\n");
			if (z2c != 0 && z9c != 0)
			{
				fv1 = frechet(z2, z9, z2x, z2y, z9x, z9y, z2c, z9c);
				fv2 = frechet(z9, z2, z9x, z9y, z2x, z2y, z9c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f31 = fv1;
			else
				f31 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z9, f31); printf("\n");
			if (z2c != 0 && z10c != 0)
			{
				fv1 = frechet(z2, z10, z2x, z2y, z10x, z10y, z2c, z10c);
				fv2 = frechet(z10, z2, z10x, z10y, z2x, z2y, z10c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f32 = fv1;
			else
				f32 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z10, f32); printf("\n");
			if (z2c != 0 && z11c != 0)
			{
				fv1 = frechet(z2, z11, z2x, z2y, z11x, z11y, z2c, z11c);
				fv2 = frechet(z11, z2, z11x, z11y, z2x, z2y, z11c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f33 = fv1;
			else
				f33 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z11, f33); printf("\n");
			if (z2c != 0 && z12c != 0)
			{
				fv1 = frechet(z2, z12, z2x, z2y, z12x, z12y, z2c, z12c);
				fv2 = frechet(z12, z2, z12x, z12y, z2x, z2y, z12c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f34 = fv1;
			else
				f34 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z12, f34); printf("\n");
			if (z2c != 0 && z13c != 0)
			{
				fv1 = frechet(z2, z13, z2x, z2y, z13x, z13y, z2c, z13c);
				fv2 = frechet(z13, z2, z13x, z13y, z2x, z2y, z13c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f35 = fv1;
			else
				f35 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z13, f35); printf("\n");
			if (z2c != 0 && z14c != 0)
			{
				fv1 = frechet(z2, z14, z2x, z2y, z14x, z14y, z2c, z14c);
				fv2 = frechet(z14, z2, z14x, z14y, z2x, z2y, z14c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f36 = fv1;
			else
				f36 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z14, f36); printf("\n");
			if (z2c != 0 && z15c != 0)
			{
				fv1 = frechet(z2, z15, z2x, z2y, z15x, z15y, z2c, z15c);
				fv2 = frechet(z15, z2, z15x, z15y, z2x, z2y, z15c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f37 = fv1;
			else
				f37 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z15, f37); printf("\n");
			if (z2c != 0 && z16c != 0)
			{
				fv1 = frechet(z2, z16, z2x, z2y, z16x, z16y, z2c, z16c);
				fv2 = frechet(z16, z2, z16x, z16y, z2x, z2y, z16c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f38 = fv1;
			else
				f38 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z16, f38); printf("\n");
			if (z2c != 0 && z17c != 0)
			{
				fv1 = frechet(z2, z17, z2x, z2y, z17x, z17y, z2c, z17c);
				fv2 = frechet(z17, z2, z17x, z17y, z2x, z2y, z17c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f39 = fv1;
			else
				f39 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z17, f39); printf("\n");
			if (z2c != 0 && z18c != 0)
			{
				fv1 = frechet(z2, z18, z2x, z2y, z18x, z18y, z2c, z18c);
				fv2 = frechet(z18, z2, z18x, z18y, z2x, z2y, z18c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f40 = fv1;
			else
				f40 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z18, f40); printf("\n");
			if (z2c != 0 && z19c != 0)
			{
				fv1 = frechet(z2, z19, z2x, z2y, z19x, z19y, z2c, z19c);
				fv2 = frechet(z19, z2, z19x, z19y, z2x, z2y, z19c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f41 = fv1;
			else
				f41 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z19, f41); printf("\n");
			if (z2c != 0 && z20c != 0)
			{
				fv1 = frechet(z2, z20, z2x, z2y, z20x, z20y, z2c, z20c);
				fv2 = frechet(z20, z2, z20x, z20y, z2x, z2y, z20c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f42 = fv1;
			else
				f42 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z20, f42); printf("\n");
			if (z2c != 0 && z21c != 0)
			{
				fv1 = frechet(z2, z21, z2x, z2y, z21x, z21y, z2c, z21c);
				fv2 = frechet(z21, z2, z21x, z21y, z2x, z2y, z21c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f43 = fv1;
			else
				f43 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z21, f43); printf("\n");
			if (z2c != 0 && z22c != 0)
			{
				fv1 = frechet(z2, z22, z2x, z2y, z22x, z22y, z2c, z22c);
				fv2 = frechet(z22, z2, z22x, z22y, z2x, z2y, z22c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f44 = fv1;
			else
				f44 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z22, f44); printf("\n");
			if (z2c != 0 && z23c != 0)
			{
				fv1 = frechet(z2, z23, z2x, z2y, z23x, z23y, z2c, z23c);
				fv2 = frechet(z23, z2, z23x, z23y, z2x, z2y, z23c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f45 = fv1;
			else
				f45 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z23, f45); printf("\n");
			if (z2c != 0 && z24c != 0)
			{
				fv1 = frechet(z2, z24, z2x, z2y, z24x, z24y, z2c, z24c);
				fv2 = frechet(z24, z2, z24x, z24y, z2x, z2y, z24c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f46 = fv1;
			else
				f46 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z24, f46); printf("\n");
			if (z2c != 0 && z25c != 0)
			{
				fv1 = frechet(z2, z25, z2x, z2y, z25x, z25y, z2c, z25c);
				fv2 = frechet(z25, z2, z25x, z25y, z2x, z2y, z25c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f47 = fv1;
			else
				f47 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z25, f47); printf("\n");
			if (z3c != 0 && z4c != 0)
			{
				fv1 = frechet(z3, z4, z3x, z3y, z4x, z4y, z3c, z4c);
				fv2 = frechet(z4, z3, z4x, z4y, z3x, z3y, z4c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f48 = fv1;
			else
				f48 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z4, f48); printf("\n");
			printf("\n");
			if (z3c != 0 && z5c != 0)
			{
				fv1 = frechet(z3, z5, z3x, z3y, z5x, z5y, z3c, z5c);
				fv2 = frechet(z5, z3, z5x, z5y, z3x, z3y, z5c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f49 = fv1;
			else
				f49 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z5, f49); printf("\n");
			printf("\n");
			if (z3c != 0 && z6c != 0)
			{
				fv1 = frechet(z3, z6, z3x, z3y, z6x, z6y, z3c, z6c);
				fv2 = frechet(z6, z3, z6x, z6y, z3x, z3y, z6c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f50 = fv1;
			else
				f50 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z6, f50); printf("\n");
			printf("\n");
			if (z3c != 0 && z7c != 0)
			{
				fv1 = frechet(z3, z7, z3x, z3y, z7x, z7y, z3c, z7c);
				fv2 = frechet(z7, z3, z7x, z7y, z3x, z3y, z7c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f51 = fv1;
			else
				f51 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z7, f51); printf("\n");
			printf("\n");
			if (z3c != 0 && z8c != 0)
			{
				fv1 = frechet(z3, z8, z3x, z3y, z8x, z8y, z3c, z8c);
				fv2 = frechet(z8, z3, z8x, z8y, z3x, z3y, z8c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f52 = fv1;
			else
				f52 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z8, f52); printf("\n");
			printf("\n");
			if (z3c != 0 && z9c != 0)
			{
				fv1 = frechet(z3, z9, z3x, z3y, z9x, z9y, z3c, z9c);
				fv2 = frechet(z9, z3, z9x, z9y, z3x, z3y, z9c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f53 = fv1;
			else
				f53 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z9, f53); printf("\n");
			printf("\n");
			if (z3c != 0 && z10c != 0)
			{
				fv1 = frechet(z3, z10, z3x, z3y, z10x, z10y, z3c, z10c);
				fv2 = frechet(z10, z3, z10x, z10y, z3x, z3y, z10c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f54 = fv1;
			else
				f54 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z10, f54); printf("\n");
			printf("\n");
			if (z3c != 0 && z11c != 0)
			{
				fv1 = frechet(z3, z11, z3x, z3y, z11x, z11y, z3c, z11c);
				fv2 = frechet(z11, z3, z11x, z11y, z3x, z3y, z11c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f55 = fv1;
			else
				f55 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z11, f55); printf("\n");
			printf("\n");
			if (z3c != 0 && z12c != 0)
			{
				fv1 = frechet(z3, z12, z3x, z3y, z12x, z12y, z3c, z12c);
				fv2 = frechet(z12, z3, z12x, z12y, z3x, z3y, z12c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f56 = fv1;
			else
				f56 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z12, f56); printf("\n");
			printf("\n");
			if (z3c != 0 && z13c != 0)
			{
				fv1 = frechet(z3, z13, z3x, z3y, z13x, z13y, z3c, z13c);
				fv2 = frechet(z13, z3, z13x, z13y, z3x, z3y, z13c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f57 = fv1;
			else
				f57 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z13, f57); printf("\n");
			printf("\n");
			if (z3c != 0 && z14c != 0)
			{
				fv1 = frechet(z3, z14, z3x, z3y, z14x, z14y, z3c, z14c);
				fv2 = frechet(z14, z3, z14x, z14y, z3x, z3y, z14c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f58 = fv1;
			else
				f58 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z14, f58); printf("\n");
			printf("\n");
			if (z3c != 0 && z15c != 0)
			{
				fv1 = frechet(z3, z15, z3x, z3y, z15x, z15y, z3c, z15c);
				fv2 = frechet(z15, z3, z15x, z15y, z3x, z3y, z15c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f59 = fv1;
			else
				f59 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z15, f59); printf("\n");
			printf("\n");
			if (z3c != 0 && z16c != 0)
			{
				fv1 = frechet(z3, z16, z3x, z3y, z16x, z16y, z3c, z16c);
				fv2 = frechet(z16, z3, z16x, z16y, z3x, z3y, z16c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f60 = fv1;
			else
				f60 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z16, f60); printf("\n");
			printf("\n");
			if (z3c != 0 && z17c != 0)
			{
				fv1 = frechet(z3, z17, z3x, z3y, z17x, z17y, z3c, z17c);
				fv2 = frechet(z17, z3, z17x, z17y, z3x, z3y, z17c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f61 = fv1;
			else
				f61 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z17, f61); printf("\n");
			printf("\n");
			if (z3c != 0 && z18c != 0)
			{
				fv1 = frechet(z3, z18, z3x, z3y, z18x, z18y, z3c, z18c);
				fv2 = frechet(z18, z3, z18x, z18y, z3x, z3y, z18c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f62 = fv1;
			else
				f62 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z18, f62); printf("\n");
			printf("\n");
			if (z3c != 0 && z19c != 0)
			{
				fv1 = frechet(z3, z19, z3x, z3y, z19x, z19y, z3c, z19c);
				fv2 = frechet(z19, z3, z19x, z19y, z3x, z3y, z19c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f63 = fv1;
			else
				f63 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z19, f63); printf("\n");
			printf("\n");
			if (z3c != 0 && z20c != 0)
			{
				fv1 = frechet(z3, z20, z3x, z3y, z20x, z20y, z3c, z20c);
				fv2 = frechet(z20, z3, z20x, z20y, z3x, z3y, z20c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f64 = fv1;
			else
				f64 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z20, f64); printf("\n");
			printf("\n");
			if (z3c != 0 && z21c != 0)
			{
				fv1 = frechet(z3, z21, z3x, z3y, z21x, z21y, z3c, z21c);
				fv2 = frechet(z21, z3, z21x, z21y, z3x, z3y, z21c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f65 = fv1;
			else
				f65 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z21, f65); printf("\n");
			printf("\n");
			if (z3c != 0 && z22c != 0)
			{
				fv1 = frechet(z3, z22, z3x, z3y, z22x, z22y, z3c, z22c);
				fv2 = frechet(z22, z3, z22x, z22y, z3x, z3y, z22c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f66 = fv1;
			else
				f66 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z22, f66); printf("\n");
			printf("\n");
			if (z3c != 0 && z23c != 0)
			{
				fv1 = frechet(z3, z23, z3x, z3y, z23x, z23y, z3c, z23c);
				fv2 = frechet(z23, z3, z23x, z23y, z3x, z3y, z23c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f67 = fv1;
			else
				f67 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z23, f67); printf("\n");
			printf("\n");
			if (z3c != 0 && z24c != 0)
			{
				fv1 = frechet(z3, z24, z3x, z3y, z24x, z24y, z3c, z24c);
				fv2 = frechet(z24, z3, z24x, z24y, z3x, z3y, z24c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f68 = fv1;
			else
				f68 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z24, f68); printf("\n");
			printf("\n");
			if (z3c != 0 && z25c != 0)
			{
				fv1 = frechet(z3, z25, z3x, z3y, z25x, z25y, z3c, z25c);
				fv2 = frechet(z25, z3, z25x, z25y, z3x, z3y, z25c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f69 = fv1;
			else
				f69 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z25, f69); printf("\n");

			if (z5c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z5, z4x, z4y, z5x, z5y, z4c, z5c);
				fv2 = frechet(z5, z4, z5x, z5y, z4x, z4y, z5c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f70 = fv1;
			else
				f70 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z5, f70); printf("\n");

			if (z6c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z6, z4x, z4y, z6x, z6y, z4c, z6c);
				fv2 = frechet(z6, z4, z6x, z6y, z4x, z4y, z6c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f71 = fv1;
			else
				f71 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z6, f71); printf("\n");

			if (z7c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z7, z4x, z4y, z7x, z7y, z4c, z7c);
				fv2 = frechet(z7, z4, z7x, z7y, z4x, z4y, z7c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f72 = fv1;
			else
				f72 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z7, f72); printf("\n");

			if (z8c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z8, z4x, z4y, z8x, z8y, z4c, z8c);
				fv2 = frechet(z8, z4, z8x, z8y, z4x, z4y, z8c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f73 = fv1;
			else
				f73 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z8, f73); printf("\n");

			if (z9c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z9, z4x, z4y, z9x, z9y, z4c, z9c);
				fv2 = frechet(z9, z4, z9x, z9y, z4x, z4y, z9c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f74 = fv1;
			else
				f74 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z9, f74); printf("\n");

			if (z10c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z10, z4x, z4y, z10x, z10y, z4c, z10c);
				fv2 = frechet(z10, z4, z10x, z10y, z4x, z4y, z10c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f75 = fv1;
			else
				f75 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z10, f75); printf("\n");

			if (z11c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z11, z4x, z4y, z11x, z11y, z4c, z11c);
				fv2 = frechet(z11, z4, z11x, z11y, z4x, z4y, z11c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f76 = fv1;
			else
				f76 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z11, f76); printf("\n");

			if (z12c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z12, z4x, z4y, z12x, z12y, z4c, z12c);
				fv2 = frechet(z12, z4, z12x, z12y, z4x, z4y, z12c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f77 = fv1;
			else
				f77 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z12, f77); printf("\n");

			if (z13c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z13, z4x, z4y, z13x, z13y, z4c, z13c);
				fv2 = frechet(z13, z4, z13x, z13y, z4x, z4y, z13c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f78 = fv1;
			else
				f78 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z13, f78); printf("\n");

			if (z14c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z14, z4x, z4y, z14x, z14y, z4c, z14c);
				fv2 = frechet(z14, z4, z14x, z14y, z4x, z4y, z14c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f79 = fv1;
			else
				f79 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z14, f79); printf("\n");

			if (z15c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z15, z4x, z4y, z15x, z15y, z4c, z15c);
				fv2 = frechet(z15, z4, z15x, z15y, z4x, z4y, z15c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f80 = fv1;
			else
				f80 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z15, f80); printf("\n");

			if (z16c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z16, z4x, z4y, z16x, z16y, z4c, z16c);
				fv2 = frechet(z16, z4, z16x, z16y, z4x, z4y, z16c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f81 = fv1;
			else
				f81 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z16, f81); printf("\n");

			if (z17c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z17, z4x, z4y, z17x, z17y, z4c, z17c);
				fv2 = frechet(z17, z4, z17x, z17y, z4x, z4y, z17c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f82 = fv1;
			else
				f82 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z17, f82); printf("\n");

			if (z18c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z18, z4x, z4y, z18x, z18y, z4c, z18c);
				fv2 = frechet(z18, z4, z18x, z18y, z4x, z4y, z18c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f83 = fv1;
			else
				f83 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z18, f83); printf("\n");

			if (z19c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z19, z4x, z4y, z19x, z19y, z4c, z19c);
				fv2 = frechet(z19, z4, z19x, z19y, z4x, z4y, z19c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f84 = fv1;
			else
				f84 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z19, f84); printf("\n");

			if (z20c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z20, z4x, z4y, z20x, z20y, z4c, z20c);
				fv2 = frechet(z20, z4, z20x, z20y, z4x, z4y, z20c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f85 = fv1;
			else
				f85 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z20, f85); printf("\n");

			if (z21c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z21, z4x, z4y, z21x, z21y, z4c, z21c);
				fv2 = frechet(z21, z4, z21x, z21y, z4x, z4y, z21c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f86 = fv1;
			else
				f86 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z21, f86); printf("\n");

			if (z22c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z22, z4x, z4y, z22x, z22y, z4c, z22c);
				fv2 = frechet(z22, z4, z22x, z22y, z4x, z4y, z22c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f87 = fv1;
			else
				f87 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z22, f87); printf("\n");

			if (z23c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z23, z4x, z4y, z23x, z23y, z4c, z23c);
				fv2 = frechet(z23, z4, z23x, z23y, z4x, z4y, z23c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f88 = fv1;
			else
				f88 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z23, f88); printf("\n");

			if (z24c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z24, z4x, z4y, z24x, z24y, z4c, z24c);
				fv2 = frechet(z24, z4, z24x, z24y, z4x, z4y, z24c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f89 = fv1;
			else
				f89 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z24, f89); printf("\n");

			if (z25c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z25, z4x, z4y, z25x, z25y, z4c, z25c);
				fv2 = frechet(z25, z4, z25x, z25y, z4x, z4y, z25c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f90 = fv1;
			else
				f90 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z25, f90); printf("\n");

			if (z5c != 0 && z6c != 0)
			{
				fv1 = frechet(z5, z6, z5x, z5y, z6x, z6y, z5c, z6c);
				fv2 = frechet(z6, z5, z6x, z6y, z5x, z5y, z6c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f91 = fv1;
			else
				f91 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z6, f91); printf("\n");
			if (z5c != 0 && z7c != 0)
			{
				fv1 = frechet(z5, z7, z5x, z5y, z7x, z7y, z5c, z7c);
				fv2 = frechet(z7, z5, z7x, z7y, z5x, z5y, z7c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f92 = fv1;
			else
				f92 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z7, f92); printf("\n");

			if (z5c != 0 && z8c != 0)
			{
				fv1 = frechet(z5, z8, z5x, z5y, z8x, z8y, z5c, z8c);
				fv2 = frechet(z8, z5, z8x, z8y, z5x, z5y, z8c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f93 = fv1;
			else
				f93 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z8, f93); printf("\n");
			printf("\n");
			if (z5c != 0 && z9c != 0)
			{
				fv1 = frechet(z5, z9, z5x, z5y, z9x, z9y, z5c, z9c);
				fv2 = frechet(z9, z5, z9x, z9y, z5x, z5y, z9c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f94 = fv1;
			else
				f94 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z9, f94); printf("\n");
			printf("\n");
			if (z5c != 0 && z10c != 0)
			{
				fv1 = frechet(z5, z10, z5x, z5y, z10x, z10y, z5c, z10c);
				fv2 = frechet(z10, z5, z10x, z10y, z5x, z5y, z10c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f95 = fv1;
			else
				f95 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z10, f95); printf("\n");
			printf("\n");
			if (z5c != 0 && z11c != 0)
			{
				fv1 = frechet(z5, z11, z5x, z5y, z11x, z11y, z5c, z11c);
				fv2 = frechet(z11, z5, z11x, z11y, z5x, z5y, z11c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f96 = fv1;
			else
				f96 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z11, f96); printf("\n");
			printf("\n");
			if (z5c != 0 && z12c != 0)
			{
				fv1 = frechet(z5, z12, z5x, z5y, z12x, z12y, z5c, z12c);
				fv2 = frechet(z12, z5, z12x, z12y, z5x, z5y, z12c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f97 = fv1;
			else
				f97 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z12, f97); printf("\n");
			printf("\n");
			if (z5c != 0 && z13c != 0)
			{
				fv1 = frechet(z5, z13, z5x, z5y, z13x, z13y, z5c, z13c);
				fv2 = frechet(z13, z5, z13x, z13y, z5x, z5y, z13c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f98 = fv1;
			else
				f98 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z13, f98); printf("\n");
			printf("\n");
			if (z5c != 0 && z14c != 0)
			{
				fv1 = frechet(z5, z14, z5x, z5y, z14x, z14y, z5c, z14c);
				fv2 = frechet(z14, z5, z14x, z14y, z5x, z5y, z14c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f99 = fv1;
			else
				f99 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z14, f99); printf("\n");
			printf("\n");
			if (z5c != 0 && z15c != 0)
			{
				fv1 = frechet(z5, z15, z5x, z5y, z15x, z15y, z5c, z15c);
				fv2 = frechet(z15, z5, z15x, z15y, z5x, z5y, z15c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f100 = fv1;
			else
				f100 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z15, f100); printf("\n");
			printf("\n");
			if (z5c != 0 && z16c != 0)
			{
				fv1 = frechet(z5, z16, z5x, z5y, z16x, z16y, z5c, z16c);
				fv2 = frechet(z16, z5, z16x, z16y, z5x, z5y, z16c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f101 = fv1;
			else
				f101 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z16, f101); printf("\n");
			printf("\n");
			if (z5c != 0 && z17c != 0)
			{
				fv1 = frechet(z5, z17, z5x, z5y, z17x, z17y, z5c, z17c);
				fv2 = frechet(z17, z5, z17x, z17y, z5x, z5y, z17c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f102 = fv1;
			else
				f102 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z17, f102); printf("\n");
			printf("\n");
			if (z5c != 0 && z18c != 0)
			{
				fv1 = frechet(z5, z18, z5x, z5y, z18x, z18y, z5c, z18c);
				fv2 = frechet(z18, z5, z18x, z18y, z5x, z5y, z18c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f103 = fv1;
			else
				f103 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z18, f103); printf("\n");
			printf("\n");
			if (z5c != 0 && z19c != 0)
			{
				fv1 = frechet(z5, z19, z5x, z5y, z19x, z19y, z5c, z19c);
				fv2 = frechet(z19, z5, z19x, z19y, z5x, z5y, z19c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f104 = fv1;
			else
				f104 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z19, f104); printf("\n");
			printf("\n");
			if (z5c != 0 && z20c != 0)
			{
				fv1 = frechet(z5, z20, z5x, z5y, z20x, z20y, z5c, z20c);
				fv2 = frechet(z20, z5, z20x, z20y, z5x, z5y, z20c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f105 = fv1;
			else
				f105 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z20, f105); printf("\n");
			printf("\n");
			if (z5c != 0 && z21c != 0)
			{
				fv1 = frechet(z5, z21, z5x, z5y, z21x, z21y, z5c, z21c);
				fv2 = frechet(z21, z5, z21x, z21y, z5x, z5y, z21c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f106 = fv1;
			else
				f106 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z21, f106); printf("\n");
			printf("\n");
			if (z5c != 0 && z22c != 0)
			{
				fv1 = frechet(z5, z22, z5x, z5y, z22x, z22y, z5c, z22c);
				fv2 = frechet(z22, z5, z22x, z22y, z5x, z5y, z22c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f107 = fv1;
			else
				f107 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z22, f107); printf("\n");
			printf("\n");
			if (z5c != 0 && z23c != 0)
			{
				fv1 = frechet(z5, z23, z5x, z5y, z23x, z23y, z5c, z23c);
				fv2 = frechet(z23, z5, z23x, z23y, z5x, z5y, z23c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f108 = fv1;
			else
				f108 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z23, f108); printf("\n");
			printf("\n");
			if (z5c != 0 && z24c != 0)
			{
				fv1 = frechet(z5, z24, z5x, z5y, z24x, z24y, z5c, z24c);
				fv2 = frechet(z24, z5, z24x, z24y, z5x, z5y, z24c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f109 = fv1;
			else
				f109 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z24, f109); printf("\n");
			printf("\n");
			if (z5c != 0 && z25c != 0)
			{
				fv1 = frechet(z5, z25, z5x, z5y, z25x, z25y, z5c, z25c);
				fv2 = frechet(z25, z5, z25x, z25y, z5x, z5y, z25c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f110 = fv1;
			else
				f110 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z25, f110); printf("\n");
			printf("\n");
			if (z6c != 0 && z7c != 0)
			{
				fv1 = frechet(z6, z7, z6x, z6y, z7x, z7y, z6c, z7c);
				fv2 = frechet(z7, z6, z7x, z7y, z6x, z6y, z7c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f0 = fv1;
			else
				f0 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z7, f0); printf("\n");
			printf("\n");
			if (z6c != 0 && z8c != 0)
			{
				fv1 = frechet(z6, z8, z6x, z6y, z8x, z8y, z6c, z8c);
				fv2 = frechet(z8, z6, z8x, z8y, z6x, z6y, z8c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f111 = fv1;
			else
				f111 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z8, f111); printf("\n");
			if (z6c != 0 && z9c != 0)
			{
				fv1 = frechet(z6, z9, z6x, z6y, z9x, z9y, z6c, z9c);
				fv2 = frechet(z9, z6, z9x, z9y, z6x, z6y, z9c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f112 = fv1;
			else
				f112 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z9, f112); printf("\n");
			if (z6c != 0 && z10c != 0)
			{
				fv1 = frechet(z6, z10, z6x, z6y, z10x, z10y, z6c, z10c);
				fv2 = frechet(z10, z6, z10x, z10y, z6x, z6y, z10c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f113 = fv1;
			else
				f113 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z10, f113); printf("\n");
			if (z6c != 0 && z11c != 0)
			{
				fv1 = frechet(z6, z11, z6x, z6y, z11x, z11y, z6c, z11c);
				fv2 = frechet(z11, z6, z11x, z11y, z6x, z6y, z11c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f114 = fv1;
			else
				f114 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z11, f114); printf("\n");
			if (z6c != 0 && z12c != 0)
			{
				fv1 = frechet(z6, z12, z6x, z6y, z12x, z12y, z6c, z12c);
				fv2 = frechet(z12, z6, z12x, z12y, z6x, z6y, z12c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f115 = fv1;
			else
				f115 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z12, f115); printf("\n");
			if (z6c != 0 && z13c != 0)
			{
				fv1 = frechet(z6, z13, z6x, z6y, z13x, z13y, z6c, z13c);
				fv2 = frechet(z13, z6, z13x, z13y, z6x, z6y, z13c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f116 = fv1;
			else
				f116 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z13, f116); printf("\n");
			if (z6c != 0 && z14c != 0)
			{
				fv1 = frechet(z6, z14, z6x, z6y, z14x, z14y, z6c, z14c);
				fv2 = frechet(z14, z6, z14x, z14y, z6x, z6y, z14c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f117 = fv1;
			else
				f117 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z14, f117); printf("\n");
			if (z6c != 0 && z15c != 0)
			{
				fv1 = frechet(z6, z15, z6x, z6y, z15x, z15y, z6c, z15c);
				fv2 = frechet(z15, z6, z15x, z15y, z6x, z6y, z15c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f118 = fv1;
			else
				f118 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z15, f118); printf("\n");
			if (z6c != 0 && z16c != 0)
			{
				fv1 = frechet(z6, z16, z6x, z6y, z16x, z16y, z6c, z16c);
				fv2 = frechet(z16, z6, z16x, z16y, z6x, z6y, z16c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f119 = fv1;
			else
				f119 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z16, f119); printf("\n");
			if (z6c != 0 && z17c != 0)
			{
				fv1 = frechet(z6, z17, z6x, z6y, z17x, z17y, z6c, z17c);
				fv2 = frechet(z17, z6, z17x, z17y, z6x, z6y, z17c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f120 = fv1;
			else
				f120 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z17, f120); printf("\n");
			if (z6c != 0 && z18c != 0)
			{
				fv1 = frechet(z6, z18, z6x, z6y, z18x, z18y, z6c, z18c);
				fv2 = frechet(z18, z6, z18x, z18y, z6x, z6y, z18c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f121 = fv1;
			else
				f121 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z18, f121); printf("\n");
			if (z6c != 0 && z19c != 0)
			{
				fv1 = frechet(z6, z19, z6x, z6y, z19x, z19y, z6c, z19c);
				fv2 = frechet(z19, z6, z19x, z19y, z6x, z6y, z19c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f122 = fv1;
			else
				f122 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z19, f122); printf("\n");
			if (z6c != 0 && z20c != 0)
			{
				fv1 = frechet(z6, z20, z6x, z6y, z20x, z20y, z6c, z20c);
				fv2 = frechet(z20, z6, z20x, z20y, z6x, z6y, z20c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f123 = fv1;
			else
				f123 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z20, f123); printf("\n");
			if (z6c != 0 && z21c != 0)
			{
				fv1 = frechet(z6, z21, z6x, z6y, z21x, z21y, z6c, z21c);
				fv2 = frechet(z21, z6, z21x, z21y, z6x, z6y, z21c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f124 = fv1;
			else
				f124 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z21, f124); printf("\n");
			if (z6c != 0 && z22c != 0)
			{
				fv1 = frechet(z6, z22, z6x, z6y, z22x, z22y, z6c, z22c);
				fv2 = frechet(z22, z6, z22x, z22y, z6x, z6y, z22c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f125 = fv1;
			else
				f125 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z22, f125); printf("\n");
			if (z6c != 0 && z23c != 0)
			{
				fv1 = frechet(z6, z23, z6x, z6y, z23x, z23y, z6c, z23c);
				fv2 = frechet(z23, z6, z23x, z23y, z6x, z6y, z23c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f126 = fv1;
			else
				f126 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z23, f126); printf("\n");
			if (z6c != 0 && z24c != 0)
			{
				fv1 = frechet(z6, z24, z6x, z6y, z24x, z24y, z6c, z24c);
				fv2 = frechet(z24, z6, z24x, z24y, z6x, z6y, z24c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f127 = fv1;
			else
				f127 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z24, f127); printf("\n");
			if (z6c != 0 && z25 != 0)
			{
				fv1 = frechet(z6, z25, z6x, z6y, z25x, z25y, z6c, z25c);
				fv2 = frechet(z25, z6, z25x, z25y, z6x, z6y, z25c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f128 = fv1;
			else
				f128 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z25, f128); printf("\n");
			if (z7c != 0 && z8c != 0)
			{
				fv1 = frechet(z7, z8, z7x, z7y, z8x, z8y, z7c, z8c);
				fv2 = frechet(z8, z7, z8x, z8y, z7x, z7y, z8c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f129 = fv1;
			else
				f129 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z8, f129); printf("\n");
			if (z7c != 0 && z9c != 0)
			{
				fv1 = frechet(z7, z9, z7x, z7y, z9x, z9y, z7c, z9c);
				fv2 = frechet(z9, z7, z9x, z9y, z7x, z7y, z9c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f130 = fv1;
			else
				f130 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z9, f130); printf("\n");
			if (z7c != 0 && z10c != 0)
			{
				fv1 = frechet(z7, z10, z7x, z7y, z10x, z10y, z7c, z10c);
				fv2 = frechet(z10, z7, z10x, z10y, z7x, z7y, z10c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f131 = fv1;
			else
				f131 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z10, f131); printf("\n");
			if (z7c != 0 && z11c != 0)
			{
				fv1 = frechet(z7, z11, z7x, z7y, z11x, z11y, z7c, z11c);
				fv2 = frechet(z11, z7, z11x, z11y, z7x, z7y, z11c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f132 = fv1;
			else
				f132 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z11, f132); printf("\n");
			if (z7c != 0 && z12c != 0)
			{
				fv1 = frechet(z7, z12, z7x, z7y, z12x, z12y, z7c, z12c);
				fv2 = frechet(z12, z7, z12x, z12y, z7x, z7y, z12c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f133 = fv1;
			else
				f133 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z12, f133); printf("\n");
			if (z7c != 0 && z13c != 0)
			{
				fv1 = frechet(z7, z13, z7x, z7y, z13x, z13y, z7c, z13c);
				fv2 = frechet(z13, z7, z13x, z13y, z7x, z7y, z13c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f134 = fv1;
			else
				f134 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z13, f134); printf("\n");
			if (z7c != 0 && z14c != 0)
			{
				fv1 = frechet(z7, z14, z7x, z7y, z14x, z14y, z7c, z14c);
				fv2 = frechet(z14, z7, z14x, z14y, z7x, z7y, z14c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f135 = fv1;
			else
				f135 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z14, f135); printf("\n");
			if (z7c != 0 && z15c != 0)
			{
				fv1 = frechet(z7, z15, z7x, z7y, z15x, z15y, z7c, z15c);
				fv2 = frechet(z15, z7, z15x, z15y, z7x, z7y, z15c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f136 = fv1;
			else
				f136 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z15, f136); printf("\n");
			if (z7c != 0 && z16c != 0)
			{
				fv1 = frechet(z7, z16, z7x, z7y, z16x, z16y, z7c, z16c);
				fv2 = frechet(z16, z7, z16x, z16y, z7x, z7y, z16c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f137 = fv1;
			else
				f137 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z16, f137); printf("\n");
			if (z7c != 0 && z17c != 0)
			{
				fv1 = frechet(z7, z17, z7x, z7y, z17x, z17y, z7c, z17c);
				fv2 = frechet(z17, z7, z17x, z17y, z7x, z7y, z17c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f138 = fv1;
			else
				f138 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z17, f138); printf("\n");
			if (z7c != 0 && z18c != 0)
			{
				fv1 = frechet(z7, z18, z7x, z7y, z18x, z18y, z7c, z18c);
				fv2 = frechet(z18, z7, z18x, z18y, z7x, z7y, z18c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f139 = fv1;
			else
				f139 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z18, f139); printf("\n");
			if (z7c != 0 && z19c != 0)
			{
				fv1 = frechet(z7, z19, z7x, z7y, z19x, z19y, z7c, z19c);
				fv2 = frechet(z19, z7, z19x, z19y, z7x, z7y, z19c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f140 = fv1;
			else
				f140 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z19, f140); printf("\n");
			if (z7c != 0 && z20c != 0)
			{
				fv1 = frechet(z7, z20, z7x, z7y, z20x, z20y, z7c, z20c);
				fv2 = frechet(z20, z7, z20x, z20y, z7x, z7y, z20c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f141 = fv1;
			else
				f141 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z20, f141); printf("\n");
			if (z7c != 0 && z21c != 0)
			{
				fv1 = frechet(z7, z21, z7x, z7y, z21x, z21y, z7c, z21c);
				fv2 = frechet(z21, z7, z21x, z21y, z7x, z7y, z21c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f142 = fv1;
			else
				f142 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z21, f142); printf("\n");
			if (z7c != 0 && z22c != 0)
			{
				fv1 = frechet(z7, z22, z7x, z7y, z22x, z22y, z7c, z22c);
				fv2 = frechet(z22, z7, z22x, z22y, z7x, z7y, z22c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f143 = fv1;
			else
				f143 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z22, f143); printf("\n");
			if (z7c != 0 && z23c != 0)
			{
				fv1 = frechet(z7, z23, z7x, z7y, z23x, z23y, z7c, z23c);
				fv2 = frechet(z23, z7, z23x, z23y, z7x, z7y, z23c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f144 = fv1;
			else
				f144 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z23, f144); printf("\n");
			if (z7c != 0 && z24c != 0)
			{
				fv1 = frechet(z7, z24, z7x, z7y, z24x, z24y, z7c, z24c);
				fv2 = frechet(z24, z7, z24x, z24y, z7x, z7y, z24c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f145 = fv1;
			else
				f145 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z24, f145); printf("\n");
			if (z7c != 0 && z25c != 0)
			{
				fv1 = frechet(z7, z25, z7x, z7y, z25x, z25y, z7c, z25c);
				fv2 = frechet(z25, z7, z25x, z25y, z7x, z7y, z25c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f146 = fv1;
			else
				f146 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z25, f146); printf("\n");
			if (z9c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z9, z8x, z8y, z9x, z9y, z8c, z9c);
				fv2 = frechet(z9, z8, z9x, z9y, z8x, z8y, z9c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f147 = fv1;
			else
				f147 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z9, f147); printf("\n");
			if (z10c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z10, z8x, z8y, z10x, z10y, z8c, z10c);
				fv2 = frechet(z10, z8, z10x, z10y, z8x, z8y, z10c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f148 = fv1;
			else
				f148 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z10, f148); printf("\n");
			if (z11c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z11, z8x, z8y, z11x, z11y, z8c, z11c);
				fv2 = frechet(z11, z8, z11x, z11y, z8x, z8y, z11c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f149 = fv1;
			else
				f149 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z11, f149); printf("\n");
			if (z12c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z12, z8x, z8y, z12x, z12y, z8c, z12c);
				fv2 = frechet(z12, z8, z12x, z12y, z8x, z8y, z12c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f150 = fv1;
			else
				f150 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z12, f150); printf("\n");
			if (z13c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z13, z8x, z8y, z13x, z13y, z8c, z13c);
				fv2 = frechet(z13, z8, z13x, z13y, z8x, z8y, z13c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f151 = fv1;
			else
				f151 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z13, f151); printf("\n");
			if (z14c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z14, z8x, z8y, z14x, z14y, z8c, z14c);
				fv2 = frechet(z14, z8, z14x, z14y, z8x, z8y, z14c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f152 = fv1;
			else
				f152 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z14, f152); printf("\n");
			if (z15c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z15, z8x, z8y, z15x, z15y, z8c, z15c);
				fv2 = frechet(z15, z8, z15x, z15y, z8x, z8y, z15c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f153 = fv1;
			else
				f153 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z15, f153); printf("\n");
			if (z16c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z16, z8x, z8y, z16x, z16y, z8c, z16c);
				fv2 = frechet(z16, z8, z16x, z16y, z8x, z8y, z16c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f154 = fv1;
			else
				f154 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z16, f154); printf("\n");
			if (z17c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z17, z8x, z8y, z17x, z17y, z8c, z17c);
				fv2 = frechet(z17, z8, z17x, z17y, z8x, z8y, z17c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f155 = fv1;
			else
				f155 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z17, f155); printf("\n");
			if (z18c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z18, z8x, z8y, z18x, z18y, z8c, z18c);
				fv2 = frechet(z18, z8, z18x, z18y, z8x, z8y, z18c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f156 = fv1;
			else
				f156 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z18, f156); printf("\n");
			if (z19c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z19, z8x, z8y, z19x, z19y, z8c, z19c);
				fv2 = frechet(z19, z8, z19x, z19y, z8x, z8y, z19c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f157 = fv1;
			else
				f157 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z19, f157); printf("\n");
			if (z20c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z20, z8x, z8y, z20x, z20y, z8c, z20c);
				fv2 = frechet(z20, z8, z20x, z20y, z8x, z8y, z20c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f158 = fv1;
			else
				f158 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z20, f158); printf("\n");
			if (z21c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z21, z8x, z8y, z21x, z21y, z8c, z21c);
				fv2 = frechet(z21, z8, z21x, z21y, z8x, z8y, z21c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f159 = fv1;
			else
				f159 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z21, f159); printf("\n");
			if (z22c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z22, z8x, z8y, z22x, z22y, z8c, z22c);
				fv2 = frechet(z22, z8, z22x, z22y, z8x, z8y, z22c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f160 = fv1;
			else
				f160 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z22, f160); printf("\n");
			if (z23c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z23, z8x, z8y, z23x, z23y, z8c, z23c);
				fv2 = frechet(z23, z8, z23x, z23y, z8x, z8y, z23c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f161 = fv1;
			else
				f161 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z23, f161); printf("\n");
			if (z24c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z24, z8x, z8y, z24x, z24y, z8c, z24c);
				fv2 = frechet(z24, z8, z24x, z24y, z8x, z8y, z24c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f162 = fv1;
			else
				f162 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z24, f162); printf("\n");
			if (z25c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z25, z8x, z8y, z25x, z25y, z8c, z25c);
				fv2 = frechet(z25, z8, z25x, z25y, z8x, z8y, z25c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f163 = fv1;
			else
				f163 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z25, f163); printf("\n");
			if (z9c != 0 && z10c != 0)
			{
				fv1 = frechet(z9, z10, z9x, z9y, z10x, z10y, z9c, z10c);
				fv2 = frechet(z10, z9, z10x, z10y, z9x, z9y, z10c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f173 = fv1;
			else
				f173 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z10, f173); printf("\n");
			if (z9c != 0 && z11c != 0)
			{
				fv1 = frechet(z9, z11, z9x, z9y, z11x, z11y, z9c, z11c);
				fv2 = frechet(z11, z9, z11x, z11y, z9x, z9y, z11c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f174 = fv1;
			else
				f174 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z11, f174); printf("\n");

			if (z9c != 0 && z12c != 0)
			{
				fv1 = frechet(z9, z12, z9x, z9y, z12x, z12y, z9c, z12c);
				fv2 = frechet(z12, z9, z12x, z12y, z9x, z9y, z12c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f175 = fv1;
			else
				f175 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z12, f175); printf("\n");

			if (z9c != 0 && z13c != 0)
			{
				fv1 = frechet(z9, z13, z9x, z9y, z13x, z13y, z9c, z13c);
				fv2 = frechet(z13, z9, z13x, z13y, z9x, z9y, z13c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f176 = fv1;
			else
				f176 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z13, f176); printf("\n");

			if (z9c != 0 && z14c != 0)
			{
				fv1 = frechet(z9, z14, z9x, z9y, z14x, z14y, z9c, z14c);
				fv2 = frechet(z14, z9, z14x, z14y, z9x, z9y, z14c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f177 = fv1;
			else
				f177 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z14, f177); printf("\n");

			if (z9c != 0 && z15c != 0)
			{
				fv1 = frechet(z9, z15, z9x, z9y, z15x, z15y, z9c, z15c);
				fv2 = frechet(z15, z9, z15x, z15y, z9x, z9y, z15c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f178 = fv1;
			else
				f178 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z15, f178); printf("\n");

			if (z9c != 0 && z16c != 0)
			{
				fv1 = frechet(z9, z16, z9x, z9y, z16x, z16y, z9c, z16c);
				fv2 = frechet(z16, z9, z16x, z16y, z9x, z9y, z16c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f179 = fv1;
			else
				f179 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z16, f179); printf("\n");

			if (z9c != 0 && z17c != 0)
			{
				fv1 = frechet(z9, z17, z9x, z9y, z17x, z17y, z9c, z17c);
				fv2 = frechet(z17, z9, z17x, z17y, z9x, z9y, z17c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f180 = fv1;
			else
				f180 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z17, f180); printf("\n");

			if (z9c != 0 && z18c != 0)
			{
				fv1 = frechet(z9, z18, z9x, z9y, z18x, z18y, z9c, z18c);
				fv2 = frechet(z18, z9, z18x, z18y, z9x, z9y, z18c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f181 = fv1;
			else
				f181 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z18, f181); printf("\n");

			if (z9c != 0 && z10c != 0)
			{
				fv1 = frechet(z9, z19, z9x, z9y, z19x, z19y, z9c, z19c);
				fv2 = frechet(z19, z9, z19x, z19y, z9x, z9y, z19c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f182 = fv1;
			else
				f182 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z19, f182); printf("\n");

			if (z9c != 0 && z10c != 0)
			{
				fv1 = frechet(z9, z20, z9x, z9y, z20x, z20y, z9c, z20c);
				fv2 = frechet(z20, z9, z20x, z20y, z9x, z9y, z20c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f183 = fv1;
			else
				f183 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z20, f183); printf("\n");

			if (z9c != 0 && z21c != 0)
			{
				fv1 = frechet(z9, z21, z9x, z9y, z21x, z21y, z9c, z21c);
				fv2 = frechet(z21, z9, z21x, z21y, z9x, z9y, z21c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f184 = fv1;
			else
				f184 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z21, f184); printf("\n");

			if (z9c != 0 && z10c != 0)
			{
				fv1 = frechet(z9, z22, z9x, z9y, z22x, z22y, z9c, z22c);
				fv2 = frechet(z22, z9, z22x, z22y, z9x, z9y, z22c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f185 = fv1;
			else
				f185 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z22, f185); printf("\n");

			if (z9c != 0 && z23c != 0)
			{
				fv1 = frechet(z9, z23, z9x, z9y, z23x, z23y, z9c, z10c);
				fv2 = frechet(z3, z9, z23x, z23y, z9x, z9y, z23c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f186 = fv1;
			else
				f186 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z23, f186); printf("\n");

			if (z9c != 0 && z24c != 0)
			{
				fv1 = frechet(z9, z24, z9x, z9y, z24x, z24y, z9c, z24c);
				fv2 = frechet(z24, z9, z24x, z24y, z9x, z9y, z24c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f187 = fv1;
			else
				f187 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z24, f187); printf("\n");

			if (z9c != 0 && z10c != 0)
			{
				fv1 = frechet(z9, z25, z9x, z9y, z25x, z25y, z9c, z25c);
				fv2 = frechet(z25, z9, z25x, z25y, z9x, z9y, z25c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f188 = fv1;
			else
				f188 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z25, f188); printf("\n");

			if (z10c != 0 && z11c != 0)
			{
				fv1 = frechet(z10, z11, z10x, z10y, z11x, z11y, z10c, z11c);
				fv2 = frechet(z11, z10, z11x, z11y, z10x, z10y, z11c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f189 = fv1;
			else
				f189 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z11, f189); printf("\n");

			if (z10c != 0 && z12c != 0)
			{
				fv1 = frechet(z10, z12, z10x, z10y, z12x, z12y, z10c, z12c);
				fv2 = frechet(z12, z10, z12x, z12y, z10x, z10y, z12c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f190 = fv1;
			else
				f190 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z12, f190); printf("\n");

			if (z10c != 0 && z13c != 0)
			{
				fv1 = frechet(z10, z13, z10x, z10y, z13x, z13y, z10c, z13c);
				fv2 = frechet(z13, z10, z13x, z13y, z10x, z10y, z13c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f191 = fv1;
			else
				f191 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z13, f191); printf("\n");

			if (z10c != 0 && z14c != 0)
			{
				fv1 = frechet(z10, z14, z10x, z10y, z14x, z14y, z10c, z14c);
				fv2 = frechet(z14, z10, z14x, z14y, z10x, z10y, z14c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f307 = fv1;
			else
				f307 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z14, f307); printf("\n");

			if (z10c != 0 && z15c != 0)
			{
				fv1 = frechet(z10, z15, z10x, z10y, z15x, z15y, z10c, z15c);
				fv2 = frechet(z15, z10, z15x, z15y, z10x, z10y, z15c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f192 = fv1;
			else
				f192 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z15, f192); printf("\n");

			if (z10c != 0 && z16c != 0)
			{
				fv1 = frechet(z10, z16, z10x, z10y, z16x, z16y, z10c, z16c);
				fv2 = frechet(z16, z10, z16x, z16y, z10x, z10y, z16c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f193 = fv1;
			else
				f193 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z16, f193); printf("\n");

			if (z10c != 0 && z17c != 0)
			{
				fv1 = frechet(z10, z17, z10x, z10y, z17x, z17y, z10c, z17c);
				fv2 = frechet(z17, z10, z17x, z17y, z10x, z10y, z17c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f194 = fv1;
			else
				f194 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z17, f194); printf("\n");

			if (z10c != 0 && z18c != 0)
			{
				fv1 = frechet(z10, z18, z10x, z10y, z18x, z18y, z10c, z18c);
				fv2 = frechet(z18, z10, z18x, z18y, z10x, z10y, z18c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f195 = fv1;
			else
				f195 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z18, f195); printf("\n");

			if (z10c != 0 && z19c != 0)
			{
				fv1 = frechet(z10, z19, z10x, z10y, z19x, z19y, z10c, z19c);
				fv2 = frechet(z19, z10, z19x, z19y, z10x, z10y, z19c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f196 = fv1;
			else
				f196 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z19, f196); printf("\n");

			if (z10c != 0 && z20c != 0)
			{
				fv1 = frechet(z10, z20, z10x, z10y, z20x, z20y, z10c, z20c);
				fv2 = frechet(z20, z10, z20x, z20y, z10x, z10y, z20c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f197 = fv1;
			else
				f197 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z20, f197); printf("\n");

			if (z10c != 0 && z21c != 0)
			{
				fv1 = frechet(z10, z21, z10x, z10y, z21x, z21y, z10c, z21c);
				fv2 = frechet(z21, z10, z21x, z21y, z10x, z10y, z21c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f198 = fv1;
			else
				f198 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z21, f198); printf("\n");

			if (z10c != 0 && z22c != 0)
			{
				fv1 = frechet(z10, z22, z10x, z10y, z22x, z22y, z10c, z22c);
				fv2 = frechet(z22, z10, z22x, z22y, z10x, z10y, z22c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f199 = fv1;
			else
				f199 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z22, f199); printf("\n");

			if (z10c != 0 && z23c != 0)
			{
				fv1 = frechet(z10, z23, z10x, z10y, z23x, z23y, z10c, z23c);
				fv2 = frechet(z23, z10, z23x, z23y, z10x, z10y, z23c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f200 = fv1;
			else
				f200 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z23, f200); printf("\n");

			if (z10c != 0 && z24c != 0)
			{
				fv1 = frechet(z10, z24, z10x, z10y, z24x, z24y, z10c, z24c);
				fv2 = frechet(z24, z10, z24x, z24y, z10x, z10y, z24c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f201 = fv1;
			else
				f201 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z24, f201); printf("\n");

			if (z10c != 0 && z25c != 0)
			{
				fv1 = frechet(z10, z25, z10x, z10y, z25x, z25y, z10c, z25c);
				fv2 = frechet(z25, z10, z25x, z25y, z10x, z10y, z25c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f202 = fv1;
			else
				f202 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z25, f202); printf("\n");

			if (z11c != 0 && z12c != 0)
			{
				fv1 = frechet(z11, z12, z11x, z11y, z12x, z12y, z11c, z12c);
				fv2 = frechet(z12, z11, z12x, z12y, z11x, z11y, z12c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f203 = fv1;
			else
				f203 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z12, f203); printf("\n");

			if (z11c != 0 && z13c != 0)
			{
				fv1 = frechet(z11, z13, z11x, z11y, z13x, z13y, z11c, z13c);
				fv2 = frechet(z13, z11, z13x, z13y, z11x, z11y, z13c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f204 = fv1;
			else
				f204 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z13, f204); printf("\n");

			if (z11c != 0 && z14c != 0)
			{
				fv1 = frechet(z11, z14, z11x, z11y, z14x, z14y, z11c, z14c);
				fv2 = frechet(z14, z11, z14x, z14y, z11x, z11y, z14c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f205 = fv1;
			else
				f205 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z14, f205); printf("\n");

			if (z11c != 0 && z15c != 0)
			{
				fv1 = frechet(z11, z15, z11x, z11y, z15x, z15y, z11c, z15c);
				fv2 = frechet(z15, z11, z15x, z15y, z11x, z11y, z15c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f206 = fv1;
			else
				f206 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z15, f206); printf("\n");

			if (z11c != 0 && z16c != 0)
			{
				fv1 = frechet(z11, z16, z11x, z11y, z16x, z16y, z11c, z16c);
				fv2 = frechet(z16, z11, z16x, z16y, z11x, z11y, z16c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f207 = fv1;
			else
				f207 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z16, f207); printf("\n");

			if (z11c != 0 && z17c != 0)
			{
				fv1 = frechet(z11, z17, z11x, z11y, z17x, z17y, z11c, z17c);
				fv2 = frechet(z17, z11, z17x, z17y, z11x, z11y, z17c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f208 = fv1;
			else
				f208 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z17, f208); printf("\n");

			if (z11c != 0 && z18c != 0)
			{
				fv1 = frechet(z11, z18, z11x, z11y, z18x, z18y, z11c, z18c);
				fv2 = frechet(z18, z11, z18x, z18y, z11x, z11y, z18c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f209 = fv1;
			else
				f209 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z18, f209); printf("\n");

			if (z11c != 0 && z19c != 0)
			{
				fv1 = frechet(z11, z19, z11x, z11y, z19x, z19y, z11c, z19c);
				fv2 = frechet(z19, z11, z19x, z19y, z11x, z11y, z19c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f210 = fv1;
			else
				f210 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z19, f210); printf("\n");

			if (z11c != 0 && z20c != 0)
			{
				fv1 = frechet(z11, z20, z11x, z11y, z20x, z20y, z11c, z20c);
				fv2 = frechet(z20, z11, z20x, z20y, z11x, z11y, z20c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f211 = fv1;
			else
				f211 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z20, f211); printf("\n");

			if (z11c != 0 && z21c != 0)
			{
				fv1 = frechet(z11, z21, z11x, z11y, z21x, z21y, z11c, z21c);
				fv2 = frechet(z21, z11, z21x, z21y, z11x, z11y, z21c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f212 = fv1;
			else
				f212 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z21, f212); printf("\n");

			if (z11c != 0 && z22c != 0)
			{
				fv1 = frechet(z11, z22, z11x, z11y, z22x, z22y, z11c, z22c);
				fv2 = frechet(z22, z11, z22x, z22y, z11x, z11y, z22c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f213 = fv1;
			else
				f213 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z22, f213); printf("\n");

			if (z11c != 0 && z23c != 0)
			{
				fv1 = frechet(z11, z23, z11x, z11y, z23x, z23y, z11c, z23c);
				fv2 = frechet(z23, z11, z23x, z23y, z11x, z11y, z23c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f214 = fv1;
			else
				f214 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z23, f214); printf("\n");

			if (z11c != 0 && z24c != 0)
			{
				fv1 = frechet(z11, z24, z11x, z11y, z24x, z24y, z11c, z24c);
				fv2 = frechet(z24, z11, z24x, z24y, z11x, z11y, z24c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f215 = fv1;
			else
				f215 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z24, f215); printf("\n");

			if (z11c != 0 && z25c != 0)
			{
				fv1 = frechet(z11, z25, z11x, z11y, z25x, z25y, z11c, z25c);
				fv2 = frechet(z25, z11, z25x, z25y, z11x, z11y, z25c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f216 = fv1;
			else
				f216 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z25, f216); printf("\n");


			if (z12c != 0 && z13c != 0)
			{
				fv1 = frechet(z12, z13, z12x, z12y, z13x, z13y, z12c, z13c);
				fv2 = frechet(z13, z12, z13x, z13y, z12x, z12y, z13c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f217 = fv1;
			else
				f217 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z13, f217); printf("\n");

			if (z12c != 0 && z14c != 0)
			{
				fv1 = frechet(z12, z14, z12x, z12y, z14x, z14y, z12c, z14c);
				fv2 = frechet(z14, z12, z14x, z14y, z12x, z12y, z14c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f218 = fv1;
			else
				f218 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z14, f218); printf("\n");

			if (z12c != 0 && z15c != 0)
			{
				fv1 = frechet(z12, z15, z12x, z12y, z15x, z15y, z12c, z15c);
				fv2 = frechet(z15, z12, z15x, z15y, z12x, z12y, z15c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f219 = fv1;
			else
				f219 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z15, f219); printf("\n");

			if (z12c != 0 && z16c != 0)
			{
				fv1 = frechet(z12, z16, z12x, z12y, z16x, z16y, z12c, z16c);
				fv2 = frechet(z16, z12, z16x, z16y, z12x, z12y, z16c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f220 = fv1;
			else
				f220 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z16, f220); printf("\n");

			if (z12c != 0 && z17c != 0)
			{
				fv1 = frechet(z12, z17, z12x, z12y, z17x, z17y, z12c, z17c);
				fv2 = frechet(z17, z12, z17x, z17y, z12x, z12y, z17c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f221 = fv1;
			else
				f221 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z17, f221); printf("\n");

			if (z12c != 0 && z18c != 0)
			{
				fv1 = frechet(z12, z18, z12x, z12y, z18x, z18y, z12c, z18c);
				fv2 = frechet(z18, z12, z18x, z18y, z12x, z12y, z18c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f222 = fv1;
			else
				f222 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z18, f222); printf("\n");

			if (z12c != 0 && z19c != 0)
			{
				fv1 = frechet(z12, z19, z12x, z12y, z19x, z19y, z12c, z19c);
				fv2 = frechet(z19, z12, z19x, z19y, z12x, z12y, z19c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f223 = fv1;
			else
				f223 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z19, f223); printf("\n");

			if (z12c != 0 && z20c != 0)
			{
				fv1 = frechet(z12, z20, z12x, z12y, z20x, z20y, z12c, z20c);
				fv2 = frechet(z20, z12, z20x, z20y, z12x, z12y, z20c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f224 = fv1;
			else
				f224 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z20, f224); printf("\n");

			if (z12c != 0 && z21c != 0)
			{
				fv1 = frechet(z12, z21, z12x, z12y, z21x, z21y, z12c, z21c);
				fv2 = frechet(z21, z12, z21x, z21y, z12x, z12y, z21c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f225 = fv1;
			else
				f225 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z21, f225); printf("\n");

			if (z12c != 0 && z22c != 0)
			{
				fv1 = frechet(z12, z22, z12x, z12y, z22x, z22y, z12c, z22c);
				fv2 = frechet(z22, z12, z22x, z22y, z12x, z12y, z22c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f226 = fv1;
			else
				f226 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z22, f226); printf("\n");

			if (z12c != 0 && z23c != 0)
			{
				fv1 = frechet(z12, z23, z12x, z12y, z23x, z23y, z12c, z23c);
				fv2 = frechet(z23, z12, z23x, z23y, z12x, z12y, z23c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f227 = fv1;
			else
				f227 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z23, f227); printf("\n");

			if (z12c != 0 && z24c != 0)
			{
				fv1 = frechet(z12, z24, z12x, z12y, z24x, z24y, z12c, z24c);
				fv2 = frechet(z24, z12, z24x, z24y, z12x, z12y, z24c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f228 = fv1;
			else
				f228 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z24, f228); printf("\n");

			if (z12c != 0 && z25c != 0)
			{
				fv1 = frechet(z12, z25, z12x, z12y, z25x, z25y, z12c, z25c);
				fv2 = frechet(z25, z12, z25x, z25y, z12x, z12y, z25c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f229 = fv1;
			else
				f229 = fv2;


			printf("Frechet distance between %d and %d is: %f", z12, z25, f229); printf("\n");

			if (z13c != 0 && z14c != 0)
			{
				fv1 = frechet(z13, z14, z13x, z13y, z14x, z14y, z13c, z14c);
				fv2 = frechet(z14, z13, z14x, z14y, z13x, z13y, z14c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f308 = fv1;
			else
				f308 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z14, f308); printf("\n");

			if (z13c != 0 && z15c != 0)
			{
				fv1 = frechet(z13, z15, z13x, z13y, z15x, z15y, z13c, z15c);
				fv2 = frechet(z15, z13, z15x, z15y, z13x, z13y, z15c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f230 = fv1;
			else
				f230 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z15, f230); printf("\n");

			if (z13c != 0 && z16c != 0)
			{
				fv1 = frechet(z13, z16, z13x, z13y, z16x, z16y, z13c, z16c);
				fv2 = frechet(z16, z13, z16x, z16y, z13x, z13y, z16c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f231 = fv1;
			else
				f231 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z16, f231); printf("\n");

			if (z13c != 0 && z17c != 0)
			{
				fv1 = frechet(z13, z17, z13x, z13y, z17x, z17y, z13c, z17c);
				fv2 = frechet(z17, z13, z17x, z17y, z13x, z13y, z17c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f232 = fv1;
			else
				f232 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z17, f232); printf("\n");

			if (z13c != 0 && z18c != 0)
			{
				fv1 = frechet(z13, z18, z13x, z13y, z18x, z18y, z13c, z18c);
				fv2 = frechet(z18, z13, z18x, z18y, z13x, z13y, z18c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f233 = fv1;
			else
				f233 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z18, f233); printf("\n");

			if (z13c != 0 && z19c != 0)
			{
				fv1 = frechet(z13, z19, z13x, z13y, z19x, z19y, z13c, z19c);
				fv2 = frechet(z19, z13, z19x, z19y, z13x, z13y, z19c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f234 = fv1;
			else
				f234 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z19, f234); printf("\n");

			if (z13c != 0 && z20c != 0)
			{
				fv1 = frechet(z13, z20, z13x, z13y, z20x, z20y, z13c, z20c);
				fv2 = frechet(z20, z13, z20x, z20y, z13x, z13y, z20c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f235 = fv1;
			else
				f235 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z20, f235); printf("\n");

			if (z13c != 0 && z21c != 0)
			{
				fv1 = frechet(z13, z21, z13x, z13y, z21x, z21y, z13c, z21c);
				fv2 = frechet(z21, z13, z21x, z21y, z13x, z13y, z21c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f236 = fv1;
			else
				f236 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z21, f236); printf("\n");

			if (z13c != 0 && z22c != 0)
			{
				fv1 = frechet(z13, z22, z13x, z13y, z22x, z22y, z13c, z22c);
				fv2 = frechet(z22, z13, z22x, z22y, z13x, z13y, z22c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f237 = fv1;
			else
				f237 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z22, f237); printf("\n");

			if (z13c != 0 && z23c != 0)
			{
				fv1 = frechet(z13, z23, z13x, z13y, z23x, z23y, z13c, z23c);
				fv2 = frechet(z23, z13, z23x, z23y, z13x, z13y, z23c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f238 = fv1;
			else
				f238 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z23, f238); printf("\n");

			if (z13c != 0 && z24c != 0)
			{
				fv1 = frechet(z13, z24, z13x, z13y, z24x, z24y, z13c, z24c);
				fv2 = frechet(z24, z13, z24x, z24y, z13x, z13y, z24c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f239 = fv1;
			else
				f239 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z24, f239); printf("\n");

			if (z13c != 0 && z25c != 0)
			{
				fv1 = frechet(z13, z25, z13x, z13y, z25x, z25y, z13c, z25c);
				fv2 = frechet(z25, z13, z25x, z25y, z13x, z13y, z25c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f240 = fv1;
			else
				f240 = fv2;


			printf("Frechet distance between %d and %d is: %f", z13, z25, f240); printf("\n");

			if (z14c != 0 && z15c != 0)
			{
				fv1 = frechet(z14, z15, z14x, z14y, z15x, z15y, z14c, z15c);
				fv2 = frechet(z15, z14, z15x, z15y, z14x, z14y, z15c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f241 = fv1;
			else
				f241 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z15, f241); printf("\n");

			if (z14c != 0 && z16c != 0)
			{
				fv1 = frechet(z14, z16, z14x, z14y, z16x, z16y, z14c, z16c);
				fv2 = frechet(z16, z14, z16x, z16y, z14x, z14y, z16c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f242 = fv1;
			else
				f242 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z16, f242); printf("\n");

			if (z14c != 0 && z17c != 0)
			{
				fv1 = frechet(z14, z17, z14x, z14y, z17x, z17y, z14c, z17c);
				fv2 = frechet(z17, z14, z17x, z17y, z14x, z14y, z17c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f243 = fv1;
			else
				f243 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z17, f243); printf("\n");

			if (z14c != 0 && z18c != 0)
			{
				fv1 = frechet(z14, z18, z14x, z14y, z18x, z18y, z14c, z18c);
				fv2 = frechet(z18, z14, z18x, z18y, z14x, z14y, z18c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f244 = fv1;
			else
				f244 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z18, f244); printf("\n");

			if (z14c != 0 && z19c != 0)
			{
				fv1 = frechet(z14, z19, z14x, z14y, z19x, z19y, z14c, z19c);
				fv2 = frechet(z19, z14, z19x, z19y, z14x, z14y, z19c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f245 = fv1;
			else
				f245 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z19, f245); printf("\n");

			if (z14c != 0 && z20c != 0)
			{
				fv1 = frechet(z14, z20, z14x, z14y, z20x, z20y, z14c, z20c);
				fv2 = frechet(z20, z14, z20x, z20y, z14x, z14y, z20c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f246 = fv1;
			else
				f246 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z20, f246); printf("\n");

			if (z14c != 0 && z21c != 0)
			{
				fv1 = frechet(z14, z21, z14x, z14y, z21x, z21y, z14c, z21c);
				fv2 = frechet(z21, z14, z21x, z21y, z14x, z14y, z21c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f247 = fv1;
			else
				f247 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z21, f247); printf("\n");

			if (z14c != 0 && z22c != 0)
			{
				fv1 = frechet(z14, z22, z14x, z14y, z22x, z22y, z14c, z22c);
				fv2 = frechet(z22, z14, z22x, z22y, z14x, z14y, z22c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f248 = fv1;
			else
				f248 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z22, f248); printf("\n");

			if (z14c != 0 && z23c != 0)
			{
				fv1 = frechet(z14, z23, z14x, z14y, z23x, z23y, z14c, z23c);
				fv2 = frechet(z23, z14, z23x, z23y, z14x, z14y, z23c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f249 = fv1;
			else
				f249 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z23, f249); printf("\n");

			if (z14c != 0 && z24c != 0)
			{
				fv1 = frechet(z14, z24, z14x, z14y, z24x, z24y, z14c, z24c);
				fv2 = frechet(z24, z14, z24x, z24y, z14x, z14y, z24c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f250 = fv1;
			else
				f250 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z24, f250); printf("\n");

			if (z14c != 0 && z25c != 0)
			{
				fv1 = frechet(z14, z25, z14x, z14y, z25x, z25y, z14c, z25c);
				fv2 = frechet(z25, z14, z25x, z25y, z14x, z14y, z25c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f251 = fv1;
			else
				f251 = fv2;


			printf("Frechet distance between %d and %d is: %f", z14, z25, f251); printf("\n");

			if (z15c != 0 && z16c != 0)
			{
				fv1 = frechet(z15, z16, z15x, z15y, z16x, z16y, z15c, z16c);
				fv2 = frechet(z16, z15, z16x, z16y, z15x, z15y, z16c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f252 = fv1;
			else
				f252 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z16, f252); printf("\n");

			if (z15c != 0 && z17c != 0)
			{
				fv1 = frechet(z15, z17, z15x, z15y, z17x, z17y, z15c, z17c);
				fv2 = frechet(z17, z15, z17x, z17y, z15x, z15y, z17c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f253 = fv1;
			else
				f253 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z17, f253); printf("\n");

			if (z15c != 0 && z18c != 0)
			{
				fv1 = frechet(z15, z18, z15x, z15y, z18x, z18y, z15c, z18c);
				fv2 = frechet(z18, z15, z18x, z18y, z15x, z15y, z18c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f254 = fv1;
			else
				f254 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z18, f254); printf("\n");

			if (z15c != 0 && z19c != 0)
			{
				fv1 = frechet(z15, z19, z15x, z15y, z19x, z19y, z15c, z19c);
				fv2 = frechet(z19, z15, z19x, z19y, z15x, z15y, z19c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f255 = fv1;
			else
				f255 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z19, f255); printf("\n");

			if (z15c != 0 && z20c != 0)
			{
				fv1 = frechet(z15, z20, z15x, z15y, z20x, z20y, z15c, z20c);
				fv2 = frechet(z20, z15, z20x, z20y, z15x, z15y, z20c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f256 = fv1;
			else
				f256 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z20, f256); printf("\n");

			if (z15c != 0 && z21c != 0)
			{
				fv1 = frechet(z15, z21, z15x, z15y, z21x, z21y, z15c, z21c);
				fv2 = frechet(z21, z15, z21x, z21y, z15x, z15y, z21c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f257 = fv1;
			else
				f257 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z21, f257); printf("\n");

			if (z15c != 0 && z22c != 0)
			{
				fv1 = frechet(z15, z22, z15x, z15y, z22x, z22y, z15c, z22c);
				fv2 = frechet(z22, z15, z22x, z22y, z15x, z15y, z22c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f258 = fv1;
			else
				f258 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z22, f258); printf("\n");

			if (z15c != 0 && z23c != 0)
			{
				fv1 = frechet(z15, z23, z15x, z15y, z23x, z23y, z15c, z23c);
				fv2 = frechet(z23, z15, z23x, z23y, z15x, z15y, z23c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f259 = fv1;
			else
				f259 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z23, f259); printf("\n");

			if (z15c != 0 && z24c != 0)
			{
				fv1 = frechet(z15, z24, z15x, z15y, z24x, z24y, z15c, z24c);
				fv2 = frechet(z24, z15, z24x, z24y, z15x, z15y, z24c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f260 = fv1;
			else
				f260 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z24, f260); printf("\n");

			if (z15c != 0 && z25c != 0)
			{
				fv1 = frechet(z15, z25, z15x, z15y, z25x, z25y, z15c, z25c);
				fv2 = frechet(z25, z15, z25x, z25y, z15x, z15y, z25c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f261 = fv1;
			else
				f261 = fv2;


			printf("Frechet distance between %d and %d is: %f", z15, z25, f261); printf("\n");


			if (z16c != 0 && z17c != 0)
			{
				fv1 = frechet(z16, z17, z16x, z16y, z17x, z17y, z16c, z17c);
				fv2 = frechet(z17, z16, z17x, z17y, z16x, z16y, z17c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f262 = fv1;
			else
				f262 = fv2;


			printf("Frechet distance between %d and %d is: %f", z16, z17, f262); printf("\n");

			if (z16c != 0 && z18c != 0)
			{
				fv1 = frechet(z16, z18, z16x, z16y, z18x, z18y, z16c, z18c);
				fv2 = frechet(z18, z16, z18x, z18y, z16x, z16y, z18c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f263 = fv1;
			else
				f263 = fv2;


			printf("Frechet distance between %d and %d is: %f", z16, z18, f263); printf("\n");

			if (z16c != 0 && z19c != 0)
			{
				fv1 = frechet(z16, z19, z16x, z16y, z19x, z19y, z16c, z19c);
				fv2 = frechet(z19, z16, z19x, z19y, z16x, z16y, z19c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f264 = fv1;
			else
				f264 = fv2;


			printf("Frechet distance between %d and %d is: %f", z16, z19, f264); printf("\n");

			if (z16c != 0 && z20c != 0)
			{
				fv1 = frechet(z16, z20, z16x, z16y, z20x, z20y, z16c, z20c);
				fv2 = frechet(z20, z16, z20x, z20y, z16x, z16y, z20c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f265 = fv1;
			else
				f265 = fv2;


			printf("Frechet distance between %d and %d is: %f", z16, z20, f265); printf("\n");

			if (z16c != 0 && z21c != 0)
			{
				fv1 = frechet(z16, z21, z16x, z16y, z21x, z21y, z16c, z21c);
				fv2 = frechet(z21, z16, z21x, z21y, z16x, z16y, z21c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f266 = fv1;
			else
				f266 = fv2;


			printf("Frechet distance between %d and %d is: %f", z16, z21, f266); printf("\n");

			if (z16c != 0 && z22c != 0)
			{
				fv1 = frechet(z16, z22, z16x, z16y, z22x, z22y, z16c, z22c);
				fv2 = frechet(z22, z16, z22x, z22y, z16x, z16y, z22c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f267 = fv1;
			else
				f267 = fv2;


			printf("Frechet distance between %d and %d is: %f", z16, z22, f267); printf("\n");

			if (z16c != 0 && z23c != 0)
			{
				fv1 = frechet(z16, z23, z16x, z16y, z23x, z23y, z16c, z23c);
				fv2 = frechet(z23, z16, z23x, z23y, z16x, z16y, z23c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f268 = fv1;
			else
				f268 = fv2;


			printf("Frechet distance between %d and %d is: %f", z16, z23, f268); printf("\n");

			if (z16c != 0 && z24c != 0)
			{
				fv1 = frechet(z16, z24, z16x, z16y, z24x, z24y, z16c, z24c);
				fv2 = frechet(z24, z16, z24x, z24y, z16x, z16y, z24c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f269 = fv1;
			else
				f269 = fv2;


			printf("Frechet distance between %d and %d is: %f", z16, z24, f269); printf("\n");

			if (z16c != 0 && z25c != 0)
			{
				fv1 = frechet(z16, z25, z16x, z16y, z25x, z25y, z16c, z25c);
				fv2 = frechet(z25, z16, z25x, z25y, z16x, z16y, z25c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f270 = fv1;
			else
				f270 = fv2;


			printf("Frechet distance between %d and %d is: %f", z16, z25, f270); printf("\n");

			if (z17c != 0 && z18c != 0)
			{
				fv1 = frechet(z17, z18, z17x, z17y, z18x, z18y, z17c, z18c);
				fv2 = frechet(z18, z17, z18x, z18y, z17x, z17y, z18c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f271 = fv1;
			else
				f271 = fv2;


			printf("Frechet distance between %d and %d is: %f", z17, z18, f271); printf("\n");

			if (z17c != 0 && z19c != 0)
			{
				fv1 = frechet(z17, z19, z17x, z17y, z19x, z19y, z17c, z19c);
				fv2 = frechet(z19, z17, z19x, z19y, z17x, z17y, z19c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f272 = fv1;
			else
				f272 = fv2;


			printf("Frechet distance between %d and %d is: %f", z17, z19, f272); printf("\n");

			if (z17c != 0 && z20c != 0)
			{
				fv1 = frechet(z17, z20, z17x, z17y, z20x, z20y, z17c, z20c);
				fv2 = frechet(z20, z17, z20x, z20y, z17x, z17y, z20c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f273 = fv1;
			else
				f273 = fv2;


			printf("Frechet distance between %d and %d is: %f", z17, z20, f273); printf("\n");

			if (z17c != 0 && z21c != 0)
			{
				fv1 = frechet(z17, z21, z17x, z17y, z21x, z21y, z17c, z21c);
				fv2 = frechet(z21, z17, z21x, z21y, z17x, z17y, z21c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f274 = fv1;
			else
				f274 = fv2;


			printf("Frechet distance between %d and %d is: %f", z17, z21, f274); printf("\n");

			if (z17c != 0 && z22c != 0)
			{
				fv1 = frechet(z17, z22, z17x, z17y, z22x, z22y, z17c, z22c);
				fv2 = frechet(z22, z17, z22x, z22y, z17x, z17y, z22c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f275 = fv1;
			else
				f275 = fv2;


			printf("Frechet distance between %d and %d is: %f", z17, z22, f275); printf("\n");

			if (z17c != 0 && z23c != 0)
			{
				fv1 = frechet(z17, z23, z17x, z17y, z23x, z23y, z17c, z23c);
				fv2 = frechet(z23, z17, z23x, z23y, z17x, z17y, z23c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f276 = fv1;
			else
				f276 = fv2;


			printf("Frechet distance between %d and %d is: %f", z17, z23, f276); printf("\n");

			if (z17c != 0 && z24c != 0)
			{
				fv1 = frechet(z17, z24, z17x, z17y, z24x, z24y, z17c, z24c);
				fv2 = frechet(z24, z17, z24x, z24y, z17x, z17y, z24c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f277 = fv1;
			else
				f277 = fv2;


			printf("Frechet distance between %d and %d is: %f", z17, z24, f277); printf("\n");

			if (z17c != 0 && z25c != 0)
			{
				fv1 = frechet(z17, z25, z17x, z17y, z25x, z25y, z17c, z25c);
				fv2 = frechet(z25, z17, z25x, z25y, z17x, z17y, z25c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f278 = fv1;
			else
				f278 = fv2;


			printf("Frechet distance between %d and %d is: %f", z17, z25, f278); printf("\n");
			if (z18c != 0 && z19c != 0)
			{
				fv1 = frechet(z18, z19, z18x, z18y, z19x, z19y, z18c, z19c);
				fv2 = frechet(z19, z18, z19x, z19y, z18x, z18y, z19c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f279 = fv1;
			else
				f279 = fv2;


			printf("Frechet distance between %d and %d is: %f", z18, z19, f279); printf("\n");
			if (z18c != 0 && z20c != 0)
			{
				fv1 = frechet(z18, z20, z18x, z18y, z20x, z20y, z18c, z20c);
				fv2 = frechet(z20, z18, z20x, z20y, z18x, z18y, z20c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f280 = fv1;
			else
				f280 = fv2;


			printf("Frechet distance between %d and %d is: %f", z18, z20, f280); printf("\n");
			if (z18c != 0 && z21c != 0)
			{
				fv1 = frechet(z18, z21, z18x, z18y, z21x, z21y, z18c, z21c);
				fv2 = frechet(z21, z18, z21x, z21y, z18x, z18y, z21c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f281 = fv1;
			else
				f281 = fv2;


			printf("Frechet distance between %d and %d is: %f", z18, z21, f281); printf("\n");
			if (z18c != 0 && z22c != 0)
			{
				fv1 = frechet(z18, z22, z18x, z18y, z22x, z22y, z18c, z22c);
				fv2 = frechet(z22, z18, z22x, z22y, z18x, z18y, z22c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f282 = fv1;
			else
				f282 = fv2;


			printf("Frechet distance between %d and %d is: %f", z18, z22, f282); printf("\n");
			if (z18c != 0 && z23c != 0)
			{
				fv1 = frechet(z18, z23, z18x, z18y, z23x, z23y, z18c, z23c);
				fv2 = frechet(z23, z18, z23x, z23y, z18x, z18y, z23c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f283 = fv1;
			else
				f283 = fv2;


			printf("Frechet distance between %d and %d is: %f", z18, z23, f283); printf("\n");
			if (z18c != 0 && z24c != 0)
			{
				fv1 = frechet(z18, z24, z18x, z18y, z24x, z24y, z18c, z24c);
				fv2 = frechet(z24, z18, z24x, z24y, z18x, z18y, z24c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f284 = fv1;
			else
				f284 = fv2;


			printf("Frechet distance between %d and %d is: %f", z18, z24, f284); printf("\n");
			if (z18c != 0 && z25c != 0)
			{
				fv1 = frechet(z18, z25, z18x, z18y, z25x, z25y, z18c, z25c);
				fv2 = frechet(z25, z18, z25x, z25y, z18x, z18y, z25c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f285 = fv1;
			else
				f285 = fv2;


			printf("Frechet distance between %d and %d is: %f", z18, z25, f285); printf("\n");
			if (z20c != 0 && z19c != 0)
			{
				fv1 = frechet(z19, z20, z19x, z19y, z20x, z20y, z19c, z20c);
				fv2 = frechet(z20, z19, z20x, z20y, z19x, z19y, z20c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f286 = fv1;
			else
				f286 = fv2;


			printf("Frechet distance between %d and %d is: %f", z19, z20, f286); printf("\n");
			if (z21c != 0 && z19c != 0)
			{
				fv1 = frechet(z19, z21, z19x, z19y, z21x, z21y, z19c, z21c);
				fv2 = frechet(z21, z19, z21x, z21y, z19x, z19y, z21c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f287 = fv1;
			else
				f287 = fv2;


			printf("Frechet distance between %d and %d is: %f", z19, z21, f287); printf("\n");
			if (z22c != 0 && z19c != 0)
			{
				fv1 = frechet(z19, z22, z19x, z19y, z22x, z22y, z19c, z22c);
				fv2 = frechet(z22, z19, z22x, z22y, z19x, z19y, z22c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f288 = fv1;
			else
				f288 = fv2;


			printf("Frechet distance between %d and %d is: %f", z19, z22, f288); printf("\n");
			if (z23 != 0 && z19c != 0)
			{
				fv1 = frechet(z19, z23, z19x, z19y, z23x, z23y, z19c, z23c);
				fv2 = frechet(z23, z19, z23x, z23y, z19x, z19y, z23c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f289 = fv1;
			else
				f289 = fv2;


			printf("Frechet distance between %d and %d is: %f", z19, z23, f289); printf("\n");
			if (z24c != 0 && z19c != 0)
			{
				fv1 = frechet(z19, z24, z19x, z19y, z24x, z24y, z19c, z24c);
				fv2 = frechet(z24, z19, z24x, z24y, z19x, z19y, z24c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f290 = fv1;
			else
				f290 = fv2;


			printf("Frechet distance between %d and %d is: %f", z19, z24, f290); printf("\n");
			if (z25c != 0 && z19c != 0)
			{
				fv1 = frechet(z19, z25, z19x, z19y, z25x, z25y, z19c, z25c);
				fv2 = frechet(z25, z19, z25x, z25y, z19x, z19y, z25c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f291 = fv1;
			else
				f291 = fv2;


			printf("Frechet distance between %d and %d is: %f", z19, z25, f291); printf("\n");
			if (z20c != 0 && z21c != 0)
			{
				fv1 = frechet(z20, z21, z20x, z20y, z21x, z21y, z20c, z21c);
				fv2 = frechet(z21, z20, z21x, z21y, z20x, z20y, z21c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f292 = fv1;
			else
				f292 = fv2;


			printf("Frechet distance between %d and %d is: %f", z20, z21, f292); printf("\n");
			if (z20c != 0 && z22c != 0)
			{
				fv1 = frechet(z20, z22, z20x, z20y, z22x, z22y, z20c, z22c);
				fv2 = frechet(z22, z20, z22x, z22y, z20x, z20y, z22c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f293 = fv1;
			else
				f293 = fv2;


			printf("Frechet distance between %d and %d is: %f", z20, z22, f293); printf("\n");
			if (z20c != 0 && z23c != 0)
			{
				fv1 = frechet(z20, z23, z20x, z20y, z23x, z23y, z20c, z23c);
				fv2 = frechet(z23, z20, z23x, z23y, z20x, z20y, z23c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f294 = fv1;
			else
				f294 = fv2;


			printf("Frechet distance between %d and %d is: %f", z20, z23, f294); printf("\n");
			if (z20c != 0 && z24c != 0)
			{
				fv1 = frechet(z20, z24, z20x, z20y, z24x, z24y, z20c, z24c);
				fv2 = frechet(z24, z20, z24x, z24y, z20x, z20y, z24c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f295 = fv1;
			else
				f295 = fv2;


			printf("Frechet distance between %d and %d is: %f", z20, z24, f295); printf("\n");
			if (z20c != 0 && z25c != 0)
			{
				fv1 = frechet(z20, z25, z20x, z20y, z25x, z25y, z20c, z25c);
				fv2 = frechet(z25, z20, z25x, z25y, z20x, z20y, z25c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f296 = fv1;
			else
				f296 = fv2;


			printf("Frechet distance between %d and %d is: %f", z20, z25, f296); printf("\n");
			if (z22c != 0 && z21c != 0)
			{
				fv1 = frechet(z21, z22, z21x, z21y, z22x, z22y, z21c, z22c);
				fv2 = frechet(z22, z21, z22x, z22y, z21x, z21y, z22c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f297 = fv1;
			else
				f297 = fv2;


			printf("Frechet distance between %d and %d is: %f", z21, z22, f297); printf("\n");
			if (z23c != 0 && z21c != 0)
			{
				fv1 = frechet(z21, z23, z21x, z21y, z23x, z23y, z21c, z23c);
				fv2 = frechet(z23, z21, z23x, z23y, z21x, z21y, z23c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f298 = fv1;
			else
				f298 = fv2;


			printf("Frechet distance between %d and %d is: %f", z21, z23, f298); printf("\n");
			if (z24c != 0 && z21c != 0)
			{
				fv1 = frechet(z21, z24, z21x, z21y, z24x, z24y, z21c, z24c);
				fv2 = frechet(z24, z21, z24x, z24y, z21x, z21y, z24c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f299 = fv1;
			else
				f299 = fv2;


			printf("Frechet distance between %d and %d is: %f", z21, z24, f299); printf("\n");
			if (z25c != 0 && z21c != 0)
			{
				fv1 = frechet(z21, z25, z21x, z21y, z25x, z25y, z21c, z25c);
				fv2 = frechet(z25, z21, z25x, z25y, z21x, z21y, z25c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f300 = fv1;
			else
				f300 = fv2;


			printf("Frechet distance between %d and %d is: %f", z21, z25, f300); printf("\n");
			if (z22c != 0 && z23c != 0)
			{
				fv1 = frechet(z22, z23, z22x, z22y, z23x, z23y, z22c, z23c);
				fv2 = frechet(z23, z22, z23x, z23y, z22x, z22y, z23c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f301 = fv1;
			else
				f301 = fv2;


			printf("Frechet distance between %d and %d is: %f", z22, z23, f301); printf("\n");
			if (z22c != 0 && z24c != 0)
			{
				fv1 = frechet(z22, z24, z22x, z22y, z24x, z24y, z22c, z24c);
				fv2 = frechet(z24, z22, z24x, z24y, z22x, z22y, z24c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f302 = fv1;
			else
				f302 = fv2;


			printf("Frechet distance between %d and %d is: %f", z22, z24, f302); printf("\n");
			if (z22c != 0 && z25c != 0)
			{
				fv1 = frechet(z22, z25, z22x, z22y, z25x, z25y, z22c, z25c);
				fv2 = frechet(z25, z22, z25x, z25y, z22x, z22y, z25c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f303 = fv1;
			else
				f303 = fv2;


			printf("Frechet distance between %d and %d is: %f", z22, z25, f303); printf("\n");
			if (z24c != 0 && z23c != 0)
			{
				fv1 = frechet(z23, z24, z23x, z23y, z24x, z24y, z23c, z24c);
				fv2 = frechet(z24, z23, z24x, z24y, z23x, z23y, z24c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f304 = fv1;
			else
				f304 = fv2;


			printf("Frechet distance between %d and %d is: %f", z23, z24, f304); printf("\n");
			if (z25c != 0 && z23c != 0)
			{
				fv1 = frechet(z23, z25, z23x, z23y, z25x, z25y, z23c, z25c);
				fv2 = frechet(z25, z23, z25x, z25y, z23x, z23y, z25c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f305 = fv1;
			else
				f305 = fv2;


			printf("Frechet distance between %d and %d is: %f", z23, z25, f305); printf("\n");
			if (z24c != 0 && z25c != 0)
			{
				fv1 = frechet(z24, z25, z24x, z24y, z25x, z25y, z24c, z25c);
				fv2 = frechet(z25, z24, z25x, z25y, z24x, z24y, z25c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f306 = fv1;
			else
				f306 = fv2;


			printf("Frechet distance between %d and %d is: %f", z24, z25, f306); printf("\n");

			FILE* ptr;
			ptr = fopen("D:\\FRECHET_FEATURE CODES\\DAT_FRECHET\\25_zones.dat", "a");
			fprintf(ptr, "\n%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,DHA", g, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40, f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60, f61, f62, f63, f64, f65, f66, f67, f68, f69, f70, f71, f72, f73, f74, f75, f76, f77, f78, f79, f80, f81, f82, f83, f84, f85, f86, f87, f88, f89, f90, f91, f92, f93, f94, f95, f96, f97, f98, f99, f100, f101, f102, f103, f104, f105, f106, f107, f108, f109, f110, f0, f111, f112, f113, f114, f115, f116, f117, f118, f119, f120, f121, f122, f123, f124, f125, f126, f127, f128, f129, f130, f131, f132, f133, f134, f135, f136, f137, f138, f139, f140, f141, f142, f143, f144, f145, f146, f147, f148, f149, f150, f151, f152, f153, f154, f155, f156, f157, f158, f159, f160, f161, f162, f163, f164, f165, f166, f167, f168, f169, f170, f171, f172, f173, f174, f175, f176, f177, f178, f179, f180, f181, f182, f183, f184, f185, f186, f187, f188, f189, f190, f191, f307, f192, f193, f194, f195, f196, f197, f198, f199, f200, f201, f202, f203, f204, f205, f206, f207, f208, f209, f210, f211, f212, f213, f214, f215, f216, f217, f218, f219, f220, f221, f222, f223, f224, f225, f226, f227, f228, f229, f308, f230, f231, f232, f233, f234, f235, f236, f237, f238, f239, f240, f241, f242, f243, f244, f245, f246, f247, f248, f249, f250, f251, f252, f253, f254, f255, f256, f257, f258, f259, f260, f261, f262, f263, f264, f265, f266, f267, f268, f269, f270, f271, f272, f273, f274, f275, f276, f277, f278, f279, f280, f281, f282, f283, f284, f285, f286, f287, f288, f289, f290, f291, f292, f293, f294, f295, f296, f297, f298, f299, f300, f301, f302, f303, f304, f305, f306);

			fclose(ptr);

		}
	}
}

float frechet(int z1, int z2, int c1[], int c2[], int c3[], int c4[], int n1, int n2)
{
	int i, j;
	float temp[500];
	float max = 0, min = 0, k;
	printf("\n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (j == 0)
				max = sqrt(pow(((float)(abs(c1[i] - c3[j]))), 2) + pow((float)(abs(c2[i] - c4[j])), 2));
			else
			{
				k = sqrt(pow(((float)(abs(c1[i] - c3[j]))), 2) + pow((float)(abs(c2[i] - c4[j])), 2));
				if (k > max)
					max = k;
			}
		}
		temp[i] = max;
		// printf("MAX %d. = %f\n",i+1,max);
	}
	//printf("\n");
	min = temp[0];
	for (i = 1; i < n1; i++)
	{
		if (temp[i] < min)
			min = temp[i];
	}
	//printf("FRECHET  DISTANCE OF ZONE-%d WITH  RESPECT TO ZONE-%d IS %f UNITS.\n",z1,z2,min);
   // getch();
	return (min);
}

