#include<stdio.h>
#include<stdlib.h>
#include<cv.h>
#include<cxcore.h>
#include<highgui.h>
#include<math.h>
//float max,min,max1,min1,max2,min2,max3,min3,max4,min4,max5,min5,max6,min6,max7,min7,max8,min8,max9,min9,max10,min10,max11,min11,max12,min12,max13,min13,max14,min14,max15,min15,max16,min16,max17,min17,max18,min18,max19,min19,max20,min20,max21,min21,max22,min22,max23,min23,max24,min24,max25,min25,max26,min26,max27,min27,max28,min28,max29,min29,max30,min30,max31,min31,max32,min32,max33,min33,max34,min34,max35,min35,max36,min36,max37,min37,max38,min38,max39,min39,max40,min40,max41,min41,max42,min42,max43,min43,max44,min44,max45,min45,max46,min46,max47,min47,max48,min48,max49,min49,max50,min50,max51,min51,max52,min52,max53,min53,max54,min54,max55,min55,max56,min56,max57,min57,max58,min58,max59,min59,max60,min60,max61,min61,max62,min62,max63,min63,max64,min64,max65,min65,max66,min66,max67,min67,max68,min68,max69,min69,max70,min70,max71,min71,max72,min72,max73,min73,max74,min74,max75,min75,max76,min76,max77,min77,max78,min78,max79,min79,max80,min80,max81,min81,max82,min82,max83,min83,max84,min84,max85,min85,max86,min86,max87,min87,max88,min88,max89,min89,max90,min90,max91,min91,max92,min92,max93,min93,max94,min94,max95,min95,max96,min96,max97,min97,max98,min98,max99,min99,max100,min100,max101,min101,max102,min102,max103,min103,max104,min104,max105,min105,max106,min106,max107,min107,max108,min108,max109,min109,max110,min110,max111,min111,max112,min112,max113,min113,max114,min114,max115,min115,max116,min116,max117,min117,max118,min118,max119,min119,max120,min120,max121,min121,max122,min122,max123,min123,max124,min124,max125,min125,max126,min126,max127,min127,max128,min128,max129,min129,max130,min130,max131,min131,max132,min132,max133,min133,max134,min134,max135,min135,max136,min136,max137,min137,max138,min138,max139,min139,max140,min140,max141,min141,max142,min142,max143,min143,max144,min144,max145,min145,max146,min146,max147,min147,max148,min148,max149,min149,max150,min150,max151,min151,max152,min152,max153,min153,max154,min154,max155,min155,max156,min156,max157,min157,max158,min158,max159,min159,max160,min160,max161,min161,max162,min162,max163,min163,max164,min164,max165,min165,max166,min166,max167,min167,max168,min168,max169,min169,max170,min170,max171,min171,max172,min172,max173,min173,max174,min174,max175,min175,max176,min176,max177,min177,max178,min178,max179,min179,max180,min180,max181,min181,max182,min182,max183,min183,max184,min184,max185,min185,max186,min186,max187,min187,max188,min188,max189,min189,max190,min190,max191,min191,max192,min192,max193,min193,max194,min194,max195,min195,max196,min196,max197,min197,max198,min198,max199,min199,max200,min200,max201,min201,max202,min202,max203,min203,max204,min204,max205,min205,max206,min206,max207,min207,max208,min208,max209,min209,max210,min210,max211,min211,max212,min212,max213,min213,max214,min214,max215,min215,max216,min216,max217,min217,max218,min218,max219,min219,max220,min220,max221,min221,max222,min222,max223,min223,max224,min224,max225,min225,max226,min226,max227,min227,max228,min228,max229,min229,max230,min230,max231,min231,max232,min232,max233,min233,max234,min234,max235,min235,max236,min236,max237,min237,max238,min238,max239,min239,max240,min240,max241,min241;//,max94,min94,max95,min95,max96,min96,max97,min97,max98,min98,max99,min99,max100,min100,max101,min101,max102,min102,max103,min103,max104,min104,max105,min105,max106,min106;
//float k0,k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,k15,k16,k17,k18,k19,k20,k21,k22,k23,k24,k25,k26,k27,k28,k29,k30,k31,k32,k33,k34,k35,k36,k37,k38,k39,k40,k41,k42,k43,k44,k45,k46,k47,k48,k49,k50,k51,k52,k53,k54,k55,k56,k57,k58,k59,k60,k61,k62,k63,k64,k65,k66,k67,k68,k69,k70,k71,k72,k73,k74,k75,k76,k77,k78,k79,k80,k81,k82,k83,k84,k85,k86,k87,k88,k89,k90,k91,k92,k93,k94,k95,k96,k97,k98,k99,k100,k101,k102,k103,k104,k105,k106,k107,k108,k109,k110,k111,k112,k113,k114,k115,k116,k117,k118,k119,k120,k121,k122,k123,k124,k125,k126,k127,k128,k129,k130,k131,k132,k133,k134,k135,k136,k137,k138,k139,k140,k141,k142,k143,k144,k145,k146,k147,k148,k149,k150,k151,k152,k153,k154,k155,k156,k157,k158,k159,k160,k161,k162,k163,k164,k165,k166,k167,k168,k169,k170,k171,k172,k173,k174,k175,k176,k177,k178,k179,k180,k181,k182,k183,k184,k185,k186,k187,k188,k189,k190,k191,k192,k193,k194,k195,k196,k197,k198,k199,k200,k201,k202,k203,k204,k205,k206,k207,k208,k209,k210,k211,k212,k213,k214,k215,k216,k217,k218,k219,k220,k221,k222,k223,k224,k225,k226,k227,k228,k229,k230,k231,k232,k233,k234,k235,k236,k237,k238,k239,k240,k241;
//float f0,f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15,f16,f17,f18,f19,f20,f21,f22,f23,f24,f25,f26,f27,f28,f29,f30,f31,f32,f33,f34,f35,f36,f37,f38,f39,f40,f41,f42,f43,f44,f45,f46,f47,f48,f49,f50,f51,f52,f53,f54,f55,f56,f57,f58,f59,f60,f61,f62,f63,f64,f65,f66,f67,f68,f69,f70,f71,f72,f73,f74,f75,f76,f77,f78,f79,f80,f81,f82,f83,f84,f85,f86,f87,f88,f89,f90,f91,f92,f93,f94,f95,f96,f97,f98,f99,f100,f101,f102,f103,f104,f105,f106,f107,f108,f109,f110,f111,f112,f113,f114,f115,f116,f117,f118,f119;
int counter = -1, var;
void main()
{
	/*IplImage* img=cvCreateImage(cvSize(2000,2000),8,4);*/
	FILE* fp;
	//char *r = "C:\\DATASET\\A\\normalized\\unit_scalled_coordinate0000";
	char ch[500], r[300];
	int i, x[1000], y[1000], z[1000], n, j;
	int x1[1000], y1[1000];
	float mx, my;
	float m1x, m1y, m2x, m2y, m3x, m3y, m4x, m4y;
	//int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,l=0,m=0,q=0,o=0,p=0,v=0,w=0;
	int minx, miny, maxx, maxy, u;
	int z1[5000], z2[5000], z3[5000], z4[5000], z5[5000], z6[5000], z7[5000], z8[5000], z9[5000], z10[5000], z11[5000], z12[5000], z13[5000], z14[5000], z15[5000], z16[5000], z17[5000], z18[5000], z19[5000], z20[5000], z21[5000], z22[5000], z23[5000], z24[5000], z25[5000], z26[5000], z27[5000], z28[5000], z29[5000], z30[5000], z31[5000], z32[5000];
	for (var = 0; var < 200; var++)
	{   //int p=0,q=0,s=0,t=0;
		int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, k = 0, l = 0, m = 0, q = 0, o = 0, p = 0, v = 0, w = 0;
		counter++;
		sprintf(r, "F:\\SPS Sir Project\\Frechet Distance\\FRECHETDAT\\unit data\\A\\normalized\\unit_scalled_coordinate%04d", var);
		fp = fopen(r, "r");
		i = 0;
		while (!feof(fp)) {
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
		m1x = (minx + mx) / 2;
		m1y = (miny + my) / 2;
		m2x = (mx + maxx) / 2;
		m2y = (my + miny) / 2;
		m3x = (minx + mx) / 2;
		m3y = (my + maxy) / 2;
		m4x = (mx + maxx) / 2;
		m4y = (my + maxy) / 2;
		/*for(i=0;i<n-1;i++){
			if(((z[i]==0)&&(z[i+1]==1))||((z[i]==1)&&(z[i+1]==1))){
					cvLine(img,cvPoint(minx,m3y),cvPoint(mx,m3y),CV_RGB(0,255,0),1,8,0);
					cvLine(img,cvPoint(m3x,my),cvPoint(m3x,maxy),CV_RGB(0,255,0),1,8,0);
					cvLine(img,cvPoint(mx,m4y),cvPoint(maxx,m4y),CV_RGB(0,255,0),1,8,0);
					cvLine(img,cvPoint(m4x,my),cvPoint(m4x,maxy),CV_RGB(0,255,0),1,8,0);
					cvLine(img,cvPoint(mx,m2y),cvPoint(maxx,m2y),CV_RGB(0,255,0),1,8,0);
					cvLine(img,cvPoint(m2x,miny),cvPoint(m2x,my),CV_RGB(0,255,0),1,8,0);
					cvLine(img,cvPoint(minx,m1y),cvPoint(mx,m1y),CV_RGB(0,255,0),1,8,0);
					 cvLine(img,cvPoint(m1x,miny),cvPoint(m1x,my),CV_RGB(0,255,0),1,8,0);
					 cvLine(img,cvPoint(minx,my),cvPoint(maxx,my),CV_RGB(0,255,0),1,8,0);
					cvLine(img,cvPoint(mx,miny),cvPoint(mx,maxy),CV_RGB(0,255,0),1,8,0);

				cvLine(img,cvPoint(x[i],y[i]),cvPoint(x[i+1],y[i+1]),CV_RGB(255,0,0),1,8,0);
				cvRectangle(img,cvPoint(minx,maxy),cvPoint(maxx,miny),CV_RGB(0,255,0),1,8,0);

			}
		}*/
		fp = fopen(r, "r");
		i = 0;
		while (!feof(fp))
		{
			fscanf(fp, "%d %d %d\n", &x[i], &y[i], &z[i]);


			if ((x[i] <= m1x && x[i] >= minx) && (y[i] <= m1y && y[i] >= miny))
			{
				z1[a] = x[i];
				z2[a] = y[i];
				a++;
			}

			if ((x[i] > m1x && x[i] <= mx) && (y[i] >= miny && y[i] <= m1y))
			{
				z3[b] = x[i];
				z4[b] = y[i];
				b++;
			}


			if ((x[i] >= minx && x[i] <= m1x) && (y[i] > m1y && y[i] <= my))
			{
				z5[c] = x[i];
				z6[c] = y[i];
				c++;
			}

			if ((x[i] > m1x && x[i] <= mx) && (y[i] > m1y && y[i] <= my))
			{
				z7[d] = x[i];
				z8[d] = y[i];
				d++;

			}
			if ((x[i] > mx && x[i] <= m2x) && (y[i] >= miny && y[i] <= m2y))
			{
				z9[e] = x[i];
				z10[e] = y[i];
				e++;
			}
			if ((x[i] <= maxx && x[i] > m2x) && (y[i] >= miny && y[i] <= m2y))
			{
				z11[f] = x[i];
				z12[f] = y[i];
				f++;
			}
			if ((x[i] <= m2x && x[i] > mx) && (y[i] <= my && y[i] > m2y))
			{
				z13[g] = x[i];
				z14[g] = y[i];
				g++;
			}
			if ((x[i] <= maxx && x[i] > m2x) && (y[i] <= my && y[i] > m2y))
			{
				z15[h] = x[i];
				z16[h] = y[i];
				h++;
			}
			if ((x[i] <= m3x && x[i] >= minx) && (y[i] <= m3y && y[i] > my))
			{
				z17[k] = x[i];
				z18[k] = y[i];
				k++;
			}
			if ((x[i] <= mx && x[i] > m3x) && (y[i] <= m3y && y[i] > my))
			{
				z19[l] = x[i];
				z20[l] = y[i];
				l++;
			}
			if ((x[i] <= m3x && x[i] >= minx) && (y[i] <= maxy && y[i] > m3y))
			{
				z21[m] = x[i];
				z22[m] = y[i];
				m++;
			}
			if ((x[i] <= mx && x[i] > m3x) && (y[i] <= maxy && y[i] > m3y))
			{
				z23[o] = x[i];
				z24[o] = y[i];
				o++;

			}
			if ((x[i] <= m4x && x[i] > mx) && (y[i] <= m4y && y[i] > my))
			{
				z25[p] = x[i];
				z26[p] = y[i];
				p++;
			}
			if ((x[i] <= maxx && x[i] > m4x) && (y[i]<m4y && y[i]>my))
			{
				z27[q] = x[i];
				z28[q] = y[i];
				q++;
			}
			if ((x[i] <= m4x && x[i] > mx) && (y[i] <= maxy && y[i] > m4y))
			{
				z29[v] = x[i];
				z30[v] = y[i];
				v++;
			}
			if ((x[i] <= maxx && x[i] > m4x) && (y[i] <= maxy && y[i] > m4y))
			{
				z31[w] = x[i];
				z32[w] = y[i];
				w++;
			}

			i++;
		}
		fclose(fp);
		for (i = 0; i < a; i++)
			printf("%d     %d         %d\n", z1[i], z2[i], a); printf("\n");
		for (i = 0; i < b; i++)
			printf("%d     %d         %d\n", z3[i], z4[i], b); printf("\n");
		for (i = 0; i < c; i++)
			printf("%d     %d         %d\n", z5[i], z6[i], c); printf("\n");
		for (i = 0; i < d; i++)
			printf("%d     %d         %d\n", z7[i], z8[i], d); printf("\n");
		for (i = 0; i < e; i++)
			printf("%d     %d         %d\n", z9[i], z10[i], e); printf("\n");
		for (i = 0; i < f; i++)
			printf("%d     %d         %d\n", z11[i], z12[i], f); printf("\n");
		for (i = 0; i < g; i++)
			printf("%d     %d         %d\n", z13[i], z14[i], g); printf("\n");
		for (i = 0; i < h; i++)
			printf("%d     %d         %d\n", z15[i], z16[i], h); printf("\n");
		for (i = 0; i < k; i++)
			printf("%d     %d         %d\n", z17[i], z18[i], k); printf("\n");
		for (i = 0; i < l; i++)
			printf("%d     %d         %d\n", z19[i], z20[i], l); printf("\n");
		for (i = 0; i < m; i++)
			printf("%d     %d         %d\n", z21[i], z22[i], m); printf("\n");
		for (i = 0; i < o; i++)
			printf("%d     %d         %d\n", z23[i], z24[i], o); printf("\n");
		for (i = 0; i < p; i++)
			printf("%d     %d         %d\n", z25[i], z26[i], p); printf("\n");
		for (i = 0; i < q; i++)
			printf("%d     %d         %d\n", z27[i], z28[i], q); printf("\n");
		for (i = 0; i < v; i++)
			printf("%d     %d         %d\n", z29[i], z30[i], v); printf("\n");
		for (i = 0; i < w; i++)
			printf("%d     %d         %d\n", z31[i], z32[i], w); printf("\n");
		frechet(z1, z2, a, z3, z4, b, z5, z6, c, z7, z8, d, z9, z10, e, z11, z12, f, z13, z14, g, z15, z16, h, z17, z18, k, z19, z20, l, z21, z22, m, z23, z24, o, z25, z26, p, z27, z28, q, z29, z30, v, z31, z32, w);
		fclose(fp);

	}

}

/*void main()
{
	angulartrnsfrm("D:\\SPS Sir Project\\Frechet\\FRECHETDAT\\unit data\\A\\normalized\\unit_scalled_coordinate0000");
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
	display(".\\data\\64-point0024");

}*/

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
}int maximum(int arr[], int n)
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
void frechet(int z1[], int z2[], int a, int z3[], int z4[], int b, int z5[], int z6[], int c, int z7[], int z8[], int d, int z9[], int z10[], int e, int z11[], int z12[], int f, int z13[], int z14[], int g, int z15[], int z16[], int h, int z17[], int z18[], int k, int z19[], int z20[], int l, int z21[], int z22[], int m, int z23[], int z24[], int o, int z25[], int z26[], int p, int z27[], int z28[], int q, int z29[], int z30[], int v, int z31[], int z32[], int w)
{
	int i, j, y = 0;
	float temp[500], temp1[500], temp2[500], temp3[500], temp4[500], temp5[500], temp6[500], temp7[500], temp8[500], temp9[500], temp10[500], temp11[500], temp12[500], temp13[500], temp14[500], temp15[500], temp16[500], temp17[500], temp18[500], temp19[500], temp20[500], temp21[500], temp22[500], temp23[500], temp24[500], temp25[500], temp26[500], temp27[500], temp28[500], temp29[500], temp30[500], temp31[500], temp32[500], temp33[500], temp34[500], temp35[500], temp36[500], temp37[500], temp38[500], temp39[500], temp40[500], temp41[500], temp42[500], temp43[500], temp44[500], temp45[500], temp46[500], temp47[500], temp48[500], temp49[500], temp50[500], temp51[500], temp52[500], temp53[500], temp54[500], temp55[500], temp56[500], temp57[500], temp58[500], temp59[500], temp60[500], temp61[500], temp62[500], temp63[500], temp64[500], temp65[500], temp66[500], temp67[500], temp68[500], temp69[500], temp70[500], temp71[500], temp72[500], temp73[500], temp74[500], temp75[500], temp76[500], temp77[500], temp78[500], temp79[500], temp80[500], temp81[500], temp82[500], temp83[500], temp84[500], temp85[500], temp86[500], temp87[500], temp88[500], temp89[500], temp90[500], temp91[500], temp92[500], temp93[500], temp94[500], temp95[500], temp96[500], temp97[500], temp98[500], temp99[500], temp100[500], temp101[500], temp102[500], temp103[500], temp104[500], temp105[500], temp106[500], temp107[500], temp108[500], temp109[500], temp110[500], temp111[500], temp112[500], temp113[500], temp114[500], temp115[500], temp116[500], temp117[500], temp118[500], temp119[500], temp120[500], temp121[500], temp122[500], temp123[500], temp124[500], temp125[500], temp126[500], temp127[500], temp128[500], temp129[500], temp130[500], temp131[500], temp132[500], temp133[500], temp134[500], temp135[500], temp136[500], temp137[500], temp138[500], temp139[500], temp140[500], temp141[500], temp142[500], temp143[500], temp144[500], temp145[500], temp146[500], temp147[500], temp148[500], temp149[500], temp150[500], temp151[500], temp152[500], temp153[500], temp154[500], temp155[500], temp156[500], temp157[500], temp158[500], temp159[500], temp160[500], temp161[500], temp162[500], temp163[500], temp164[500], temp165[500], temp166[500], temp167[500], temp168[500], temp169[500], temp170[500], temp171[500], temp172[500], temp173[500], temp174[500], temp175[500], temp176[500], temp177[500], temp178[500], temp179[500], temp180[500], temp181[500], temp182[500], temp183[500], temp184[500], temp185[500], temp186[500], temp187[500], temp188[500], temp189[500], temp190[500], temp191[500], temp192[500], temp193[500], temp194[500], temp195[500], temp196[500], temp197[500], temp198[500], temp199[500], temp200[500], temp201[500], temp202[500], temp203[500], temp204[500], temp205[500], temp206[500], temp207[500], temp208[500], temp209[500], temp210[500], temp211[500], temp212[500], temp213[500], temp214[500], temp215[500], temp216[500], temp217[500], temp218[500], temp219[500], temp220[500], temp221[500], temp222[500], temp223[500], temp224[500], temp225[500], temp226[500], temp227[500], temp228[500], temp229[500], temp230[500], temp231[500], temp232[500], temp233[500], temp234[500], temp235[500], temp236[500], temp237[500], temp238[500], temp239[500], temp240[500], temp241[500];//,temp103[50],temp104[50],temp105[50],temp106[50];
	//float temp[1000],temp1[1000],temp2[1000],temp3[5000],temp4[5000],temp5[5000],temp6[5000],temp7[5000],temp8[5000],temp9[5000],temp10[5000],temp11[5000],temp12[5000],temp13[5000],temp14[5000],temp15[5000],temp16[5000],temp17[5000],temp18[5000],temp19[5000],temp20[5000],temp21[5000],temp22[5000],temp23[5000],temp24[5000],temp25[5000],temp26[5000],temp27[5000],temp28[5000],temp29[5000],temp30[5000],temp31[5000],temp32[5000],temp33[5000],temp34[5000],temp35[5000],temp36[5000],temp37[5000],temp38[5000],temp39[5000],temp40[5000],temp41[5000],temp42[5000],temp43[5000],temp44[5000],temp45[5000],temp46[5000],temp47[5000],temp48[5000],temp49[5000],temp50[5000],temp51[5000],temp52[5000],temp53[5000],temp54[5000],temp55[5000],temp56[5000],temp57[5000],temp58[5000],temp59[5000],temp60[5000],temp61[5000],temp62[5000],temp63[5000],temp64[5000],temp65[5000],temp66[5000],temp67[5000],temp68[5000],temp69[5000],temp70[5000],temp71[5000],temp72[5000],temp73[5000],temp74[5000],temp75[5000],temp76[5000],temp77[5000],temp78[5000],temp79[5000],temp80[5000],temp81[5000],temp82[5000],temp83[5000],temp84[5000],temp85[5000],temp86[5000],temp87[5000],temp88[5000],temp89[5000],temp90[5000],temp91[5000],temp92[5000],temp93[5000],temp94[5000],temp95[5000],temp96[5000],temp97[5000],temp98[5000],temp99[5000],temp100[5000],temp101[5000],temp102[5000],temp103[5000],temp104[5000],temp105[5000],temp106[5000],temp107[5000],temp108[5000],temp109[5000],temp110[5000],temp111[5000],temp112[5000],temp113[5000],temp114[5000],temp115[5000],temp116[5000],temp117[5000],temp118[5000],temp119[5000],temp120[5000],temp121[5000],temp122[5000],temp123[5000],temp124[5000],temp125[5000],temp126[5000],temp127[5000],temp128[5000],temp129[5000],temp130[5000],temp131[5000],temp132[5000],temp133[5000],temp134[5000],temp135[5000],temp136[5000],temp137[5000],temp138[5000],temp139[5000],temp140[5000],temp141[5000],temp142[5000],temp143[5000],temp144[5000],temp145[5000],temp146[5000],temp147[5000],temp148[5000],temp149[5000],temp150[5000],temp151[5000],temp152[5000],temp153[5000],temp154[5000],temp155[5000],temp156[5000],temp157[5000],temp158[5000],temp159[5000],temp160[5000],temp161[5000],temp162[5000],temp163[5000],temp164[5000],temp165[5000],temp166[5000],temp167[5000],temp168[5000],temp169[5000],temp170[5000],temp171[5000],temp172[5000],temp173[5000],temp174[5000],temp175[5000],temp176[5000],temp177[5000],temp178[5000],temp179[5000],temp180[5000],temp181[5000],temp182[5000],temp183[5000],temp184[5000],temp185[5000],temp186[5000],temp187[5000],temp188[5000],temp189[5000],temp190[5000],temp191[5000],temp192[5000],temp193[5000],temp194[5000],temp195[5000],temp196[5000],temp197[50],temp198[5000],temp199[5000],temp200[5000],temp201[5000],temp202[5000],temp203[5000],temp204[5000],temp205[5000],temp206[5000],temp207[5000],temp208[5000],temp209[5000],temp210[5000],temp211[5000],temp212[5000],temp213[5000],temp214[5000],temp215[5000],temp216[5000],temp217[5000],temp218[5000],temp219[5000],temp220[5000],temp221[5000],temp222[5000],temp223[5000],temp224[5000],temp225[5000],temp226[5000],temp227[5000],temp228[5000],temp229[5000],temp230[5000],temp231[5000],temp232[5000],temp233[5000],temp234[5000],temp235[5000],temp236[5000],temp237[5000],temp238[5000],temp239[5000],temp240[5000],temp241[5000];//,temp103[50],temp104[50],temp105[50],temp106[50];
	float max = 0, min = 0, max1 = 0, min1 = 0, max2 = 0, min2 = 0, max3 = 0, min3 = 0, max4 = 0, min4 = 0, max5 = 0, min5 = 0, max6 = 0, min6 = 0, max7 = 0, min7 = 0, max8 = 0, min8 = 0, max9 = 0, min9 = 0, max10 = 0, min10 = 0, max11 = 0, min11 = 0, max12 = 0, min12 = 0, max13 = 0, min13 = 0, max14 = 0, min14 = 0, max15 = 0, min15 = 0, max16 = 0, min16 = 0, max17 = 0, min17 = 0, max18 = 0, min18 = 0, max19 = 0, min19 = 0, max20 = 0, min20 = 0, max21 = 0, min21 = 0, max22 = 0, min22 = 0, max23 = 0, min23 = 0, max24 = 0, min24 = 0, max25 = 0, min25 = 0, max26 = 0, min26 = 0, max27 = 0, min27 = 0, max28 = 0, min28 = 0, max29 = 0, min29 = 0, max30 = 0, min30 = 0, max31 = 0, min31 = 0, max32 = 0, min32 = 0, max33 = 0, min33 = 0, max34 = 0, min34 = 0, max35 = 0, min35 = 0, max36 = 0, min36 = 0, max37 = 0, min37 = 0, max38 = 0, min38 = 0, max39 = 0, min39 = 0, max40 = 0, min40 = 0, max41 = 0, min41 = 0, max42 = 0, min42 = 0, max43 = 0, min43 = 0, max44 = 0, min44 = 0, max45 = 0, min45 = 0, max46 = 0, min46 = 0, max47 = 0, min47 = 0, max48 = 0, min48 = 0, max49 = 0, min49 = 0, max50 = 0, min50 = 0, max51 = 0, min51 = 0, max52 = 0, min52 = 0, max53 = 0, min53 = 0, max54 = 0, min54 = 0, max55 = 0, min55 = 0, max56 = 0, min56 = 0, max57 = 0, min57 = 0, max58 = 0, min58 = 0, max59 = 0, min59 = 0, max60 = 0, min60 = 0, max61 = 0, min61 = 0, max62 = 0, min62 = 0, max63 = 0, min63 = 0, max64 = 0, min64 = 0, max65 = 0, min65 = 0, max66 = 0, min66 = 0, max67 = 0, min67 = 0, max68 = 0, min68 = 0, max69 = 0, min69 = 0, max70 = 0, min70 = 0, max71 = 0, min71 = 0, max72 = 0, min72 = 0, max73 = 0, min73 = 0, max74 = 0, min74 = 0, max75 = 0, min75 = 0, max76 = 0, min76 = 0, max77 = 0, min77 = 0, max78 = 0, min78 = 0, max79 = 0, min79 = 0, max80 = 0, min80 = 0, max81 = 0, min81 = 0, max82 = 0, min82 = 0, max83 = 0, min83 = 0, max84 = 0, min84 = 0, max85 = 0, min85 = 0, max86 = 0, min86 = 0, max87 = 0, min87 = 0, max88 = 0, min88 = 0, max89 = 0, min89 = 0, max90 = 0, min90 = 0, max91 = 0, min91 = 0, max92 = 0, min92 = 0, max93 = 0, min93 = 0, max94 = 0, min94 = 0, max95 = 0, min95 = 0, max96 = 0, min96 = 0, max97 = 0, min97 = 0, max98 = 0, min98 = 0, max99 = 0, min99 = 0, max100 = 0, min100 = 0, max101 = 0, min101 = 0, max102 = 0, min102 = 0, max103 = 0, min103 = 0, max104 = 0, min104 = 0, max105 = 0, min105 = 0, max106 = 0, min106 = 0, max107 = 0, min107 = 0, max108 = 0, min108 = 0, max109 = 0, min109 = 0, max110 = 0, min110 = 0, max111 = 0, min111 = 0, max112 = 0, min112 = 0, max113 = 0, min113 = 0, max114 = 0, min114 = 0, max115 = 0, min115 = 0, max116 = 0, min116 = 0, max117 = 0, min117 = 0, max118 = 0, min118 = 0, max119 = 0, min119 = 0, max120 = 0, min120 = 0, max121 = 0, min121 = 0, max122 = 0, min122 = 0, max123 = 0, min123 = 0, max124 = 0, min124 = 0, max125 = 0, min125 = 0, max126 = 0, min126 = 0, max127 = 0, min127 = 0, max128 = 0, min128 = 0, max129 = 0, min129 = 0, max130 = 0, min130 = 0, max131 = 0, min131 = 0, max132 = 0, min132 = 0, max133 = 0, min133 = 0, max134 = 0, min134 = 0, max135 = 0, min135 = 0, max136 = 0, min136 = 0, max137 = 0, min137 = 0, max138 = 0, min138 = 0, max139 = 0, min139 = 0, max140 = 0, min140 = 0, max141 = 0, min141 = 0, max142 = 0, min142 = 0, max143 = 0, min143 = 0, max144 = 0, min144 = 0, max145 = 0, min145 = 0, max146 = 0, min146 = 0, max147 = 0, min147 = 0, max148 = 0, min148 = 0, max149 = 0, min149 = 0, max150 = 0, min150 = 0, max151 = 0, min151 = 0, max152 = 0, min152 = 0, max153 = 0, min153 = 0, max154 = 0, min154 = 0, max155 = 0, min155 = 0, max156 = 0, min156 = 0, max157 = 0, min157 = 0, max158 = 0, min158 = 0, max159 = 0, min159 = 0, max160 = 0, min160 = 0, max161 = 0, min161 = 0, max162 = 0, min162 = 0, max163 = 0, min163 = 0, max164 = 0, min164 = 0, max165 = 0, min165 = 0, max166 = 0, min166 = 0, max167 = 0, min167 = 0, max168 = 0, min168 = 0, max169 = 0, min169 = 0, max170 = 0, min170 = 0, max171 = 0, min171 = 0, max172 = 0, min172 = 0, max173 = 0, min173 = 0, max174 = 0, min174 = 0, max175 = 0, min175 = 0, max176 = 0, min176 = 0, max177 = 0, min177 = 0, max178 = 0, min178 = 0, max179 = 0, min179 = 0, max180 = 0, min180 = 0, max181 = 0, min181 = 0, max182 = 0, min182 = 0, max183 = 0, min183 = 0, max184 = 0, min184 = 0, max185 = 0, min185 = 0, max186 = 0, min186 = 0, max187 = 0, min187 = 0, max188 = 0, min188 = 0, max189 = 0, min189 = 0, max190 = 0, min190 = 0, max191 = 0, min191 = 0, max192 = 0, min192 = 0, max193 = 0, min193 = 0, max194 = 0, min194 = 0, max195 = 0, min195 = 0, max196 = 0, min196 = 0, max197 = 0, min197 = 0, max198 = 0, min198 = 0, max199 = 0, min199 = 0, max200 = 0, min200 = 0, max201 = 0, min201 = 0, max202 = 0, min202 = 0, max203 = 0, min203 = 0, max204 = 0, min204 = 0, max205 = 0, min205 = 0, max206 = 0, min206 = 0, max207 = 0, min207 = 0, max208 = 0, min208 = 0, max209 = 0, min209 = 0, max210 = 0, min210 = 0, max211 = 0, min211 = 0, max212 = 0, min212 = 0, max213 = 0, min213 = 0, max214 = 0, min214 = 0, max215 = 0, min215 = 0, max216 = 0, min216 = 0, max217 = 0, min217 = 0, max218 = 0, min218 = 0, max219 = 0, min219 = 0, max220 = 0, min220 = 0, max221 = 0, min221 = 0, max222 = 0, min222 = 0, max223 = 0, min223 = 0, max224 = 0, min224 = 0, max225 = 0, min225 = 0, max226 = 0, min226 = 0, max227 = 0, min227 = 0, max228 = 0, min228 = 0, max229 = 0, min229 = 0, max230 = 0, min230 = 0, max231 = 0, min231 = 0, max232 = 0, min232 = 0, max233 = 0, min233 = 0, max234 = 0, min234 = 0, max235 = 0, min235 = 0, max236 = 0, min236 = 0, max237 = 0, min237 = 0, max238 = 0, min238 = 0, max239 = 0, min239 = 0, max240 = 0, min240 = 0, max241 = 0, min241 = 0;//,max94,min94,max95,min95,max96,min96,max97,min97,max98,min98,max99,min99,max100,min100,max101,min101,max102,min102,max103,min103,max104,min104,max105,min105,max106,min106;
	float k0, k1, k2, k3, k4, k5, k6, k7, k8, k9, k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k50, k51, k52, k53, k54, k55, k56, k57, k58, k59, k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k70, k71, k72, k73, k74, k75, k76, k77, k78, k79, k80, k81, k82, k83, k84, k85, k86, k87, k88, k89, k90, k91, k92, k93, k94, k95, k96, k97, k98, k99, k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112, k113, k114, k115, k116, k117, k118, k119, k120, k121, k122, k123, k124, k125, k126, k127, k128, k129, k130, k131, k132, k133, k134, k135, k136, k137, k138, k139, k140, k141, k142, k143, k144, k145, k146, k147, k148, k149, k150, k151, k152, k153, k154, k155, k156, k157, k158, k159, k160, k161, k162, k163, k164, k165, k166, k167, k168, k169, k170, k171, k172, k173, k174, k175, k176, k177, k178, k179, k180, k181, k182, k183, k184, k185, k186, k187, k188, k189, k190, k191, k192, k193, k194, k195, k196, k197, k198, k199, k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212, k213, k214, k215, k216, k217, k218, k219, k220, k221, k222, k223, k224, k225, k226, k227, k228, k229, k230, k231, k232, k233, k234, k235, k236, k237, k238, k239, k240, k241;
	float f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40, f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60, f61, f62, f63, f64, f65, f66, f67, f68, f69, f70, f71, f72, f73, f74, f75, f76, f77, f78, f79, f80, f81, f82, f83, f84, f85, f86, f87, f88, f89, f90, f91, f92, f93, f94, f95, f96, f97, f98, f99, f100, f101, f102, f103, f104, f105, f106, f107, f108, f109, f110, f111, f112, f113, f114, f115, f116, f117, f118, f119;



	if (a == 0 || b == 0)
		printf("frechet distance  of zone 1 wrt zone 2=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max = sqrt((pow((z4[j] - z2[i]), 2)) + (pow((z3[j] - z1[i]), 2)));
				else {
					k0 = sqrt((pow((z4[j] - z2[i]), 2)) + (pow((z3[j] - z1[i]), 2)));
					if (k0 > max)
						max = k0;
				}
			} printf("max=%f\n ", max);
			temp[y++] = max;
		}

		printf("\n");
		min = temp[0];
		for (i = 1; i < a; i++)
		{
			if (temp[i] < min)
				min = temp[i];
		}
		printf("frechet distance of zone 1 wrt zone 2=%f\n", min);
	}
	printf("\n");
	y = 0;

	if (a == 0 || c == 0)
		printf("frechet distance of zone 1 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max1 = sqrt((pow((z6[j] - z2[i]), 2)) + (pow((z5[j] - z1[i]), 2)));
				else {
					k1 = sqrt((pow((z6[j] - z2[i]), 2)) + (pow((z5[j] - z1[i]), 2)));
					if (k1 > max1)
						max1 = k1;
				}
			} printf("max1=%f\n ", max1);
			temp1[y++] = max1;
		}

		printf("\n");
		min1 = temp1[0];
		for (i = 1; i < a; i++)
		{
			if (temp1[i] < min1)
				min1 = temp1[i];
		}
		printf("frechet distance of zone 1 wrt zone 3=%f\n", min1);
	}

	printf("\n");
	y = 0;

	if (a == 0 || d == 0)
		printf("frechet distance  of zone 1 wrt zone 4=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max2 = sqrt((pow((z8[j] - z2[i]), 2)) + (pow((z7[j] - z1[i]), 2)));
				else {
					k2 = sqrt((pow((z8[j] - z2[i]), 2)) + (pow((z7[j] - z1[i]), 2)));
					if (k2 > max2)
						max2 = k2;
				}
			} printf("max2=%f\n", max2);
			temp2[y++] = max2;
		}

		printf("\n");
		min2 = temp2[0];
		for (i = 1; i < a; i++)
		{
			if (temp2[i] < min2)
				min2 = temp2[i];
		}
		printf("frechet distance of zone 1 wrt zone 4=%f\n", min2);
	}
	printf("\n");
	y = 0;

	if (a == 0 || e == 0)
		printf("frechet distance  of zone 1 wrt zone 5=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
					max46 = sqrt((pow((z10[j] - z2[i]), 2)) + (pow((z9[j] - z1[i]), 2)));
				else {
					k46 = sqrt((pow((z10[j] - z2[i]), 2)) + (pow((z9[j] - z1[i]), 2)));
					if (k46 > max46)
						max46 = k46;
				}
			} printf("max46=%f\n", max46);
			temp46[y++] = max46;
		}

		printf("\n");
		min46 = temp46[0];
		for (i = 1; i < a; i++)
		{
			if (temp46[i] < min46)
				min46 = temp46[i];
		}
		printf("frechet distance of zone 1 wrt zone 5=%f\n", min46);
	}
	printf("\n");
	y = 0;

	if (a == 0 || f == 0)
		printf("frechet distance  of zone 1 wrt zone 6=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max47 = sqrt((pow((z12[j] - z2[i]), 2)) + (pow((z11[j] - z1[i]), 2)));
				else {
					k47 = sqrt((pow((z12[j] - z2[i]), 2)) + (pow((z11[j] - z1[i]), 2)));
					if (k47 > max47)
						max47 = k47;
				}
			} printf("max47=%f\n", max47);
			temp47[y++] = max47;
		}

		printf("\n");
		min47 = temp47[0];
		for (i = 1; i < a; i++)
		{
			if (temp47[i] < min47)
				min47 = temp47[i];
		}
		printf("frechet distance of zone 1 wrt zone 6=%f\n", min47);
	}
	printf("\n");
	y = 0;

	if (a == 0 || g == 0)
		printf("frechet distance  of zone 1 wrt zone 7=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max48 = sqrt((pow((z14[j] - z2[i]), 2)) + (pow((z13[j] - z1[i]), 2)));
				else {
					k48 = sqrt((pow((z14[j] - z2[i]), 2)) + (pow((z13[j] - z1[i]), 2)));
					if (k48 > max48)
						max48 = k48;
				}
			} printf("max48=%f\n", max48);
			temp48[y++] = max48;
		}

		printf("\n");
		min48 = temp48[0];
		for (i = 1; i < a; i++)
		{
			if (temp48[i] < min48)
				min48 = temp48[i];
		}
		printf("frechet distance of zone 1 wrt zone 7=%f\n", min48);
	}
	printf("\n");
	y = 0;

	if (a == 0 || h == 0)
		printf("frechet distance  of zone 1 wrt zone 8=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max49 = sqrt((pow((z16[j] - z2[i]), 2)) + (pow((z15[j] - z1[i]), 2)));
				else {
					k49 = sqrt((pow((z16[j] - z2[i]), 2)) + (pow((z15[j] - z1[i]), 2)));
					if (k49 > max49)
						max49 = k49;
				}
			} printf("max49=%f\n", max49);
			temp49[y++] = max49;
		}

		printf("\n");
		min49 = temp49[0];
		for (i = 1; i < a; i++)
		{
			if (temp49[i] < min49)
				min49 = temp49[i];
		}
		printf("frechet distance of zone 1 wrt zone 8=%f\n", min49);
	}
	printf("\n");
	y = 0;

	if (a == 0 || k == 0)
		printf("frechet distance  of zone 1 wrt zone 9=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max50 = sqrt((pow((z18[j] - z2[i]), 2)) + (pow((z17[j] - z1[i]), 2)));
				else {
					k50 = sqrt((pow((z18[j] - z2[i]), 2)) + (pow((z17[j] - z1[i]), 2)));
					if (k50 > max50)
						max50 = k50;
				}
			} printf("max50=%f\n", max50);
			temp50[y++] = max50;
		}

		printf("\n");
		min50 = temp50[0];
		for (i = 1; i < a; i++)
		{
			if (temp50[i] < min50)
				min50 = temp50[i];
		}
		printf("frechet distance of zone 1 wrt zone 9=%f\n", min50);
	}
	printf("\n");
	y = 0;

	if (a == 0 || l == 0)
		printf("frechet distance  of zone 1 wrt zone 10=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max51 = sqrt((pow((z20[j] - z2[i]), 2)) + (pow((z19[j] - z1[i]), 2)));
				else {
					k51 = sqrt((pow((z20[j] - z2[i]), 2)) + (pow((z19[j] - z1[i]), 2)));
					if (k51 > max51)
						max51 = k51;
				}
			} printf("max51=%f\n", max51);
			temp51[y++] = max51;
		}

		printf("\n");
		min51 = temp51[0];
		for (i = 1; i < a; i++)
		{
			if (temp51[i] < min51)
				min51 = temp51[i];
		}
		printf("frechet distance of zone 1 wrt zone 10=%f\n", min51);
	}
	printf("\n");
	y = 0;

	if (a == 0 || m == 0)
		printf("frechet distance  of zone 1 wrt zone 11=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max52 = sqrt((pow((z22[j] - z2[i]), 2)) + (pow((z21[j] - z1[i]), 2)));
				else {
					k52 = sqrt((pow((z22[j] - z2[i]), 2)) + (pow((z21[j] - z1[i]), 2)));
					if (k52 > max52)
						max52 = k52;
				}
			} printf("max52=%f\n", max52);
			temp52[y++] = max52;
		}

		printf("\n");
		min52 = temp52[0];
		for (i = 1; i < a; i++)
		{
			if (temp52[i] < min52)
				min52 = temp52[i];
		}
		printf("frechet distance of zone 1 wrt zone 11=%f\n", min52);
	}
	printf("\n");
	y = 0;

	if (a == 0 || o == 0)
		printf("frechet distance  of zone 1 wrt zone 12=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max53 = sqrt((pow((z24[j] - z2[i]), 2)) + (pow((z23[j] - z1[i]), 2)));
				else {
					k53 = sqrt((pow((z24[j] - z2[i]), 2)) + (pow((z23[j] - z1[i]), 2)));
					if (k53 > max53)
						max53 = k53;
				}
			} printf("max53=%f\n", max53);
			temp53[y++] = max53;
		}

		printf("\n");
		min53 = temp53[0];
		for (i = 1; i < a; i++)
		{
			if (temp53[i] < min53)
				min53 = temp53[i];
		}
		printf("frechet distance of zone 1 wrt zone 12=%f\n", min53);
	}
	printf("\n");
	y = 0;

	if (a == 0 || p == 0)
		printf("frechet distance  of zone 1 wrt zone 13=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max54 = sqrt((pow((z26[j] - z2[i]), 2)) + (pow((z25[j] - z1[i]), 2)));
				else {
					k54 = sqrt((pow((z26[j] - z2[i]), 2)) + (pow((z25[j] - z1[i]), 2)));
					if (k54 > max54)
						max54 = k54;
				}
			} printf("max54=%f\n", max54);
			temp54[y++] = max54;
		}

		printf("\n");
		min54 = temp54[0];
		for (i = 1; i < a; i++)
		{
			if (temp54[i] < min54)
				min54 = temp54[i];
		}
		printf("frechet distance of zone 1 wrt zone 13=%f\n", min54);
	}
	printf("\n");
	y = 0;

	if (a == 0 || q == 0)
		printf("frechet distance  of zone 1 wrt zone 14=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max55 = sqrt((pow((z28[j] - z2[i]), 2)) + (pow((z27[j] - z1[i]), 2)));
				else {
					k55 = sqrt((pow((z28[j] - z2[i]), 2)) + (pow((z27[j] - z1[i]), 2)));
					if (k55 > max55)
						max55 = k55;
				}
			} printf("max55=%f\n", max55);
			temp55[y++] = max55;
		}

		printf("\n");
		min55 = temp55[0];
		for (i = 1; i < a; i++)
		{
			if (temp55[i] < min55)
				min55 = temp55[i];
		}
		printf("frechet distance of zone 1 wrt zone 14=%f\n", min55);
	}
	printf("\n");
	y = 0;

	if (a == 0 || v == 0)
		printf("frechet distance  of zone 1 wrt zone 15=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max56 = sqrt((pow((z30[j] - z2[i]), 2)) + (pow((z29[j] - z1[i]), 2)));
				else {
					k56 = sqrt((pow((z30[j] - z2[i]), 2)) + (pow((z29[j] - z1[i]), 2)));
					if (k56 > max56)
						max56 = k56;
				}
			} printf("max56=%f\n", max56);
			temp56[y++] = max56;
		}

		printf("\n");
		min56 = temp56[0];
		for (i = 1; i < a; i++)
		{
			if (temp56[i] < min56)
				min56 = temp56[i];
		}
		printf("frechet distance of zone 1 wrt zone 15=%f\n", min56);
	}
	printf("\n");
	y = 0;

	if (a == 0 || w == 0)
		printf("frechet distance  of zone 1 wrt zone 16=0\n");
	else
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max57 = sqrt((pow((z32[j] - z2[i]), 2)) + (pow((z31[j] - z1[i]), 2)));
				else {
					k57 = sqrt((pow((z32[j] - z2[i]), 2)) + (pow((z31[j] - z1[i]), 2)));
					if (k57 > max57)
						max57 = k57;
				}
			} printf("max57=%f\n", max57);
			temp57[y++] = max57;
		}

		printf("\n");
		min57 = temp57[0];
		for (i = 1; i < a; i++)
		{
			if (temp57[i] < min57)
				min57 = temp57[i];
		}
		printf("frechet distance of zone 1 wrt zone 16=%f\n", min57);
	}//getch();
	printf("\n");
	y = 0;
	if (b == 0 || a == 0)
		printf("frechet distance of zone 2 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < a; j++)
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
		for (i = 1; i < b; i++)
		{
			if (temp3[i] < min3)
				min3 = temp3[i];
		}
		printf("frechet distance of zone 2 wrt zone 1=%f\n", min3);
	}
	printf("\n");
	y = 0;
	if (b == 0 || c == 0)
		printf("frechet distance of zone 2 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < c; j++)
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
		for (i = 1; i < b; i++)
		{
			if (temp4[i] < min4)
				min4 = temp4[i];
		}
		printf("frechet distance of zone 2 wrt zone 3=%f\n", min4);
	}
	printf("\n");
	y = 0;
	if (b == 0 || d == 0)
		printf("frechet distance of zone 2 wrt zone 4=0 \n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < d; j++)
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
		for (i = 1; i < b; i++)
		{
			if (temp5[i] < min5)
				min5 = temp5[i];
		}
		printf("frechet distance of zone 2 wrt zone 4=%f\n", min5);
	}
	printf("\n");
	y = 0; if (b == 0 || e == 0)
		printf("frechet distance of zone 2 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
					max6 = sqrt((pow((z10[j] - z4[i]), 2)) + (pow((z9[j] - z3[i]), 2)));
				else {
					k6 = sqrt((pow((z10[j] - z4[i]), 2)) + (pow((z9[j] - z3[i]), 2)));
					if (k6 > max6)
						max6 = k6;
				}
			} printf("max6=%f\n", max6);
			temp6[y++] = max6;
		}

		printf("\n");
		min6 = temp6[0];
		for (i = 1; i < b; i++)
		{
			if (temp6[i] < min6)
				min6 = temp6[i];
		}
		printf("frechet distance of zone 2 wrt zone 5=%f\n", min6);
	}
	printf("\n");
	y = 0; if (b == 0 || g == 0)
		printf("frechet distance of zone 2 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max7 = sqrt((pow((z14[j] - z4[i]), 2)) + (pow((z13[j] - z3[i]), 2)));
				else {
					k7 = sqrt((pow((z14[j] - z4[i]), 2)) + (pow((z13[j] - z3[i]), 2)));
					if (k7 > max7)
						max7 = k7;
				}
			} printf("max7=%f\n", max7);
			temp7[y++] = max7;
		}

		printf("\n");
		min7 = temp7[0];
		for (i = 1; i < b; i++)
		{
			if (temp7[i] < min7)
				min7 = temp7[i];
		}
		printf("frechet distance of zone 2 wrt zone 7=%f\n", min7);
	}
	printf("\n");
	y = 0; if (b == 0 || f == 0)
		printf("frechet distance of zone 2 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max58 = sqrt((pow((z12[j] - z4[i]), 2)) + (pow((z11[j] - z3[i]), 2)));
				else {
					k58 = sqrt((pow((z12[j] - z4[i]), 2)) + (pow((z11[j] - z3[i]), 2)));
					if (k58 > max58)
						max58 = k58;
				}
			} printf("max58=%f\n", max58);
			temp58[y++] = max58;
		}

		printf("\n");
		min58 = temp58[0];
		for (i = 1; i < b; i++)
		{
			if (temp58[i] < min58)
				min58 = temp58[i];
		}
		printf("frechet distance of zone 2 wrt zone 6=%f\n", min58);
	}
	printf("\n");
	y = 0; if (b == 0 || h == 0)
		printf("frechet distance of zone 2 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max59 = sqrt((pow((z16[j] - z4[i]), 2)) + (pow((z15[j] - z3[i]), 2)));
				else {
					k59 = sqrt((pow((z16[j] - z4[i]), 2)) + (pow((z15[j] - z3[i]), 2)));
					if (k59 > max59)
						max59 = k59;
				}
			} printf("max59=%f\n", max59);
			temp59[y++] = max59;
		}

		printf("\n");
		min59 = temp59[0];
		for (i = 1; i < b; i++)
		{
			if (temp59[i] < min59)
				min59 = temp59[i];
		}
		printf("frechet distance of zone 2 wrt zone 8=%f\n", min59);
	}
	printf("\n");
	y = 0; if (b == 0 || k == 0)
		printf("frechet distance of zone 2 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max60 = sqrt((pow((z18[j] - z4[i]), 2)) + (pow((z17[j] - z3[i]), 2)));
				else {
					k6 = sqrt((pow((z18[j] - z4[i]), 2)) + (pow((z17[j] - z3[i]), 2)));
					if (k60 > max60)
						max60 = k60;
				}
			} printf("max60=%f\n", max60);
			temp60[y++] = max60;
		}

		printf("\n");
		min60 = temp60[0];
		for (i = 1; i < b; i++)
		{
			if (temp60[i] < min60)
				min60 = temp60[i];
		}
		printf("frechet distance of zone 2 wrt zone 9=%f\n", min60);
	}
	printf("\n");
	y = 0; if (b == 0 || l == 0)
		printf("frechet distance of zone 2 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max61 = sqrt((pow((z20[j] - z4[i]), 2)) + (pow((z19[j] - z3[i]), 2)));
				else {
					k61 = sqrt((pow((z20[j] - z4[i]), 2)) + (pow((z19[j] - z3[i]), 2)));
					if (k61 > max61)
						max61 = k61;
				}
			} printf("max61=%f\n", max61);
			temp61[y++] = max61;
		}

		printf("\n");
		min61 = temp61[0];
		for (i = 1; i < b; i++)
		{
			if (temp61[i] < min61)
				min61 = temp61[i];
		}
		printf("frechet distance of zone 2 wrt zone 10=%f\n", min61);
	}
	printf("\n");
	y = 0; if (b == 0 || m == 0)
		printf("frechet distance of zone 2 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max62 = sqrt((pow((z22[j] - z4[i]), 2)) + (pow((z21[j] - z3[i]), 2)));
				else {
					k62 = sqrt((pow((z22[j] - z4[i]), 2)) + (pow((z21[j] - z3[i]), 2)));
					if (k62 > max62)
						max62 = k62;
				}
			} printf("max62=%f\n", max62);
			temp62[y++] = max62;
		}

		printf("\n");
		min62 = temp62[0];
		for (i = 1; i < b; i++)
		{
			if (temp62[i] < min62)
				min62 = temp62[i];
		}
		printf("frechet distance of zone 2 wrt zone 11=%f\n", min62);
	}
	printf("\n");
	y = 0; if (b == 0 || o == 0)
		printf("frechet distance of zone 2 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max63 = sqrt((pow((z24[j] - z4[i]), 2)) + (pow((z23[j] - z3[i]), 2)));
				else {
					k63 = sqrt((pow((z24[j] - z4[i]), 2)) + (pow((z23[j] - z3[i]), 2)));
					if (k63 > max63)
						max63 = k63;
				}
			} printf("max63=%f\n", max63);
			temp63[y++] = max63;
		}

		printf("\n");
		min63 = temp63[0];
		for (i = 1; i < b; i++)
		{
			if (temp63[i] < min63)
				min63 = temp63[i];
		}
		printf("frechet distance of zone 2 wrt zone 12=%f\n", min63);
	}
	printf("\n");
	y = 0;
	if (b == 0 || p == 0)
		printf("frechet distance of zone 2 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max64 = sqrt((pow((z26[j] - z4[i]), 2)) + (pow((z25[j] - z3[i]), 2)));
				else {
					k64 = sqrt((pow((z26[j] - z4[i]), 2)) + (pow((z25[j] - z3[i]), 2)));
					if (k64 > max64)
						max64 = k64;
				}
			} printf("max64=%f\n", max64);
			temp64[y++] = max64;
		}

		printf("\n");
		min64 = temp64[0];
		for (i = 1; i < b; i++)
		{
			if (temp64[i] < min64)
				min64 = temp64[i];
		}
		printf("frechet distance of zone 2 wrt zone 13=%f\n", min64);
	}
	printf("\n");
	y = 0;
	if (b == 0 || q == 0)
		printf("frechet distance of zone 2 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max65 = sqrt((pow((z28[j] - z4[i]), 2)) + (pow((z27[j] - z3[i]), 2)));
				else {
					k65 = sqrt((pow((z28[j] - z4[i]), 2)) + (pow((z27[j] - z3[i]), 2)));
					if (k65 > max65)
						max65 = k65;
				}
			} printf("max65=%f\n", max65);
			temp65[y++] = max65;
		}

		printf("\n");
		min65 = temp65[0];
		for (i = 1; i < b; i++)
		{
			if (temp65[i] < min65)
				min65 = temp65[i];
		}
		printf("frechet distance of zone 2 wrt zone 14=%f\n", min65);
	}
	printf("\n");
	y = 0;
	if (b == 0 || v == 0)
		printf("frechet distance of zone 2 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max66 = sqrt((pow((z30[j] - z4[i]), 2)) + (pow((z29[j] - z3[i]), 2)));
				else {
					k66 = sqrt((pow((z30[j] - z4[i]), 2)) + (pow((z29[j] - z3[i]), 2)));
					if (k66 > max66)
						max66 = k66;
				}
			} printf("max66=%f\n", max66);
			temp66[y++] = max66;
		}

		printf("\n");
		min66 = temp66[0];
		for (i = 1; i < b; i++)
		{
			if (temp66[i] < min66)
				min66 = temp66[i];
		}
		printf("frechet distance of zone 2 wrt zone 15=%f\n", min66);
	}
	printf("\n");
	y = 0; if (b == 0 || w == 0)
		printf("frechet distance of zone 2 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max67 = sqrt((pow((z32[j] - z4[i]), 2)) + (pow((z31[j] - z3[i]), 2)));
				else {
					k67 = sqrt((pow((z32[j] - z4[i]), 2)) + (pow((z31[j] - z3[i]), 2)));
					if (k67 > max67)
						max67 = k67;
				}
			} printf("max67=%f\n", max67);
			temp67[y++] = max67;
		}

		printf("\n");
		min67 = temp67[0];
		for (i = 1; i < b; i++)
		{
			if (temp67[i] < min67)
				min67 = temp67[i];
		}
		printf("frechet distance of zone 2 wrt zone 16=%f\n", min67);
	}//getch();
	printf("\n");
	y = 0; if (e == 0 || b == 0)
		printf("frechet distance of zone 5 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max8 = sqrt((pow((z4[j] - z10[i]), 2)) + (pow((z3[j] - z9[i]), 2)));
				else {
					k8 = sqrt((pow((z4[j] - z10[i]), 2)) + (pow((z3[j] - z9[i]), 2)));
					if (k8 > max8)
						max8 = k8;
				}
			} printf("max8=%f\n", max8);
			temp8[y++] = max8;
		}

		printf("\n");
		min8 = temp8[0];
		for (i = 1; i < e; i++)
		{
			if (temp8[i] < min8)
				min8 = temp8[i];
		}
		printf("frechet distance of zone 5 wrt zone 2=%f\n", min8);
	}
	printf("\n");
	y = 0; if (e == 0 || d == 0)
		printf("frechet distance of zone 5 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max9 = sqrt((pow((z8[j] - z10[i]), 2)) + (pow((z7[j] - z9[i]), 2)));
				else {
					k9 = sqrt((pow((z8[j] - z10[i]), 2)) + (pow((z7[j] - z9[i]), 2)));
					if (k9 > max9)
						max9 = k9;
				}
			} printf("max9=%f\n", max9);
			temp9[y++] = max9;
		}
		printf("\n");
		min9 = temp9[0];
		for (i = 1; i < e; i++)
		{
			if (temp9[i] < min9)
				min9 = temp9[i];
		}
		printf("frechet distance of zone 5 wrt zone 4=%f\n", min9);
	}
	printf("\n");
	y = 0;
	if (e == 0 || g == 0)
		printf("frechet distance of zone 5 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max10 = sqrt((pow((z14[j] - z10[i]), 2)) + (pow((z13[j] - z9[i]), 2)));
				else {
					k10 = sqrt((pow((z14[j] - z10[i]), 2)) + (pow((z13[j] - z9[i]), 2)));
					if (k10 > max10)
						max10 = k10;
				}
			} printf("max10=%f\n", max10);
			temp10[y++] = max10;
		}

		printf("\n");
		min10 = temp10[0];
		for (i = 1; i < e; i++)
		{
			if (temp10[i] < min10)
				min10 = temp10[i];
		}
		printf("frechet distance of zone 5 wrt zone 7=%f\n", min10);
	}
	printf("\n");
	y = 0; if (e == 0 || f == 0)
		printf("frechet distance  of zone 5 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max240 = sqrt((pow((z12[j] - z10[i]), 2)) + (pow((z11[j] - z9[i]), 2)));
				else {
					k240 = sqrt((pow((z12[j] - z10[i]), 2)) + (pow((z12[j] - z9[i]), 2)));
					if (k240 > max240)
						max240 = k240;
				}
			} printf("max240=%f\n", max240);
			temp240[y++] = max240;
		}

		printf("\n");
		min240 = temp240[0];
		for (i = 1; i < e; i++)
		{
			if (temp240[i] < min240)
				min240 = temp240[i];
		}
		printf("frechet distance of zone 5 wrt zone 6=%f\n", min240);
	}

	printf("\n");
	y = 0; if (e == 0 || h == 0)
		printf("frechet distance of zone 5 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max11 = sqrt((pow((z16[j] - z10[i]), 2)) + (pow((z15[j] - z9[i]), 2)));
				else {
					k11 = sqrt((pow((z16[j] - z10[i]), 2)) + (pow((z15[j] - z9[i]), 2)));
					if (k11 > max11)
						max11 = k11;
				}
			} printf("max11=%f\n", max11);
			temp11[y++] = max11;
		}

		printf("\n");
		min11 = temp11[0];
		for (i = 1; i < e; i++)
		{
			if (temp11[i] < min11)
				min11 = temp11[i];
		}
		printf("frechet distance of zone 5 wrt zone 8=%f\n", min11);
	}
	printf("\n");
	y = 0; if (e == 0 || a == 0)
		printf("frechet distance  of zone 5 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max68 = sqrt((pow((z2[j] - z10[i]), 2)) + (pow((z1[j] - z9[i]), 2)));
				else {
					k68 = sqrt((pow((z2[j] - z10[i]), 2)) + (pow((z1[j] - z9[i]), 2)));
					if (k68 > max68)
						max68 = k68;
				}
			} printf("max68=%f\n", max68);
			temp68[y++] = max68;
		}

		printf("\n");
		min68 = temp68[0];
		for (i = 1; i < e; i++)
		{
			if (temp68[i] < min68)
				min68 = temp68[i];
		}
		printf("frechet distance of zone 5 wrt zone 1=%f\n", min68);
	}
	printf("\n");
	y = 0; if (e == 0 || c == 0)
		printf("frechet distance  of zone 5 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max69 = sqrt((pow((z6[j] - z10[i]), 2)) + (pow((z5[j] - z9[i]), 2)));
				else {
					k69 = sqrt((pow((z6[j] - z10[i]), 2)) + (pow((z5[j] - z9[i]), 2)));
					if (k69 > max69)
						max69 = k69;
				}
			} printf("max69=%f\n", max69);
			temp69[y++] = max69;
		}

		printf("\n");
		min69 = temp69[0];
		for (i = 1; i < e; i++)
		{
			if (temp69[i] < min69)
				min69 = temp69[i];
		}
		printf("frechet distance of zone 5 wrt zone 3=%f\n", min69);
	}
	printf("\n");
	y = 0; if (e == 0 || k == 0)
		printf("frechet distance  of zone 5 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max70 = sqrt((pow((z18[j] - z10[i]), 2)) + (pow((z17[j] - z9[i]), 2)));
				else {
					k70 = sqrt((pow((z18[j] - z10[i]), 2)) + (pow((z17[j] - z9[i]), 2)));
					if (k70 > max70)
						max70 = k70;
				}
			} printf("max70=%f\n", max70);
			temp70[y++] = max70;
		}

		printf("\n");
		min70 = temp70[0];
		for (i = 1; i < e; i++)
		{
			if (temp70[i] < min70)
				min70 = temp70[i];
		}
		printf("frechet distance of zone 5 wrt zone 9=%f\n", min70);
	}
	printf("\n");
	y = 0; if (e == 0 || l == 0)
		printf("frechet distance  of zone 5 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max71 = sqrt((pow((z20[j] - z10[i]), 2)) + (pow((z19[j] - z9[i]), 2)));
				else {
					k71 = sqrt((pow((z20[j] - z10[i]), 2)) + (pow((z19[j] - z9[i]), 2)));
					if (k71 > max71)
						max71 = k71;
				}
			} printf("max71=%f\n", max71);
			temp71[y++] = max71;
		}

		printf("\n");
		min71 = temp71[0];
		for (i = 1; i < e; i++)
		{
			if (temp71[i] < min71)
				min71 = temp71[i];
		}
		printf("frechet distance of zone 5 wrt zone 10=%f\n", min71);
	}
	printf("\n");
	y = 0; if (e == 0 || m == 0)
		printf("frechet distance  of zone 5 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max72 = sqrt((pow((z22[j] - z10[i]), 2)) + (pow((z21[j] - z9[i]), 2)));
				else {
					k72 = sqrt((pow((z22[j] - z10[i]), 2)) + (pow((z21[j] - z9[i]), 2)));
					if (k72 > max72)
						max72 = k72;
				}
			} printf("max72=%f\n", max72);
			temp72[y++] = max72;
		}

		printf("\n");
		min72 = temp72[0];
		for (i = 1; i < e; i++)
		{
			if (temp72[i] < min72)
				min72 = temp72[i];
		}
		printf("frechet distance of zone 5 wrt zone 11=%f\n", min72);
	}
	printf("\n");
	y = 0; if (e == 0 || o == 0)
		printf("frechet distance  of zone 5 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max73 = sqrt((pow((z24[j] - z10[i]), 2)) + (pow((z23[j] - z9[i]), 2)));
				else {
					k73 = sqrt((pow((z24[j] - z10[i]), 2)) + (pow((z23[j] - z9[i]), 2)));
					if (k73 > max73)
						max73 = k73;
				}
			} printf("max73=%f\n", max73);
			temp73[y++] = max73;
		}

		printf("\n");
		min73 = temp73[0];
		for (i = 1; i < e; i++)
		{
			if (temp73[i] < min73)
				min73 = temp73[i];
		}
		printf("frechet distance of zone 5 wrt zone 12=%f\n", min73);
	}
	printf("\n");
	y = 0; if (e == 0 || p == 0)
		printf("frechet distance  of zone 5 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max74 = sqrt((pow((z26[j] - z10[i]), 2)) + (pow((z25[j] - z9[i]), 2)));
				else {
					k74 = sqrt((pow((z26[j] - z10[i]), 2)) + (pow((z25[j] - z9[i]), 2)));
					if (k74 > max74)
						max74 = k74;
				}
			} printf("max74=%f\n", max74);
			temp74[y++] = max74;
		}

		printf("\n");
		min74 = temp74[0];
		for (i = 1; i < e; i++)
		{
			if (temp74[i] < min74)
				min74 = temp74[i];
		}
		printf("frechet distance of zone 5 wrt zone 13=%f\n", min74);
	}
	printf("\n");
	y = 0; if (e == 0 || q == 0)
		printf("frechet distance  of zone 5 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max75 = sqrt((pow((z28[j] - z10[i]), 2)) + (pow((z27[j] - z9[i]), 2)));
				else {
					k75 = sqrt((pow((z28[j] - z10[i]), 2)) + (pow((z27[j] - z9[i]), 2)));
					if (k75 > max75)
						max75 = k75;
				}
			} printf("max75=%f\n", max75);
			temp75[y++] = max75;
		}

		printf("\n");
		min75 = temp75[0];
		for (i = 1; i < e; i++)
		{
			if (temp75[i] < min75)
				min75 = temp75[i];
		}
		printf("frechet distance of zone 5 wrt zone 14=%f\n", min75);
	}
	printf("\n");
	y = 0; if (e == 0 || v == 0)
		printf("frechet distance  of zone 5 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max76 = sqrt((pow((z30[j] - z10[i]), 2)) + (pow((z29[j] - z9[i]), 2)));
				else {
					k76 = sqrt((pow((z30[j] - z10[i]), 2)) + (pow((z29[j] - z9[i]), 2)));
					if (k76 > max76)
						max76 = k76;
				}
			} printf("max76=%f\n", max76);
			temp76[y++] = max76;
		}

		printf("\n");
		min76 = temp76[0];
		for (i = 1; i < e; i++)
		{
			if (temp76[i] < min76)
				min76 = temp76[i];
		}
		printf("frechet distance of zone 5 wrt zone 15=%f\n", min76);
	}
	printf("\n");
	y = 0; if (e == 0 || w == 0)
		printf("frechet distance  of zone 5 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < e; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max77 = sqrt((pow((z32[j] - z10[i]), 2)) + (pow((z31[j] - z9[i]), 2)));
				else {
					k77 = sqrt((pow((z32[j] - z10[i]), 2)) + (pow((z31[j] - z9[i]), 2)));
					if (k77 > max77)
						max77 = k77;
				}
			} printf("max77=%f\n", max77);
			temp77[y++] = max77;
		}

		printf("\n");
		min77 = temp77[0];
		for (i = 1; i < e; i++)
		{
			if (temp77[i] < min77)
				min77 = temp77[i];
		}
		printf("frechet distance of zone 5 wrt zone 16=%f\n", min77);
	}//getch();

	printf("\n");
	y = 0; if (f == 0 || e == 0)
		printf("frechet distance of zone 6 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
					max12 = sqrt((pow((z10[j] - z12[i]), 2)) + (pow((z9[j] - z11[i]), 2)));
				else {
					k12 = sqrt((pow((z10[j] - z12[i]), 2)) + (pow((z9[j] - z11[i]), 2)));
					if (k12 > max12)
						max12 = k12;
				}
			} printf("max12=%f\n", max12);
			temp12[y++] = max12;
		}

		printf("\n");
		min12 = temp12[0];
		for (i = 1; i < f; i++)
		{
			if (temp12[i] < min12)
				min12 = temp12[i];
		}
		printf("frechet distance of zone 6 wrt zone 5=%f\n", min12);
	}

	printf("\n");
	y = 0; if (f == 0 || g == 0)
		printf("frechet distance of zone 6 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max13 = sqrt((pow((z14[j] - z12[i]), 2)) + (pow((z13[j] - z11[i]), 2)));
				else {
					k13 = sqrt((pow((z14[j] - z12[i]), 2)) + (pow((z13[j] - z11[i]), 2)));
					if (k13 > max13)
						max13 = k13;
				}
			} printf("max13=%f\n", max13);
			temp13[y++] = max13;
		}

		printf("\n");
		min13 = temp13[0];
		for (i = 1; i < f; i++)
		{
			if (temp13[i] < min13)
				min13 = temp13[i];
		}
		printf("frechet distance of zone 6 wrt zone 7=%f\n", min13);
	}

	printf("\n");
	y = 0; if (f == 0 || h == 0)
		printf("frechet distance of zone 6 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max14 = sqrt((pow((z16[j] - z12[i]), 2)) + (pow((z15[j] - z11[i]), 2)));
				else {
					k14 = sqrt((pow((z16[j] - z12[i]), 2)) + (pow((z15[j] - z11[i]), 2)));
					if (k14 > max14)
						max14 = k14;
				}
			} printf("max14=%f\n", max14);
			temp14[y++] = max14;
		}

		printf("\n");
		min14 = temp14[0];
		for (i = 1; i < f; i++)
		{
			if (temp14[i] < min14)
				min14 = temp14[i];
		}
		printf("frechet distance of zone 6 wrt zone 8=%f\n", min14);
	}
	printf("\n");
	y = 0; if (f == 0 || a == 0)
		printf("frechet distance of zone 6 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max78 = sqrt((pow((z2[j] - z12[i]), 2)) + (pow((z1[j] - z11[i]), 2)));
				else {
					k78 = sqrt((pow((z2[j] - z12[i]), 2)) + (pow((z1[j] - z11[i]), 2)));
					if (k78 > max78)
						max78 = k78;
				}
			} printf("max78=%f\n", max78);
			temp78[y++] = max78;
		}

		printf("\n");
		min78 = temp78[0];
		for (i = 1; i < f; i++)
		{
			if (temp78[i] < min78)
				min78 = temp78[i];
		}
		printf("frechet distance of zone 6 wrt zone 1=%f\n", min78);
	}
	printf("\n");
	y = 0; if (f == 0 || b == 0)
		printf("frechet distance of zone 6 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max79 = sqrt((pow((z4[j] - z12[i]), 2)) + (pow((z3[j] - z11[i]), 2)));
				else {
					k79 = sqrt((pow((z4[j] - z12[i]), 2)) + (pow((z3[j] - z11[i]), 2)));
					if (k79 > max79)
						max79 = k79;
				}
			} printf("max79=%f\n", max79);
			temp79[y++] = max79;
		}

		printf("\n");
		min79 = temp79[0];
		for (i = 1; i < f; i++)
		{
			if (temp79[i] < min79)
				min79 = temp79[i];
		}
		printf("frechet distance of zone 6 wrt zone 2=%f\n", min79);
	}
	printf("\n");
	y = 0; if (f == 0 || c == 0)
		printf("frechet distance of zone 6 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max80 = sqrt((pow((z6[j] - z12[i]), 2)) + (pow((z5[j] - z11[i]), 2)));
				else {
					k80 = sqrt((pow((z6[j] - z12[i]), 2)) + (pow((z5[j] - z11[i]), 2)));
					if (k80 > max80)
						max80 = k80;
				}
			} printf("max80=%f\n", max80);
			temp80[y++] = max80;
		}

		printf("\n");
		min80 = temp80[0];
		for (i = 1; i < f; i++)
		{
			if (temp80[i] < min80)
				min80 = temp80[i];
		}
		printf("frechet distance of zone 6 wrt zone 3=%f\n", min80);
	}
	printf("\n");
	y = 0; if (f == 0 || d == 0)
		printf("frechet distance of zone 6 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max81 = sqrt((pow((z8[j] - z12[i]), 2)) + (pow((z7[j] - z11[i]), 2)));
				else {
					k81 = sqrt((pow((z8[j] - z12[i]), 2)) + (pow((z7[j] - z11[i]), 2)));
					if (k81 > max81)
						max81 = k81;
				}
			} printf("max81=%f\n", max81);
			temp81[y++] = max81;
		}

		printf("\n");
		min81 = temp81[0];
		for (i = 1; i < f; i++)
		{
			if (temp81[i] < min81)
				min81 = temp81[i];
		}
		printf("frechet distance of zone 6 wrt zone 4=%f\n", min81);
	}
	printf("\n");
	y = 0; if (f == 0 || k == 0)
		printf("frechet distance of zone 6 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max82 = sqrt((pow((z18[j] - z12[i]), 2)) + (pow((z17[j] - z11[i]), 2)));
				else {
					k82 = sqrt((pow((z18[j] - z12[i]), 2)) + (pow((z17[j] - z11[i]), 2)));
					if (k82 > max82)
						max82 = k82;
				}
			} printf("max82=%f\n", max82);
			temp82[y++] = max82;
		}

		printf("\n");
		min82 = temp82[0];
		for (i = 1; i < f; i++)
		{
			if (temp82[i] < min82)
				min82 = temp82[i];
		}
		printf("frechet distance of zone 6 wrt zone 9=%f\n", min82);
	}
	printf("\n");
	y = 0; if (f == 0 || l == 0)
		printf("frechet distance of zone 6 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max83 = sqrt((pow((z20[j] - z12[i]), 2)) + (pow((z19[j] - z11[i]), 2)));
				else {
					k83 = sqrt((pow((z20[j] - z12[i]), 2)) + (pow((z19[j] - z11[i]), 2)));
					if (k83 > max83)
						max83 = k83;
				}
			} printf("max83=%f\n", max83);
			temp83[y++] = max83;
		}

		printf("\n");
		min83 = temp83[0];
		for (i = 1; i < f; i++)
		{
			if (temp83[i] < min83)
				min83 = temp83[i];
		}
		printf("frechet distance of zone 6 wrt zone 10=%f\n", min83);
	}
	printf("\n");
	y = 0; if (f == 0 || m == 0)
		printf("frechet distance of zone 6 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max84 = sqrt((pow((z22[j] - z12[i]), 2)) + (pow((z21[j] - z11[i]), 2)));
				else {
					k84 = sqrt((pow((z22[j] - z12[i]), 2)) + (pow((z21[j] - z11[i]), 2)));
					if (k84 > max84)
						max84 = k84;
				}
			} printf("max84=%f\n", max84);
			temp84[y++] = max84;
		}

		printf("\n");
		min84 = temp84[0];
		for (i = 1; i < f; i++)
		{
			if (temp84[i] < min84)
				min84 = temp84[i];
		}
		printf("frechet distance of zone 6 wrt zone 11=%f\n", min84);
	}
	printf("\n");
	y = 0; if (f == 0 || o == 0)
		printf("frechet distance of zone 6 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max85 = sqrt((pow((z24[j] - z12[i]), 2)) + (pow((z23[j] - z11[i]), 2)));
				else {
					k85 = sqrt((pow((z24[j] - z12[i]), 2)) + (pow((z23[j] - z11[i]), 2)));
					if (k85 > max85)
						max85 = k85;
				}
			} printf("max85=%f\n", max85);
			temp85[y++] = max85;
		}

		printf("\n");
		min85 = temp85[0];
		for (i = 1; i < f; i++)
		{
			if (temp85[i] < min85)
				min85 = temp85[i];
		}
		printf("frechet distance of zone 6 wrt zone 12=%f\n", min85);
	}
	printf("\n");
	y = 0;
	if (f == 0 || p == 0)
		printf("frechet distance of zone 6 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max86 = sqrt((pow((z26[j] - z12[i]), 2)) + (pow((z25[j] - z11[i]), 2)));
				else {
					k86 = sqrt((pow((z26[j] - z12[i]), 2)) + (pow((z25[j] - z11[i]), 2)));
					if (k86 > max86)
						max86 = k86;
				}
			} printf("max86=%f\n", max86);
			temp86[y++] = max86;
		}

		printf("\n");
		min86 = temp86[0];
		for (i = 1; i < f; i++)
		{
			if (temp86[i] < min86)
				min86 = temp86[i];
		}
		printf("frechet distance of zone 6 wrt zone 13=%f\n", min86);
	}
	printf("\n");
	y = 0; if (f == 0 || q == 0)
		printf("frechet distance of zone 6 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max87 = sqrt((pow((z28[j] - z12[i]), 2)) + (pow((z27[j] - z11[i]), 2)));
				else {
					k87 = sqrt((pow((z28[j] - z12[i]), 2)) + (pow((z27[j] - z11[i]), 2)));
					if (k87 > max87)
						max87 = k87;
				}
			} printf("max87=%f\n", max87);
			temp87[y++] = max87;
		}

		printf("\n");
		min87 = temp87[0];
		for (i = 1; i < f; i++)
		{
			if (temp87[i] < min87)
				min87 = temp87[i];
		}
		printf("frechet distance of zone 6 wrt zone 14=%f\n", min87);
	}
	printf("\n");
	y = 0; if (f == 0 || v == 0)
		printf("frechet distance of zone 6 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max88 = sqrt((pow((z30[j] - z12[i]), 2)) + (pow((z29[j] - z11[i]), 2)));
				else {
					k88 = sqrt((pow((z30[j] - z12[i]), 2)) + (pow((z29[j] - z11[i]), 2)));
					if (k88 > max88)
						max88 = k88;
				}
			} printf("max88=%f\n", max88);
			temp88[y++] = max88;
		}

		printf("\n");
		min88 = temp88[0];
		for (i = 1; i < f; i++)
		{
			if (temp88[i] < min88)
				min88 = temp88[i];
		}
		printf("frechet distance of zone 6 wrt zone 15=%f\n", min88);
	}
	printf("\n");
	y = 0; if (f == 0 || w == 0)
		printf("frechet distance of zone 6 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < f; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max89 = sqrt((pow((z32[j] - z12[i]), 2)) + (pow((z31[j] - z11[i]), 2)));
				else {
					k89 = sqrt((pow((z32[j] - z12[i]), 2)) + (pow((z31[j] - z11[i]), 2)));
					if (k89 > max89)
						max89 = k89;
				}
			} printf("max89=%f\n", max89);
			temp89[y++] = max89;
		}

		printf("\n");
		min89 = temp89[0];
		for (i = 1; i < f; i++)
		{
			if (temp89[i] < min89)
				min89 = temp89[i];
		}
		printf("frechet distance of zone 6 wrt zone 16=%f\n", min89);
	}//getch();

	printf("\n");
	y = 0; if (c == 0 || a == 0)
		printf("frechet distance of zone 3 wrt zone 1==0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max15 = sqrt((pow((z2[j] - z6[i]), 2)) + (pow((z1[j] - z5[i]), 2)));
				else {
					k15 = sqrt((pow((z2[j] - z6[i]), 2)) + (pow((z1[j] - z5[i]), 2)));
					if (k15 > max15)
						max15 = k15;
				}
			} printf("max15=%f\n", max15);
			temp15[y++] = max15;
		}

		printf("\n");
		min15 = temp15[0];
		for (i = 1; i < c; i++)
		{
			if (temp15[i] < min15)
				min15 = temp15[i];
		}
		printf("frechet distance of zone 3 wrt zone 1=%f\n", min15);
	}

	printf("\n");
	y = 0; if (c == 0 || b == 0)
		printf("frechet distance of zone 3 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max16 = sqrt((pow((z4[j] - z6[i]), 2)) + (pow((z3[j] - z5[i]), 2)));
				else {
					k16 = sqrt((pow((z4[j] - z6[i]), 2)) + (pow((z3[j] - z5[i]), 2)));
					if (k16 > max16)
						max16 = k16;
				}
			} printf("max16=%f\n", max16);
			temp16[y++] = max16;
		}

		printf("\n");
		min16 = temp16[0];
		for (i = 1; i < c; i++)
		{
			if (temp16[i] < min16)
				min16 = temp16[i];
		}
		printf("frechet distance of zone 3 wrt zone 2=%f\n", min16);
	}

	printf("\n");
	y = 0; if (c == 0 || d == 0)
		printf("frechet distance of zone 3 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max17 = sqrt((pow((z8[j] - z6[i]), 2)) + (pow((z7[j] - z5[i]), 2)));
				else {
					k17 = sqrt((pow((z8[j] - z6[i]), 2)) + (pow((z7[j] - z5[i]), 2)));
					if (k17 > max17)
						max17 = k17;
				}
			} printf("max17=%f\n", max17);
			temp17[y++] = max17;
		}

		printf("\n");
		min17 = temp17[0];
		for (i = 1; i < c; i++)
		{
			if (temp17[i] < min17)
				min17 = temp17[i];
		}
		printf("frechet distance of zone 3 wrt zone 4=%f\n", min17);
	}

	printf("\n");
	y = 0; if (c == 0 || k == 0)
		printf("frechet distance of zone 3 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max18 = sqrt((pow((z18[j] - z6[i]), 2)) + (pow((z17[j] - z5[i]), 2)));
				else {
					k18 = sqrt((pow((z18[j] - z6[i]), 2)) + (pow((z17[j] - z5[i]), 2)));
					if (k18 > max18)
						max18 = k18;
				}
			} printf("max18=%f\n", max18);
			temp18[y++] = max18;
		}

		printf("\n");
		min18 = temp18[0];
		for (i = 1; i < c; i++)
		{
			if (temp18[i] < min18)
				min18 = temp18[i];
		}
		printf("frechet distance of zone 3 wrt zone 9=%f\n", min18);
	}
	printf("\n");
	y = 0; if (c == 0 || l == 0)
		printf("frechet distance of zone 3 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max19 = sqrt((pow((z20[j] - z6[i]), 2)) + (pow((z19[j] - z5[i]), 2)));
				else {
					k19 = sqrt((pow((z20[j] - z6[i]), 2)) + (pow((z19[j] - z5[i]), 2)));
					if (k19 > max19)
						max19 = k19;
				}
			} printf("max18=%f\n", max18);
			temp19[y++] = max19;
		}

		printf("\n");
		min19 = temp19[0];
		for (i = 1; i < c; i++)
		{
			if (temp19[i] < min19)
				min19 = temp19[i];
		}
		printf("frechet distance of zone 3 wrt zone 10=%f\n", min19);
	}
	printf("\n");
	y = 0; if (c == 0 || e == 0)
		printf("frechet distance of zone 3 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
					max90 = sqrt((pow((z10[j] - z6[i]), 2)) + (pow((z9[j] - z5[i]), 2)));
				else {
					k90 = sqrt((pow((z10[j] - z6[i]), 2)) + (pow((z9[j] - z5[i]), 2)));
					if (k90 > max90)
						max90 = k90;
				}
			} printf("max90=%f\n", max90);
			temp90[y++] = max90;
		}

		printf("\n");
		min90 = temp90[0];
		for (i = 1; i < c; i++)
		{
			if (temp90[i] < min90)
				min90 = temp90[i];
		}
		printf("frechet distance of zone 3 wrt zone 5=%f\n", min90);
	}
	printf("\n");
	y = 0; if (c == 0 || f == 0)
		printf("frechet distance of zone 3 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max91 = sqrt((pow((z12[j] - z6[i]), 2)) + (pow((z11[j] - z5[i]), 2)));
				else {
					k91 = sqrt((pow((z12[j] - z6[i]), 2)) + (pow((z11[j] - z5[i]), 2)));
					if (k91 > max91)
						max91 = k91;
				}
			} printf("max91=%f\n", max91);
			temp91[y++] = max91;
		}

		printf("\n");
		min91 = temp91[0];
		for (i = 1; i < c; i++)
		{
			if (temp91[i] < min91)
				min91 = temp91[i];
		}
		printf("frechet distance of zone 3 wrt zone 6=%f\n", min91);
	}
	printf("\n");
	y = 0;

	if (c == 0 || g == 0)
		printf("frechet distance of zone 3 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max92 = sqrt((pow((z14[j] - z6[i]), 2)) + (pow((z13[j] - z5[i]), 2)));
				else {
					k92 = sqrt((pow((z14[j] - z6[i]), 2)) + (pow((z13[j] - z5[i]), 2)));
					if (k92 > max92)
						max92 = k92;
				}
			} printf("max92=%f\n", max92);
			temp92[y++] = max92;
		}

		printf("\n");
		min92 = temp92[0];
		for (i = 1; i < c; i++)
		{
			if (temp92[i] < min92)
				min92 = temp92[i];
		}
		printf("frechet distance of zone 3 wrt zone 7=%f\n", min92);
	}
	printf("\n");
	y = 0; if (c == 0 || h == 0)
		printf("frechet distance of zone 3 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max93 = sqrt((pow((z16[j] - z6[i]), 2)) + (pow((z15[j] - z5[i]), 2)));
				else {
					k93 = sqrt((pow((z16[j] - z6[i]), 2)) + (pow((z15[j] - z5[i]), 2)));
					if (k93 > max93)
						max93 = k93;
				}
			} printf("max93=%f\n", max93);
			temp93[y++] = max93;
		}

		printf("\n");
		min93 = temp93[0];
		for (i = 1; i < c; i++)
		{
			if (temp93[i] < min93)
				min93 = temp93[i];
		}
		printf("frechet distance of zone 3 wrt zone 8=%f\n", min93);
	}
	printf("\n");
	y = 0; if (c == 0 || m == 0)
		printf("frechet distance of zone 3 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max94 = sqrt((pow((z22[j] - z6[i]), 2)) + (pow((z21[j] - z5[i]), 2)));
				else {
					k94 = sqrt((pow((z22[j] - z6[i]), 2)) + (pow((z21[j] - z5[i]), 2)));
					if (k94 > max94)
						max94 = k94;
				}
			} printf("max94=%f\n", max94);
			temp94[y++] = max94;
		}

		printf("\n");
		min94 = temp94[0];
		for (i = 1; i < c; i++)
		{
			if (temp94[i] < min94)
				min94 = temp94[i];
		}
		printf("frechet distance of zone 3 wrt zone 11=%f\n", min94);
	}
	printf("\n");
	y = 0; if (c == 0 || o == 0)
		printf("frechet distance of zone 3 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max95 = sqrt((pow((z24[j] - z6[i]), 2)) + (pow((z23[j] - z5[i]), 2)));
				else {
					k95 = sqrt((pow((z24[j] - z6[i]), 2)) + (pow((z23[j] - z5[i]), 2)));
					if (k95 > max95)
						max95 = k95;
				}
			} printf("max95=%f\n", max95);
			temp95[y++] = max95;
		}

		printf("\n");
		min95 = temp95[0];
		for (i = 1; i < c; i++)
		{
			if (temp95[i] < min95)
				min95 = temp95[i];
		}
		printf("frechet distance of zone 3 wrt zone 12=%f\n", min95);
	}
	printf("\n");
	y = 0; if (c == 0 || p == 0)
		printf("frechet distance of zone 3 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max96 = sqrt((pow((z26[j] - z6[i]), 2)) + (pow((z25[j] - z5[i]), 2)));
				else {
					k96 = sqrt((pow((z26[j] - z6[i]), 2)) + (pow((z25[j] - z5[i]), 2)));
					if (k96 > max96)
						max96 = k96;
				}
			} printf("max96=%f\n", max96);
			temp96[y++] = max96;
		}

		printf("\n");
		min96 = temp96[0];
		for (i = 1; i < c; i++)

		{

			if (temp96[i] < min96)
				min96 = temp96[i];
		}
		printf("frechet distance of zone 3 wrt zone 13=%f\n", min96);
	}
	printf("\n");

	y = 0; if (c == 0 || q == 0)
		printf("frechet distance of zone 3 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max97 = sqrt((pow((z28[j] - z6[i]), 2)) + (pow((z27[j] - z5[i]), 2)));
				else {
					k97 = sqrt((pow((z28[j] - z6[i]), 2)) + (pow((z27[j] - z5[i]), 2)));
					if (k97 > max97)
						max97 = k97;
				}
			} printf("max97=%f\n", max97);
			temp97[y++] = max97;
		}

		printf("\n");
		min97 = temp97[0];
		for (i = 1; i < c; i++)
		{
			if (temp97[i] < min97)
				min97 = temp97[i];
		}
		printf("frechet distance of zone 3 wrt zone 14=%f\n", min97);
	}
	printf("\n");
	y = 0; if (c == 0 || v == 0)
		printf("frechet distance of zone 3 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max98 = sqrt((pow((z30[j] - z6[i]), 2)) + (pow((z29[j] - z5[i]), 2)));
				else {
					k98 = sqrt((pow((z30[j] - z6[i]), 2)) + (pow((z29[j] - z5[i]), 2)));
					if (k98 > max98)
						max98 = k98;
				}
			} printf("max98=%f\n", max98);
			temp98[y++] = max98;
		}

		printf("\n");
		min98 = temp98[0];
		for (i = 1; i < c; i++)
		{
			if (temp98[i] < min98)
				min98 = temp98[i];
		}
		printf("frechet distance of zone 3 wrt zone 15=%f\n", min98);
	}
	printf("\n");
	y = 0; if (c == 0 || w == 0)
		printf("frechet distance of zone 3 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < c; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max99 = sqrt((pow((z32[j] - z6[i]), 2)) + (pow((z31[j] - z5[i]), 2)));
				else {
					k99 = sqrt((pow((z32[j] - z6[i]), 2)) + (pow((z31[j] - z5[i]), 2)));
					if (k99 > max99)
						max99 = k99;
				}
			} printf("max99=%f\n", max99);
			temp99[y++] = max99;
		}

		printf("\n");
		min99 = temp99[0];
		for (i = 1; i < c; i++)
		{
			if (temp99[i] < min99)
				min99 = temp99[i];
		}
		printf("frechet distance of zone 3 wrt zone 16=%f\n", min99);
	}//getch();

	printf("\n");
	y = 0; if (d == 0 || a == 0)

		printf("frechet distance  of zone 4 wrt zone 1=0");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max20 = sqrt((pow((z2[j] - z8[i]), 2)) + (pow((z1[j] - z7[i]), 2)));
				else {
					k20 = sqrt((pow((z2[j] - z8[i]), 2)) + (pow((z1[j] - z7[i]), 2)));
					if (k20 > max20)
						max20 = k20;
				}
			} printf("max20=%f\n", max20);
			temp20[y++] = max20;
		}

		printf("\n");
		min20 = temp20[0];
		for (i = 1; i < d; i++)
		{
			if (temp20[i] < min20)
				min20 = temp20[i];
		}
		printf("frechet distance of zone 4 wrt zone 1=%f\n", min20);
	}
	printf("\n");
	printf("\n");
	y = 0; if (d == 0 || b == 0)
		printf("frechet distance of zone 4 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max21 = sqrt((pow((z4[j] - z8[i]), 2)) + (pow((z3[j] - z7[i]), 2)));
				else {
					k21 = sqrt((pow((z4[j] - z8[i]), 2)) + (pow((z3[j] - z7[i]), 2)));
					if (k21 > max21)
						max21 = k21;
				}
			} printf("max21=%f\n", max21);
			temp21[y++] = max21;
		}

		printf("\n");
		min21 = temp21[0];
		for (i = 1; i < d; i++)
		{
			if (temp21[i] < min21)
				min21 = temp21[i];
		}
		printf("frechet distance of zone 4 wrt zone 2=%f\n", min21);
	}
	printf("\n");
	y = 0; if (d == 0 || c == 0)
		printf("frechet distance of zone 4 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max22 = sqrt((pow((z6[j] - z8[i]), 2)) + (pow((z5[j] - z7[i]), 2)));
				else {
					k22 = sqrt((pow((z6[j] - z8[i]), 2)) + (pow((z5[j] - z7[i]), 2)));
					if (k22 > max22)
						max22 = k22;
				}
			} printf("max20=%f\n", max20);
			temp22[y++] = max22;
		}

		printf("\n");
		min22 = temp22[0];
		for (i = 1; i < d; i++)
		{
			if (temp22[i] < min22)
				min22 = temp22[i];
		}
		printf("frechet distance of zone 4 wrt zone 3=%f\n", min22);
	}
	printf("\n");
	y = 0; if (d == 0 || e == 0)
		printf("frechet distance of zone 4 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
					max23 = sqrt((pow((z10[j] - z8[i]), 2)) + (pow((z9[j] - z7[i]), 2)));
				else {
					k23 = sqrt((pow((z10[j] - z8[i]), 2)) + (pow((z9[j] - z7[i]), 2)));
					if (k23 > max23)
						max23 = k23;
				}
			} printf("max23=%f\n", max23);
			temp23[y++] = max23;
		}

		printf("\n");
		min23 = temp23[0];
		for (i = 1; i < d; i++)
		{
			if (temp23[i] < min23)
				min23 = temp23[i];
		}
		printf("frechet distance of zone 4 wrt zone 5=%f\n", min23);
	}
	printf("\n");
	y = 0; if (d == 0 || g == 0)
		printf("frechet distance of zone 4 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max24 = sqrt((pow((z14[j] - z8[i]), 2)) + (pow((z13[j] - z7[i]), 2)));
				else {
					k24 = sqrt((pow((z14[j] - z8[i]), 2)) + (pow((z13[j] - z7[i]), 2)));
					if (k24 > max24)
						max24 = k24;
				}
			} printf("max24=%f\n", max24);
			temp24[y++] = max24;
		}

		printf("\n");
		min24 = temp24[0];
		for (i = 1; i < d; i++)
		{
			if (temp24[i] < min24)
				min24 = temp24[i];
		}
		printf("frechet distance of zone 4 wrt zone 7=%f\n", min24);
	}
	printf("\n");
	y = 0; if (d == 0 || k == 0)
		printf("frechet distance of zone 4 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max25 = sqrt((pow((z18[j] - z8[i]), 2)) + (pow((z17[j] - z7[i]), 2)));
				else {
					k25 = sqrt((pow((z18[j] - z8[i]), 2)) + (pow((z17[j] - z7[i]), 2)));
					if (k25 > max25)
						max25 = k25;
				}
			} printf("max25=%f\n", max25);
			temp25[y++] = max25;
		}

		printf("\n");
		min25 = temp25[0];
		for (i = 1; i < d; i++)
		{
			if (temp25[i] < min25)
				min25 = temp25[i];
		}
		printf("frechet distance of zone 4 wrt zone 9=%f\n", min25);
	}
	printf("\n");
	y = 0; if (d == 0 || l == 0)
		printf("frechet distance of zone 4 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max26 = sqrt((pow((z20[j] - z8[i]), 2)) + (pow((z19[j] - z7[i]), 2)));
				else {
					k26 = sqrt((pow((z20[j] - z8[i]), 2)) + (pow((z19[j] - z7[i]), 2)));
					if (k26 > max26)
						max26 = k26;
				}
			} printf("max26=%f\n", max26);
			temp26[y++] = max26;
		}

		printf("\n");
		min26 = temp26[0];
		for (i = 1; i < d; i++)
		{
			if (temp26[i] < min26)
				min26 = temp26[i];
		}
		printf("frechet distance of zone 4 wrt zone 10=%f\n", min26);
	}
	printf("\n");
	y = 0; if (d == 0 || p == 0)
		printf("frechet distance of zone 4 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max27 = sqrt((pow((z26[j] - z8[i]), 2)) + (pow((z25[j] - z7[i]), 2)));
				else {
					k27 = sqrt((pow((z26[j] - z8[i]), 2)) + (pow((z25[j] - z7[i]), 2)));
					if (k27 > max27)
						max27 = k27;
				}
			} printf("max27=%f\n", max27);
			temp27[y++] = max27;
		}

		printf("\n");
		min27 = temp27[0];
		for (i = 1; i < d; i++)
		{
			if (temp27[i] < min27)
				min27 = temp27[i];
		}
		printf("frechet distance of zone 4 wrt zone 13=%f\n", min27);
	}
	printf("\n");
	y = 0; if (d == 0 || f == 0)
		printf("frechet distance of zone 4 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max100 = sqrt((pow((z12[j] - z8[i]), 2)) + (pow((z11[j] - z7[i]), 2)));
				else {
					k100 = sqrt((pow((z12[j] - z8[i]), 2)) + (pow((z11[j] - z7[i]), 2)));
					if (k100 > max100)
						max100 = k100;
				}
			} printf("max100=%f\n", max100);
			temp100[y++] = max100;
		}

		printf("\n");
		min100 = temp100[0];
		for (i = 1; i < d; i++)
		{
			if (temp100[i] < min100)
				min100 = temp100[i];
		}
		printf("frechet distance of zone 4 wrt zone 6=%f\n", min100);
	}
	printf("\n");
	y = 0; if (d == 0 || h == 0)
		printf("frechet distance of zone 4 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max101 = sqrt((pow((z16[j] - z8[i]), 2)) + (pow((z15[j] - z7[i]), 2)));
				else {
					k101 = sqrt((pow((z16[j] - z8[i]), 2)) + (pow((z15[j] - z7[i]), 2)));
					if (k101 > max101)
						max101 = k101;
				}
			} printf("max101=%f\n", max101);
			temp101[y++] = max101;
		}

		printf("\n");
		min101 = temp101[0];
		for (i = 1; i < d; i++)
		{
			if (temp101[i] < min101)
				min101 = temp101[i];
		}
		printf("frechet distance of zone 4 wrt zone 8=%f\n", min101);
	}
	printf("\n");
	y = 0;

	if (d == 0 || q == 0)
		printf("frechet distance of zone 4 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max102 = sqrt((pow((z28[j] - z8[i]), 2)) + (pow((z27[j] - z7[i]), 2)));
				else {
					k102 = sqrt((pow((z28[j] - z8[i]), 2)) + (pow((z27[j] - z7[i]), 2)));
					if (k102 > max102)
						max102 = k102;
				}
			} printf("max102=%f\n", max102);
			temp102[y++] = max102;
		}

		printf("\n");
		min102 = temp102[0];
		for (i = 1; i < d; i++)
		{
			if (temp102[i] < min102)
				min102 = temp102[i];
		}
		printf("frechet distance of zone 4 wrt zone 14=%f\n", min102);
	}
	printf("\n");
	y = 0; if (d == 0 || m == 0)
		printf("frechet distance of zone 4 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max103 = sqrt((pow((z22[j] - z8[i]), 2)) + (pow((z21[j] - z7[i]), 2)));
				else {
					k103 = sqrt((pow((z22[j] - z8[i]), 2)) + (pow((z21[j] - z7[i]), 2)));
					if (k103 > max103)
						max103 = k103;
				}
			} printf("max103=%f\n", max103);
			temp103[y++] = max103;
		}

		printf("\n");
		min103 = temp103[0];
		for (i = 1; i < d; i++)
		{
			if (temp103[i] < min103)
				min103 = temp103[i];
		}
		printf("frechet distance of zone 4 wrt zone 11=%f\n", min103);
	}
	printf("\n");
	y = 0; if (d == 0 || o == 0)
		printf("frechet distance of zone 4 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max104 = sqrt((pow((z24[j] - z8[i]), 2)) + (pow((z23[j] - z7[i]), 2)));
				else {
					k104 = sqrt((pow((z24[j] - z8[i]), 2)) + (pow((z23[j] - z7[i]), 2)));
					if (k104 > max104)
						max104 = k104;
				}
			} printf("max104=%f\n", max104);
			temp104[y++] = max104;
		}

		printf("\n");
		min104 = temp104[0];
		for (i = 1; i < d; i++)
		{
			if (temp104[i] < min104)
				min104 = temp104[i];
		}
		printf("frechet distance of zone 4 wrt zone 12=%f\n", min104);
	}
	printf("\n");
	y = 0; if (d == 0 || v == 0)
		printf("frechet distance of zone 4 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max105 = sqrt((pow((z30[j] - z8[i]), 2)) + (pow((z29[j] - z7[i]), 2)));
				else {
					k105 = sqrt((pow((z30[j] - z8[i]), 2)) + (pow((z29[j] - z7[i]), 2)));
					if (k105 > max105)
						max105 = k105;
				}
			} printf("max105=%f\n", max105);
			temp105[y++] = max105;
		}

		printf("\n");
		min105 = temp105[0];
		for (i = 1; i < d; i++)
		{
			if (temp105[i] < min105)
				min105 = temp105[i];
		}
		printf("frechet distance of zone 4 wrt zone 15=%f\n", min105);
	}
	printf("\n");
	y = 0; if (d == 0 || w == 0)
		printf("frechet distance of zone 4 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < d; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max106 = sqrt((pow((z32[j] - z8[i]), 2)) + (pow((z31[j] - z7[i]), 2)));
				else {
					k106 = sqrt((pow((z32[j] - z8[i]), 2)) + (pow((z31[j] - z7[i]), 2)));
					if (k106 > max106)
						max106 = k106;
				}
			} printf("max106=%f\n", max106);
			temp106[y++] = max106;
		}

		printf("\n");
		min106 = temp106[0];
		for (i = 1; i < d; i++)
		{
			if (temp106[i] < min106)
				min106 = temp106[i];
		}
		printf("frechet distance of zone 4 wrt zone 16=%f\n", min106);
	}//getch();

	printf("\n");
	y = 0; if (g == 0 || b == 0)
		printf("frechet distance of zone 7 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max28 = sqrt((pow((z4[j] - z14[i]), 2)) + (pow((z3[j] - z13[i]), 2)));
				else {
					k28 = sqrt((pow((z4[j] - z14[i]), 2)) + (pow((z3[j] - z13[i]), 2)));
					if (k28 > max28)
						max28 = k28;
				}
			} printf("max28=%f\n", max28);
			temp28[y++] = max28;
		}

		printf("\n");
		min28 = temp28[0];
		for (i = 1; i < g; i++)
		{
			if (temp28[i] < min28)
				min28 = temp28[i];
		}
		printf("frechet distance of zone 7 wrt zone 2=%f\n", min28);
	}
	printf("\n");
	y = 0; if (g == 0 || d == 0)
		printf("frechet distance of zone 7 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max29 = sqrt((pow((z8[j] - z14[i]), 2)) + (pow((z7[j] - z13[i]), 2)));
				else {
					k29 = sqrt((pow((z8[j] - z14[i]), 2)) + (pow((z7[j] - z13[i]), 2)));
					if (k29 > max29)
						max29 = k29;
				}
			} printf("max29=%f\n", max29);
			temp29[y++] = max29;
		}

		printf("\n");
		min29 = temp29[0];
		for (i = 1; i < g; i++)
		{
			if (temp29[i] < min29)
				min29 = temp29[i];
		}
		printf("frechet distance of zone 7 wrt zone 4=%f\n", min29);
	}
	printf("\n");
	y = 0; if (g == 0 || e == 0)
		printf("frechet distance of zone 7 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
					max30 = sqrt((pow((z10[j] - z14[i]), 2)) + (pow((z9[j] - z13[i]), 2)));
				else {
					k30 = sqrt((pow((z10[j] - z14[i]), 2)) + (pow((z9[j] - z13[i]), 2)));
					if (k30 > max30)
						max30 = k30;
				}
			} printf("max30=%f\n", max30);
			temp30[y++] = max30;
		}

		printf("\n");
		min30 = temp30[0];
		for (i = 1; i < g; i++)
		{
			if (temp30[i] < min30)
				min30 = temp30[i];
		}
		printf("frechet distance of zone 7 wrt zone 5=%f\n", min30);
	}
	printf("\n");
	y = 0; if (g == 0 || f == 0)
		printf("frechet distance of zone 7 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max31 = sqrt((pow((z12[j] - z14[i]), 2)) + (pow((z11[j] - z13[i]), 2)));
				else {
					k31 = sqrt((pow((z12[j] - z14[i]), 2)) + (pow((z11[j] - z13[i]), 2)));
					if (k31 > max31)
						max31 = k31;
				}
			} printf("max31=%f\n", max31);
			temp31[y++] = max31;
		}

		printf("\n");
		min31 = temp31[0];
		for (i = 1; i < g; i++)
		{
			if (temp31[i] < min31)
				min31 = temp31[i];
		}
		printf("frechet distance of zone 7 wrt zone 6=%f\n", min31);
	}
	printf("\n");
	y = 0; if (g == 0 || h == 0)
		printf("frechet distance of zone 7 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max32 = sqrt((pow((z16[j] - z14[i]), 2)) + (pow((z15[j] - z13[i]), 2)));
				else {
					k32 = sqrt((pow((z16[j] - z14[i]), 2)) + (pow((z15[j] - z13[i]), 2)));
					if (k32 > max32)
						max32 = k32;
				}
			} printf("max32=%f\n", max32);
			temp32[y++] = max32;
		}

		printf("\n");
		min32 = temp32[0];
		for (i = 1; i < g; i++)
		{
			if (temp32[i] < min32)
				min32 = temp32[i];
		}
		printf("frechet distance of zone 7 wrt zone 8=%f\n", min32);
	}
	printf("\n");
	y = 0; if (g == 0 || l == 0)
		printf("frechet distance of zone 7 wrt zone 10=0 \n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max33 = sqrt((pow((z18[j] - z14[i]), 2)) + (pow((z18[j] - z13[i]), 2)));
				else {
					k33 = sqrt((pow((z18[j] - z14[i]), 2)) + (pow((z18[j] - z13[i]), 2)));
					if (k33 > max33)
						max33 = k33;
				}
			} printf("max33=%f\n", max33);
			temp33[y++] = max33;
		}

		printf("\n");
		min33 = temp33[0];
		for (i = 1; i < g; i++)
		{
			if (temp33[i] < min33)
				min33 = temp33[i];
		}
		printf("frechet distance of zone 7 wrt zone 10=%f\n", min33);
	}
	printf("\n");
	y = 0; if (g == 0 || p == 0)
		printf("frechet distance of zone 7 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max34 = sqrt((pow((z26[j] - z14[i]), 2)) + (pow((z25[j] - z13[i]), 2)));
				else {
					k34 = sqrt((pow((z26[j] - z14[i]), 2)) + (pow((z25[j] - z13[i]), 2)));
					if (k34 > max34)
						max34 = k34;
				}
			} printf("max34=%f\n", max34);
			temp34[y++] = max34;
		}

		printf("\n");
		min34 = temp34[0];
		for (i = 1; i < g; i++)
		{
			if (temp34[i] < min34)
				min34 = temp34[i];
		}
		printf("frechet distance of zone 7 wrt zone 13=%f\n", min34);
	}
	printf("\n");
	y = 0; if (g == 0 || q == 0)
		printf("frechet distance  of zone 7 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max35 = sqrt((pow((z28[j] - z14[i]), 2)) + (pow((z27[j] - z13[i]), 2)));
				else {
					k35 = sqrt((pow((z28[j] - z14[i]), 2)) + (pow((z27[j] - z13[i]), 2)));
					if (k35 > max35)
						max35 = k35;
				}
			} printf("max35=%f\n", max35);
			temp35[y++] = max35;
		}

		printf("\n");
		min35 = temp35[0];
		for (i = 1; i < g; i++)
		{
			if (temp35[i] < min35)
				min35 = temp35[i];
		}
		printf("frechet distance of zone 7 wrt zone 14=%f\n", min35);
	}
	printf("\n");
	y = 0; if (g == 0 || a == 0)
		printf("frechet distance of zone 7 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max107 = sqrt((pow((z2[j] - z14[i]), 2)) + (pow((z1[j] - z13[i]), 2)));
				else {
					k107 = sqrt((pow((z2[j] - z14[i]), 2)) + (pow((z1[j] - z13[i]), 2)));
					if (k107 > max107)
						max107 = k107;
				}
			} printf("max107=%f\n", max107);
			temp107[y++] = max107;
		}

		printf("\n");
		min107 = temp107[0];
		for (i = 1; i < g; i++)
		{
			if (temp107[i] < min107)
				min107 = temp107[i];
		}
		printf("frechet distance of zone 7 wrt zone 1=%f\n", min107);
	}
	printf("\n");
	y = 0; if (g == 0 || c == 0)
		printf("frechet distance of zone 7 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max108 = sqrt((pow((z6[j] - z14[i]), 2)) + (pow((z5[j] - z13[i]), 2)));
				else {
					k108 = sqrt((pow((z6[j] - z14[i]), 2)) + (pow((z5[j] - z13[i]), 2)));
					if (k108 > max108)
						max108 = k108;
				}
			} printf("max34=%f\n", max108);
			temp108[y++] = max108;
		}

		printf("\n");
		min108 = temp108[0];
		for (i = 1; i < g; i++)
		{
			if (temp108[i] < min108)
				min108 = temp108[i];
		}
		printf("frechet distance of zone 7 wrt zone 3=%f\n", min108);
	}
	printf("\n");
	y = 0; if (g == 0 || k == 0)
		printf("frechet distance of zone 7 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max109 = sqrt((pow((z18[j] - z14[i]), 2)) + (pow((z17[j] - z13[i]), 2)));
				else {
					k109 = sqrt((pow((z18[j] - z14[i]), 2)) + (pow((z17[j] - z13[i]), 2)));
					if (k109 > max109)
						max109 = k109;
				}
			} printf("max109=%f\n", max109);
			temp109[y++] = max109;
		}

		printf("\n");
		min109 = temp109[0];
		for (i = 1; i < g; i++)
		{
			if (temp109[i] < min109)
				min109 = temp109[i];
		}
		printf("frechet distance of zone 7 wrt zone 9=%f\n", min109);
	}
	printf("\n");
	y = 0; if (g == 0 || m == 0)
		printf("frechet distance of zone 7 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max110 = sqrt((pow((z22[j] - z14[i]), 2)) + (pow((z21[j] - z13[i]), 2)));
				else {
					k110 = sqrt((pow((z22[j] - z14[i]), 2)) + (pow((z21[j] - z13[i]), 2)));
					if (k110 > max110)
						max110 = k110;
				}
			} printf("max110=%f\n", max110);
			temp110[y++] = max110;
		}

		printf("\n");
		min110 = temp110[0];
		for (i = 1; i < g; i++)
		{
			if (temp110[i] < min110)
				min110 = temp110[i];
		}
		printf("frechet distance of zone 7 wrt zone 11=%f\n", min110);
	}
	printf("\n");
	y = 0; if (g == 0 || o == 0)
		printf("frechet distance of zone 7 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max111 = sqrt((pow((z24[j] - z14[i]), 2)) + (pow((z23[j] - z13[i]), 2)));
				else {
					k111 = sqrt((pow((z24[j] - z14[i]), 2)) + (pow((z23[j] - z13[i]), 2)));
					if (k111 > max111)
						max111 = k111;
				}
			} printf("max111=%f\n", max111);
			temp111[y++] = max111;
		}

		printf("\n");
		min111 = temp111[0];
		for (i = 1; i < g; i++)
		{
			if (temp111[i] < min111)
				min111 = temp111[i];
		}
		printf("frechet distance of zone 7 wrt zone 12=%f\n", min111);
	}
	printf("\n");
	y = 0; if (g == 0 || v == 0)
		printf("frechet distance of zone 7 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max112 = sqrt((pow((z30[j] - z14[i]), 2)) + (pow((z29[j] - z13[i]), 2)));
				else {
					k112 = sqrt((pow((z30[j] - z14[i]), 2)) + (pow((z29[j] - z13[i]), 2)));
					if (k112 > max112)
						max112 = k112;
				}
			} printf("max112=%f\n", max112);
			temp112[y++] = max112;
		}

		printf("\n");
		min112 = temp112[0];
		for (i = 1; i < g; i++)
		{
			if (temp112[i] < min112)
				min112 = temp112[i];
		}
		printf("frechet distance of zone 7 wrt zone 15=%f\n", min112);
	}
	printf("\n");
	y = 0; if (g == 0 || w == 0)
		printf("frechet distance of zone 7 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < g; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max113 = sqrt((pow((z32[j] - z14[i]), 2)) + (pow((z31[j] - z13[i]), 2)));
				else {
					k113 = sqrt((pow((z32[j] - z14[i]), 2)) + (pow((z31[j] - z13[i]), 2)));
					if (k113 > max113)
						max113 = k113;
				}
			} printf("max113=%f\n", max113);
			temp113[y++] = max113;
		}

		printf("\n");
		min113 = temp113[0];
		for (i = 1; i < g; i++)
		{
			if (temp113[i] < min113)
				min113 = temp113[i];
		}
		printf("frechet distance of zone 7 wrt zone 16=%f\n", min113);
	}//getch();

	printf("\n");
	y = 0; if (h == 0 || e == 0)
		printf("frechet distance of zone 8 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
					max36 = sqrt((pow((z10[j] - z16[i]), 2)) + (pow((z9[j] - z15[i]), 2)));
				else {
					k36 = sqrt((pow((z10[j] - z16[i]), 2)) + (pow((z9[j] - z15[i]), 2)));
					if (k36 > max36)
						max36 = k36;
				}
			} printf("max36=%f\n", max36);
			temp36[y++] = max36;
		}

		printf("\n");
		min36 = temp36[0];
		for (i = 1; i < h; i++)
		{
			if (temp36[i] < min36)
				min36 = temp36[i];
		}
		printf("frechet distance of zone 8 wrt zone 5=%f\n", min36);
	}
	printf("\n");
	y = 0; if (h == 0 || f == 0)
		printf("frechet distance of zone 8 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max37 = sqrt((pow((z12[j] - z16[i]), 2)) + (pow((z11[j] - z15[i]), 2)));
				else {
					k37 = sqrt((pow((z12[j] - z16[i]), 2)) + (pow((z11[j] - z15[i]), 2)));
					if (k37 > max37)
						max37 = k37;
				}
			} printf("max37=%f\n", max37);
			temp37[y++] = max37;
		}

		printf("\n");
		min37 = temp37[0];
		for (i = 1; i < h; i++)
		{
			if (temp37[i] < min37)
				min37 = temp37[i];
		}
		printf("frechet distance of zone 8 wrt zone 6=%f\n", min37);
	}
	printf("\n");
	y = 0; if (h == 0 || g == 0)
		printf("frechet distance of zone 8 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max38 = sqrt((pow((z14[j] - z16[i]), 2)) + (pow((z13[j] - z15[i]), 2)));
				else {
					k38 = sqrt((pow((z14[j] - z16[i]), 2)) + (pow((z13[j] - z15[i]), 2)));
					if (k38 > max38)
						max38 = k38;
				}
			} printf("max38=%f\n", max38);
			temp38[y++] = max38;
		}

		printf("\n");
		min38 = temp38[0];
		for (i = 1; i < h; i++)
		{
			if (temp38[i] < min38)
				min38 = temp38[i];
		}
		printf("frechet distance of zone 8 wrt zone 7=%f\n", min38);
	}
	printf("\n");
	y = 0; if (h == 0 || p == 0)
		printf("frechet distance of zone 8 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max39 = sqrt((pow((z26[j] - z16[i]), 2)) + (pow((z25[j] - z15[i]), 2)));
				else {
					k39 = sqrt((pow((z26[j] - z16[i]), 2)) + (pow((z25[j] - z15[i]), 2)));
					if (k39 > max39)
						max39 = k39;
				}
			} printf("max39=%f\n", max39);
			temp39[y++] = max39;
		}

		printf("\n");
		min39 = temp39[0];
		for (i = 1; i < h; i++)
		{
			if (temp39[i] < min39)
				min39 = temp39[i];
		}
		printf("frechet distance of zone 8 wrt zone 13=%f\n", min39);
	}
	printf("\n");
	y = 0; if (h == 0 || q == 0)
		printf("frechet distance of zone 8 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max40 = sqrt((pow((z28[j] - z16[i]), 2)) + (pow((z27[j] - z15[i]), 2)));
				else {
					k40 = sqrt((pow((z28[j] - z16[i]), 2)) + (pow((z27[j] - z15[i]), 2)));
					if (k40 > max40)
						max40 = k40;
				}
			} printf("max40=%f\n", max40);
			temp40[y++] = max40;
		}

		printf("\n");
		min40 = temp40[0];
		for (i = 1; i < h; i++)
		{
			if (temp40[i] < min40)
				min40 = temp40[i];
		}
		printf("frechet distance of zone 8 wrt zone 14=%f\n", min40);
	}
	printf("\n");
	y = 0; if (h == 0 || a == 0)
		printf("frechet distance of zone 8 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max114 = sqrt((pow((z2[j] - z16[i]), 2)) + (pow((z1[j] - z15[i]), 2)));
				else {
					k114 = sqrt((pow((z2[j] - z16[i]), 2)) + (pow((z1[j] - z15[i]), 2)));
					if (k114 > max114)
						max114 = k114;
				}
			} printf("max114=%f\n", max114);
			temp114[y++] = max114;
		}

		printf("\n");
		min114 = temp114[0];
		for (i = 1; i < h; i++)
		{
			if (temp114[i] < min114)
				min114 = temp114[i];
		}
		printf("frechet distance of zone 8 wrt zone 1=%f\n", min114);
	}
	printf("\n");
	y = 0; if (h == 0 || b == 0)
		printf("frechet distance of zone 8 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max115 = sqrt((pow((z4[j] - z16[i]), 2)) + (pow((z3[j] - z15[i]), 2)));
				else {
					k115 = sqrt((pow((z4[j] - z16[i]), 2)) + (pow((z3[j] - z15[i]), 2)));
					if (k115 > max115)
						max115 = k115;
				}
			} printf("max115=%f\n", max115);
			temp115[y++] = max115;
		}

		printf("\n");
		min115 = temp115[0];
		for (i = 1; i < h; i++)
		{
			if (temp115[i] < min115)
				min115 = temp115[i];
		}
		printf("frechet distance of zone 8 wrt zone 2=%f\n", min115);
	}
	printf("\n");
	y = 0; if (h == 0 || c == 0)
		printf("frechet distance of zone 8 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max116 = sqrt((pow((z6[j] - z16[i]), 2)) + (pow((z5[j] - z15[i]), 2)));
				else {
					k116 = sqrt((pow((z6[j] - z16[i]), 2)) + (pow((z5[j] - z15[i]), 2)));
					if (k116 > max116)
						max116 = k116;
				}
			} printf("max116=%f\n", max116);
			temp116[y++] = max116;
		}

		printf("\n");
		min116 = temp116[0];
		for (i = 1; i < h; i++)
		{
			if (temp116[i] < min116)
				min116 = temp116[i];
		}
		printf("frechet distance of zone 8 wrt zone 3=%f\n", min116);
	}
	printf("\n");
	y = 0; if (h == 0 || d == 0)
		printf("frechet distance of zone 8 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max117 = sqrt((pow((z8[j] - z16[i]), 2)) + (pow((z7[j] - z15[i]), 2)));
				else {
					k117 = sqrt((pow((z28[j] - z16[i]), 2)) + (pow((z7[j] - z15[i]), 2)));
					if (k117 > max117)
						max117 = k117;
				}
			} printf("max117=%f\n", max117);
			temp117[y++] = max117;
		}

		printf("\n");
		min117 = temp117[0];
		for (i = 1; i < h; i++)
		{
			if (temp117[i] < min117)
				min117 = temp117[i];
		}
		printf("frechet distance of zone 8 wrt zone 4=%f\n", min117);
	}
	printf("\n");
	y = 0; if (h == 0 || k == 0)
		printf("frechet distance of zone 8 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max118 = sqrt((pow((z18[j] - z16[i]), 2)) + (pow((z17[j] - z15[i]), 2)));
				else {
					k118 = sqrt((pow((z18[j] - z16[i]), 2)) + (pow((z17[j] - z15[i]), 2)));
					if (k118 > max118)
						max118 = k118;
				}
			} printf("max118=%f\n", max118);
			temp118[y++] = max118;
		}

		printf("\n");
		min118 = temp118[0];
		for (i = 1; i < h; i++)
		{
			if (temp118[i] < min118)
				min118 = temp118[i];
		}
		printf("frechet distance of zone 8 wrt zone 9=%f\n", min118);
	}
	printf("\n");
	y = 0; if (h == 0 || l == 0)
		printf("frechet distance of zone 8 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max119 = sqrt((pow((z20[j] - z16[i]), 2)) + (pow((z19[j] - z15[i]), 2)));
				else {
					k119 = sqrt((pow((z20[j] - z16[i]), 2)) + (pow((z19[j] - z15[i]), 2)));
					if (k119 > max119)
						max119 = k119;
				}
			} printf("max119=%f\n", max119);
			temp119[y++] = max119;
		}

		printf("\n");
		min119 = temp119[0];
		for (i = 1; i < h; i++)
		{
			if (temp119[i] < min119)
				min119 = temp119[i];
		}
		printf("frechet distance of zone 8 wrt zone 10=%f\n", min119);
	}
	printf("\n");
	y = 0; if (h == 0 || m == 0)
		printf("frechet distance of zone 8 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max120 = sqrt((pow((z22[j] - z16[i]), 2)) + (pow((z21[j] - z15[i]), 2)));
				else {
					k120 = sqrt((pow((z22[j] - z16[i]), 2)) + (pow((z21[j] - z15[i]), 2)));
					if (k120 > max120)
						max120 = k120;
				}
			} printf("max120=%f\n", max120);
			temp120[y++] = max120;
		}

		printf("\n");
		min120 = temp120[0];
		for (i = 1; i < h; i++)
		{
			if (temp120[i] < min120)
				min120 = temp120[i];
		}
		printf("frechet distance of zone 8 wrt zone 11=%f\n", min120);
	}
	printf("\n");
	y = 0; if (h == 0 || o == 0)
		printf("frechet distance of zone 8 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max121 = sqrt((pow((z24[j] - z16[i]), 2)) + (pow((z23[j] - z15[i]), 2)));
				else {
					k121 = sqrt((pow((z24[j] - z16[i]), 2)) + (pow((z23[j] - z15[i]), 2)));
					if (k121 > max121)
						max121 = k121;
				}
			} printf("max121=%f\n", max121);
			temp121[y++] = max121;
		}

		printf("\n");
		min121 = temp121[0];
		for (i = 1; i < h; i++)
		{
			if (temp121[i] < min121)
				min121 = temp121[i];
		}
		printf("frechet distance of zone 8 wrt zone 12=%f\n", min121);
	}
	printf("\n");
	y = 0; if (h == 0 || v == 0)
		printf("frechet distance of zone 8 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max122 = sqrt((pow((z30[j] - z16[i]), 2)) + (pow((z29[j] - z15[i]), 2)));
				else {
					k122 = sqrt((pow((z30[j] - z16[i]), 2)) + (pow((z29[j] - z15[i]), 2)));
					if (k122 > max122)
						max122 = k122;
				}
			} printf("max122=%f\n", max122);
			temp122[y++] = max122;
		}

		printf("\n");
		min122 = temp122[0];
		for (i = 1; i < h; i++)
		{
			if (temp122[i] < min122)
				min122 = temp122[i];
		}
		printf("frechet distance of zone 8 wrt zone 15=%f\n", min122);
	}
	printf("\n");
	y = 0; if (h == 0 || w == 0)
		printf("frechet distance of zone 8 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max123 = sqrt((pow((z32[j] - z16[i]), 2)) + (pow((z31[j] - z15[i]), 2)));
				else {
					k123 = sqrt((pow((z32[j] - z16[i]), 2)) + (pow((z31[j] - z15[i]), 2)));
					if (k123 > max123)
						max123 = k123;
				}
			} printf("max123=%f\n", max123);
			temp123[y++] = max123;
		}

		printf("\n");
		min123 = temp123[0];
		for (i = 1; i < h; i++)
		{
			if (temp123[i] < min123)
				min123 = temp123[i];
		}
		printf("frechet distance of zone 8 wrt zone 16=%f\n", min123);
	}//getch();


	printf("\n");
	y = 0; if (k == 0 || c == 0)
		printf("frechet distance of zone 9 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max41 = sqrt((pow((z6[j] - z18[i]), 2)) + (pow((z5[j] - z17[i]), 2)));
				else {
					k41 = sqrt((pow((z6[j] - z18[i]), 2)) + (pow((z5[j] - z17[i]), 2)));
					if (k41 > max41)
						max41 = k41;
				}
			} printf("max41=%f\n", max41);
			temp41[y++] = max41;
		}

		printf("\n");
		min41 = temp41[0];
		for (i = 1; i < k; i++)
		{
			if (temp41[i] < min41)
				min41 = temp41[i];
		}
		printf("frechet distance of zone 9 wrt zone 3=%f\n", min41);
	}
	printf("\n");
	y = 0; if (k == 0 || d == 0)
		printf("frechet distance of zone 9 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max42 = sqrt((pow((z8[j] - z18[i]), 2)) + (pow((z7[j] - z17[i]), 2)));
				else {
					k42 = sqrt((pow((z8[j] - z18[i]), 2)) + (pow((z7[j] - z17[i]), 2)));
					if (k42 > max42)
						max42 = k42;
				}
			} printf("max42=%f\n", max42);
			temp42[y++] = max42;
		}

		printf("\n");
		min42 = temp42[0];
		for (i = 1; i < k; i++)
		{
			if (temp42[i] < min42)
				min42 = temp42[i];
		}
		printf("frechet distance of zone 9 wrt zone 4=%f\n", min42);
	}
	printf("\n");
	y = 0; if (k == 0 || l == 0)
		printf("frechet distance of zone 9 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max43 = sqrt((pow((z20[j] - z18[i]), 2)) + (pow((z19[j] - z17[i]), 2)));
				else {
					k43 = sqrt((pow((z20[j] - z18[i]), 2)) + (pow((z19[j] - z17[i]), 2)));
					if (k43 > max43)
						max43 = k43;
				}
			} printf("max43=%f\n", max43);
			temp43[y++] = max43;
		}

		printf("\n");
		min43 = temp43[0];
		for (i = 1; i < k; i++)
		{
			if (temp43[i] < min43)
				min43 = temp43[i];
		}
		printf("frechet distance of zone 9 wrt zone 10=%f\n", min43);
	}
	printf("\n");
	y = 0; if (k == 0 || m == 0)
		printf("frechet distance of zone 9 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max44 = sqrt((pow((z22[j] - z18[i]), 2)) + (pow((z21[j] - z17[i]), 2)));
				else {
					k44 = sqrt((pow((z22[j] - z18[i]), 2)) + (pow((z21[j] - z17[i]), 2)));
					if (k44 > max44)
						max44 = k44;
				}
			} printf("max44=%f\n", max44);
			temp44[y++] = max44;
		}

		printf("\n");
		min44 = temp44[0];
		for (i = 1; i < k; i++)
		{
			if (temp44[i] < min44)
				min44 = temp44[i];
		}
		printf("frechet distance of zone 9 wrt zone 11=%f\n", min44);
	}
	printf("\n");
	y = 0; if (k == 0 || o == 0)
		printf("frechet distance of zone 9 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max45 = sqrt((pow((z24[j] - z18[i]), 2)) + (pow((z23[j] - z17[i]), 2)));
				else {
					k45 = sqrt((pow((z24[j] - z18[i]), 2)) + (pow((z23[j] - z17[i]), 2)));
					if (k45 > max45)
						max45 = k45;
				}
			} printf("max45=%f\n", max45);
			temp45[y++] = max45;
		}

		printf("\n");
		min45 = temp45[0];
		for (i = 1; i < k; i++)
		{
			if (temp45[i] < min45)
				min45 = temp45[i];
		}
		printf("frechet distance of zone 9 wrt zone 12=%f\n", min45);
	}
	printf("\n");
	y = 0; if (k == 0 || a == 0)
		printf("frechet distance of zone 9 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max124 = sqrt((pow((z2[j] - z18[i]), 2)) + (pow((z1[j] - z17[i]), 2)));
				else {
					k124 = sqrt((pow((z2[j] - z18[i]), 2)) + (pow((z1[j] - z17[i]), 2)));
					if (k124 > max124)
						max124 = k124;
				}
			} printf("max124=%f\n", max124);
			temp124[y++] = max124;
		}

		printf("\n");
		min124 = temp124[0];
		for (i = 1; i < k; i++)
		{
			if (temp124[i] < min124)
				min124 = temp124[i];
		}
		printf("frechet distance of zone 9 wrt zone 1=%f\n", min124);
	}
	printf("\n");
	y = 0; if (k == 0 || b == 0)
		printf("frechet distance of zone 9 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max125 = sqrt((pow((z4[j] - z18[i]), 2)) + (pow((z3[j] - z17[i]), 2)));
				else {
					k125 = sqrt((pow((z4[j] - z18[i]), 2)) + (pow((z3[j] - z17[i]), 2)));
					if (k125 > max125)
						max125 = k125;
				}
			} printf("max125=%f\n", max125);
			temp125[y++] = max125;
		}

		printf("\n");
		min125 = temp125[0];
		for (i = 1; i < k; i++)
		{
			if (temp125[i] < min125)
				min125 = temp125[i];
		}
		printf("frechet distance of zone 9 wrt zone 2=%f\n", min125);
	}
	printf("\n");
	y = 0; if (k == 0 || e == 0)
		printf("frechet distance of zone 9 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
					max126 = sqrt((pow((z10[j] - z18[i]), 2)) + (pow((z9[j] - z17[i]), 2)));
				else {
					k126 = sqrt((pow((z10[j] - z18[i]), 2)) + (pow((z9[j] - z17[i]), 2)));
					if (k126 > max126)
						max126 = k126;
				}
			} printf("max126=%f\n", max126);
			temp126[y++] = max126;
		}

		printf("\n");
		min126 = temp126[0];
		for (i = 1; i < k; i++)
		{
			if (temp126[i] < min126)
				min126 = temp126[i];
		}
		printf("frechet distance of zone 9 wrt zone 5=%f\n", min126);
	}
	printf("\n");
	y = 0; if (k == 0 || f == 0)
		printf("frechet distance of zone 9 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max127 = sqrt((pow((z12[j] - z18[i]), 2)) + (pow((z11[j] - z17[i]), 2)));
				else {
					k127 = sqrt((pow((z12[j] - z18[i]), 2)) + (pow((z11[j] - z17[i]), 2)));
					if (k127 > max127)
						max127 = k127;
				}
			} printf("max127=%f\n", max127);
			temp127[y++] = max127;
		}

		printf("\n");
		min127 = temp127[0];
		for (i = 1; i < k; i++)
		{
			if (temp127[i] < min127)
				min127 = temp127[i];
		}
		printf("frechet distance of zone 9 wrt zone 6=%f\n", min127);
	}
	printf("\n");
	y = 0; if (k == 0 || g == 0)
		printf("frechet distance of zone 9 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max128 = sqrt((pow((z14[j] - z18[i]), 2)) + (pow((z13[j] - z17[i]), 2)));
				else {
					k128 = sqrt((pow((z14[j] - z18[i]), 2)) + (pow((z13[j] - z17[i]), 2)));
					if (k128 > max128)
						max128 = k128;
				}
			} printf("max128=%f\n", max128);
			temp128[y++] = max128;
		}

		printf("\n");
		min128 = temp128[0];
		for (i = 1; i < k; i++)
		{
			if (temp128[i] < min128)
				min128 = temp128[i];
		}
		printf("frechet distance of zone 9 wrt zone 7=%f\n", min128);
	}
	printf("\n");
	y = 0; if (k == 0 || h == 0)
		printf("frechet distance of zone 9 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max129 = sqrt((pow((z16[j] - z18[i]), 2)) + (pow((z15[j] - z17[i]), 2)));
				else {
					k129 = sqrt((pow((z16[j] - z18[i]), 2)) + (pow((z15[j] - z17[i]), 2)));
					if (k129 > max129)
						max129 = k129;
				}
			} printf("max129=%f\n", max129);
			temp129[y++] = max129;
		}

		printf("\n");
		min129 = temp129[0];
		for (i = 1; i < k; i++)
		{
			if (temp129[i] < min129)
				min129 = temp129[i];
		}
		printf("frechet distance of zone 9 wrt zone 8=%f\n", min129);
	}
	printf("\n");
	y = 0; if (k == 0 || p == 0)
		printf("frechet distance of zone 9 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max130 = sqrt((pow((z26[j] - z18[i]), 2)) + (pow((z25[j] - z17[i]), 2)));
				else {
					k130 = sqrt((pow((z26[j] - z18[i]), 2)) + (pow((z25[j] - z17[i]), 2)));
					if (k130 > max130)
						max130 = k130;
				}
			} printf("max130=%f\n", max130);
			temp130[y++] = max130;
		}

		printf("\n");
		min130 = temp130[0];
		for (i = 1; i < k; i++)
		{
			if (temp130[i] < min130)
				min130 = temp130[i];
		}
		printf("frechet distance of zone 9 wrt zone 13=%f\n", min130);
	}
	printf("\n");
	y = 0; if (k == 0 || q == 0)
		printf("frechet distance of zone 9 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max131 = sqrt((pow((z28[j] - z18[i]), 2)) + (pow((z27[j] - z17[i]), 2)));
				else {
					k131 = sqrt((pow((z28[j] - z18[i]), 2)) + (pow((z27[j] - z17[i]), 2)));
					if (k131 > max131)
						max131 = k131;
				}
			} printf("max131=%f\n", max131);
			temp131[y++] = max131;
		}

		printf("\n");
		min131 = temp131[0];
		for (i = 1; i < k; i++)
		{
			if (temp131[i] < min131)
				min131 = temp131[i];
		}
		printf("frechet distance of zone 9 wrt zone 14=%f\n", min131);
	}
	printf("\n");
	y = 0; if (k == 0 || v == 0)
		printf("frechet distance of zone 9 wrt zone 131=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max132 = sqrt((pow((z30[j] - z18[i]), 2)) + (pow((z29[j] - z17[i]), 2)));
				else {
					k132 = sqrt((pow((z30[j] - z18[i]), 2)) + (pow((z29[j] - z17[i]), 2)));
					if (k132 > max132)
						max132 = k132;
				}
			} printf("max132=%f\n", max132);
			temp132[y++] = max132;
		}

		printf("\n");
		min132 = temp132[0];
		for (i = 1; i < k; i++)
		{
			if (temp132[i] < min132)
				min132 = temp132[i];
		}
		printf("frechet distance of zone 9 wrt zone 15=%f\n", min132);
	}
	printf("\n");
	y = 0; if (k == 0 || w == 0)
		printf("frechet distance of zone 9 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max133 = sqrt((pow((z32[j] - z18[i]), 2)) + (pow((z31[j] - z17[i]), 2)));
				else {
					k133 = sqrt((pow((z32[j] - z18[i]), 2)) + (pow((z31[j] - z17[i]), 2)));
					if (k133 > max133)
						max133 = k133;
				}
			} printf("max133=%f\n", max133);
			temp133[y++] = max133;
		}

		printf("\n");
		min133 = temp133[0];
		for (i = 1; i < k; i++)
		{
			if (temp133[i] < min133)
				min133 = temp133[i];
		}
		printf("frechet distance of zone 9 wrt zone 16=%f\n", min133);
	}//getch();
	printf("\n");
	y = 0; if (l == 0 || a == 0)
		printf("frechet distance of zone 10 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max134 = sqrt((pow((z2[j] - z20[i]), 2)) + (pow((z1[j] - z19[i]), 2)));
				else {
					k134 = sqrt((pow((z2[j] - z20[i]), 2)) + (pow((z1[j] - z19[i]), 2)));
					if (k134 > max134)
						max134 = k134;
				}
			} printf("max134=%f\n", max134);
			temp134[y++] = max134;
		}

		printf("\n");
		min134 = temp134[0];
		for (i = 1; i < l; i++)
		{
			if (temp134[i] < min134)
				min134 = temp134[i];
		}
		printf("frechet distance of zone 10 wrt zone 1=%f\n", min134);
	}
	printf("\n");
	y = 0; if (l == 0 || b == 0)
		printf("frechet distance of zone 10 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max135 = sqrt((pow((z4[j] - z20[i]), 2)) + (pow((z3[j] - z19[i]), 2)));
				else {
					k135 = sqrt((pow((z4[j] - z20[i]), 2)) + (pow((z3[j] - z19[i]), 2)));
					if (k135 > max135)
						max135 = k135;
				}
			} printf("max135=%f\n", max135);
			temp135[y++] = max135;
		}

		printf("\n");
		min135 = temp135[0];
		for (i = 1; i < l; i++)
		{
			if (temp135[i] < min135)
				min135 = temp135[i];
		}
		printf("frechet distance of zone 10 wrt zone 2=%f\n", min135);
	}
	printf("\n");
	y = 0; if (l == 0 || c == 0)
		printf("frechet distance of zone 10 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max136 = sqrt((pow((z6[j] - z20[i]), 2)) + (pow((z5[j] - z19[i]), 2)));
				else {
					k136 = sqrt((pow((z6[j] - z20[i]), 2)) + (pow((z5[j] - z19[i]), 2)));
					if (k136 > max136)
						max136 = k136;
				}
			} printf("max136=%f\n", max136);
			temp136[y++] = max136;
		}

		printf("\n");
		min136 = temp136[0];
		for (i = 1; i < l; i++)
		{
			if (temp136[i] < min136)
				min136 = temp136[i];
		}
		printf("frechet distance of zone 10 wrt zone 3=%f\n", min136);
	}
	printf("\n");
	y = 0; if (l == 0 || d == 0)
		printf("frechet distance of zone 10 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max137 = sqrt((pow((z8[j] - z20[i]), 2)) + (pow((z7[j] - z19[i]), 2)));
				else {
					k137 = sqrt((pow((z8[j] - z20[i]), 2)) + (pow((z7[j] - z19[i]), 2)));
					if (k137 > max137)
						max137 = k137;
				}
			} printf("max137=%f\n", max137);
			temp137[y++] = max137;
		}

		printf("\n");
		min137 = temp137[0];
		for (i = 1; i < l; i++)
		{
			if (temp137[i] < min137)
				min137 = temp137[i];
		}
		printf("frechet distance of zone 10 wrt zone 4=%f\n", min137);
	}
	printf("\n");
	y = 0; if (l == 0 || e == 0)
		printf("frechet distance of zone 10 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
					max138 = sqrt((pow((z10[j] - z20[i]), 2)) + (pow((z9[j] - z19[i]), 2)));
				else {
					k138 = sqrt((pow((z10[j] - z20[i]), 2)) + (pow((z9[j] - z19[i]), 2)));
					if (k138 > max138)
						max138 = k138;
				}
			} printf("max138=%f\n", max138);
			temp138[y++] = max138;
		}

		printf("\n");
		min138 = temp138[0];
		for (i = 1; i < l; i++)
		{
			if (temp138[i] < min138)
				min138 = temp138[i];
		}
		printf("frechet distance of zone 10 wrt zone 5=%f\n", min138);
	}
	printf("\n");
	y = 0; if (l == 0 || f == 0)
		printf("frechet distance of zone 10 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max139 = sqrt((pow((z12[j] - z20[i]), 2)) + (pow((z11[j] - z19[i]), 2)));
				else {
					k139 = sqrt((pow((z12[j] - z20[i]), 2)) + (pow((z11[j] - z19[i]), 2)));
					if (k139 > max139)
						max139 = k139;
				}
			} printf("max139=%f\n", max139);
			temp139[y++] = max139;
		}

		printf("\n");
		min139 = temp139[0];
		for (i = 1; i < l; i++)
		{
			if (temp139[i] < min139)
				min139 = temp139[i];
		}
		printf("frechet distance of zone 10 wrt zone 6=%f\n", min139);
	}
	printf("\n");
	y = 0; if (l == 0 || g == 0)
		printf("frechet distance of zone 10 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max140 = sqrt((pow((z14[j] - z20[i]), 2)) + (pow((z13[j] - z19[i]), 2)));
				else {
					k140 = sqrt((pow((z14[j] - z20[i]), 2)) + (pow((z13[j] - z19[i]), 2)));
					if (k140 > max140)
						max140 = k140;
				}
			} printf("max140=%f\n", max140);
			temp140[y++] = max140;
		}

		printf("\n");
		min140 = temp140[0];
		for (i = 1; i < l; i++)
		{
			if (temp140[i] < min140)
				min140 = temp140[i];
		}
		printf("frechet distance of zone 10 wrt zone 7=%f\n", min140);
	}
	printf("\n");
	y = 0;

	if (l == 0 || h == 0)
		printf("frechet distance of zone 10 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max141 = sqrt((pow((z16[j] - z20[i]), 2)) + (pow((z15[j] - z19[i]), 2)));
				else {
					k141 = sqrt((pow((z16[j] - z20[i]), 2)) + (pow((z15[j] - z19[i]), 2)));
					if (k141 > max141)
						max141 = k141;
				}
			} printf("max141=%f\n", max141);
			temp141[y++] = max141;
		}

		printf("\n");
		min141 = temp141[0];
		for (i = 1; i < l; i++)
		{
			if (temp141[i] < min141)
				min141 = temp141[i];
		}
		printf("frechet distance of zone 10 wrt zone 8=%f\n", min141);
	}
	printf("\n");
	y = 0; if (l == 0 || k == 0)
		printf("frechet distance of zone 10 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max142 = sqrt((pow((z18[j] - z20[i]), 2)) + (pow((z17[j] - z19[i]), 2)));
				else {
					k142 = sqrt((pow((z18[j] - z20[i]), 2)) + (pow((z17[j] - z19[i]), 2)));
					if (k142 > max142)
						max142 = k142;
				}
			} printf("max142=%f\n", max142);
			temp142[y++] = max142;
		}

		printf("\n");
		min142 = temp142[0];
		for (i = 1; i < l; i++)
		{
			if (temp142[i] < min142)
				min142 = temp142[i];
		}
		printf("frechet distance of zone 10 wrt zone 9=%f\n", min142);
	}
	printf("\n");
	y = 0; if (l == 0 || m == 0)
		printf("frechet distance of zone 10 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max143 = sqrt((pow((z22[j] - z20[i]), 2)) + (pow((z21[j] - z19[i]), 2)));
				else {
					k143 = sqrt((pow((z22[j] - z20[i]), 2)) + (pow((z21[j] - z19[i]), 2)));
					if (k143 > max143)
						max143 = k143;
				}
			} printf("max143=%f\n", max143);
			temp143[y++] = max143;
		}

		printf("\n");
		min143 = temp143[0];
		for (i = 1; i < l; i++)
		{
			if (temp143[i] < min143)
				min143 = temp143[i];
		}
		printf("frechet distance of zone 10 wrt zone 11=%f\n", min143);
	}
	printf("\n");
	y = 0; if (l == 0 || o == 0)
		printf("frechet distance of zone 10 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max144 = sqrt((pow((z24[j] - z20[i]), 2)) + (pow((z23[j] - z19[i]), 2)));
				else {
					k144 = sqrt((pow((z24[j] - z20[i]), 2)) + (pow((z23[j] - z19[i]), 2)));
					if (k144 > max144)
						max144 = k144;
				}
			} printf("max144=%f\n", max144);
			temp144[y++] = max144;
		}

		printf("\n");
		min144 = temp144[0];
		for (i = 1; i < l; i++)
		{
			if (temp144[i] < min144)
				min144 = temp144[i];
		}
		printf("frechet distance of zone 10 wrt zone 12=%f\n", min144);
	}
	printf("\n");
	y = 0; if (l == 0 || p == 0)
		printf("frechet distance of zone 10 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max145 = sqrt((pow((z26[j] - z20[i]), 2)) + (pow((z25[j] - z19[i]), 2)));
				else {
					k145 = sqrt((pow((z26[j] - z20[i]), 2)) + (pow((z25[j] - z19[i]), 2)));
					if (k145 > max145)
						max145 = k145;
				}
			} printf("max145=%f\n", max145);
			temp145[y++] = max145;
		}

		printf("\n");
		min145 = temp145[0];
		for (i = 1; i < l; i++)
		{
			if (temp145[i] < min145)
				min145 = temp145[i];
		}
		printf("frechet distance of zone 10 wrt zone 13=%f\n", min145);
	}
	printf("\n");
	y = 0; if (l == 0 || q == 0)
		printf("frechet distance of zone 10 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max146 = sqrt((pow((z28[j] - z20[i]), 2)) + (pow((z27[j] - z19[i]), 2)));
				else {
					k146 = sqrt((pow((z28[j] - z20[i]), 2)) + (pow((z27[j] - z19[i]), 2)));
					if (k146 > max146)
						max146 = k146;
				}
			} printf("max146=%f\n", max146);
			temp146[y++] = max146;
		}

		printf("\n");
		min146 = temp146[0];
		for (i = 1; i < l; i++)
		{
			if (temp146[i] < min146)
				min146 = temp146[i];
		}
		printf("frechet distance of zone 10 wrt zone 14=%f\n", min146);
	}
	printf("\n");
	y = 0; if (l == 0 || v == 0)
		printf("frechet distance of zone 10 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max147 = sqrt((pow((z30[j] - z20[i]), 2)) + (pow((z29[j] - z19[i]), 2)));
				else {
					k147 = sqrt((pow((z30[j] - z20[i]), 2)) + (pow((z29[j] - z19[i]), 2)));
					if (k147 > max147)
						max147 = k147;
				}
			} printf("max147=%f\n", max147);
			temp147[y++] = max147;
		}

		printf("\n");
		min147 = temp147[0];
		for (i = 1; i < l; i++)
		{
			if (temp147[i] < min147)
				min147 = temp147[i];
		}
		printf("frechet distance of zone 10 wrt zone 15=%f\n", min147);
	}
	printf("\n");
	y = 0; if (l == 0 || w == 0)
		printf("frechet distance of zone 10 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max148 = sqrt((pow((z32[j] - z20[i]), 2)) + (pow((z31[j] - z19[i]), 2)));
				else {
					k148 = sqrt((pow((z32[j] - z20[i]), 2)) + (pow((z31[j] - z19[i]), 2)));
					if (k148 > max148)
						max148 = k148;
				}
			} printf("max148=%f\n", max148);
			temp148[y++] = max148;
		}

		printf("\n");
		min148 = temp148[0];
		for (i = 1; i < l; i++)
		{
			if (temp148[i] < min148)
				min148 = temp148[i];
		}
		printf("frechet distance of zone 10 wrt zone 16=%f\n", min148);
	}//getch();
	printf("\n");
	y = 0; if (m == 0 || a == 0)
		printf("frechet distance of zone 11 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max149 = sqrt((pow((z2[j] - z22[i]), 2)) + (pow((z1[j] - z21[i]), 2)));
				else {
					k149 = sqrt((pow((z2[j] - z22[i]), 2)) + (pow((z1[j] - z21[i]), 2)));
					if (k149 > max149)
						max149 = k149;
				}
			} printf("max149=%f\n", max149);
			temp149[y++] = max149;
		}

		printf("\n");
		min149 = temp149[0];
		for (i = 1; i < m; i++)
		{
			if (temp149[i] < min149)
				min149 = temp149[i];
		}
		printf("frechet distance of zone 11 wrt zone 1=%f\n", min149);
	}
	printf("\n");
	y = 0; if (m == 0 || b == 0)
		printf("frechet distance of zone 11 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max150 = sqrt((pow((z4[j] - z22[i]), 2)) + (pow((z3[j] - z21[i]), 2)));
				else {
					k150 = sqrt((pow((z4[j] - z22[i]), 2)) + (pow((z3[j] - z21[i]), 2)));
					if (k150 > max150)
						max150 = k150;
				}
			} printf("max150=%f\n", max150);
			temp150[y++] = max150;
		}

		printf("\n");
		min150 = temp150[0];
		for (i = 1; i < m; i++)
		{
			if (temp150[i] < min150)
				min150 = temp150[i];
		}
		printf("frechet distance of zone 11 wrt zone 2=%f\n", min150);
	}
	printf("\n");
	y = 0; if (m == 0 || c == 0)
		printf("frechet distance of zone 11 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max151 = sqrt((pow((z6[j] - z22[i]), 2)) + (pow((z5[j] - z21[i]), 2)));
				else {
					k151 = sqrt((pow((z6[j] - z22[i]), 2)) + (pow((z5[j] - z21[i]), 2)));
					if (k151 > max151)
						max151 = k151;
				}
			} printf("max151=%f\n", max151);
			temp151[y++] = max151;
		}

		printf("\n");
		min151 = temp151[0];
		for (i = 1; i < m; i++)
		{
			if (temp151[i] < min151)
				min151 = temp151[i];
		}
		printf("frechet distance of zone 11 wrt zone 3=%f\n", min151);
	}
	printf("\n");
	y = 0; if (m == 0 || d == 0)
		printf("frechet distance of zone 11 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max152 = sqrt((pow((z8[j] - z22[i]), 2)) + (pow((z7[j] - z21[i]), 2)));
				else {
					k152 = sqrt((pow((z8[j] - z22[i]), 2)) + (pow((z7[j] - z21[i]), 2)));
					if (k152 > max152)
						max152 = k152;
				}
			} printf("max152=%f\n", max152);
			temp152[y++] = max152;
		}

		printf("\n");
		min152 = temp152[0];
		for (i = 1; i < m; i++)
		{
			if (temp152[i] < min152)
				min152 = temp152[i];
		}
		printf("frechet distance of zone 11 wrt zone 4=%f\n", min152);
	}
	printf("\n");
	y = 0; if (m == 0 || e == 0)
		printf("frechet distance of zone 11 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
				{

					max153 = sqrt((pow((z10[j] - z22[i]), 2)) + (pow((z9[j] - z21[i]), 2)));
				}
				else {
					k153 = sqrt((pow((z10[j] - z22[i]), 2)) + (pow((z9[j] - z21[i]), 2)));
					if (k153 > max153)
						max153 = k153;
				}
			} printf("max153=%f\n", max153);
			temp153[y++] = max153;
		}

		printf("\n");
		min153 = temp153[0];
		for (i = 1; i < m; i++)
		{
			if (temp153[i] < min153)
				min153 = temp153[i];
		}
		printf("frechet distance of zone 11 wrt zone 5=%f\n", min153);
	}
	printf("\n");
	y = 0;

	if (m == 0 || f == 0)
		printf("frechet distance of zone 11 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max154 = sqrt((pow((z12[j] - z22[i]), 2)) + (pow((z11[j] - z21[i]), 2)));
				else {
					k154 = sqrt((pow((z12[j] - z22[i]), 2)) + (pow((z11[j] - z21[i]), 2)));
					if (k154 > max154)
						max154 = k154;
				}
			} printf("max154=%f\n", max154);
			temp154[y++] = max154;
		}

		printf("\n");
		min154 = temp154[0];
		for (i = 1; i < m; i++)
		{
			if (temp154[i] < min154)
				min154 = temp154[i];
		}
		printf("frechet distance of zone 11 wrt zone 6=%f\n", min154);
	}
	printf("\n");
	y = 0; if (m == 0 || g == 0)
		printf("frechet distance of zone 11 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max155 = sqrt((pow((z14[j] - z22[i]), 2)) + (pow((z13[j] - z21[i]), 2)));
				else {
					k155 = sqrt((pow((z14[j] - z22[i]), 2)) + (pow((z13[j] - z21[i]), 2)));
					if (k155 > max155)
						max155 = k155;
				}
			} printf("max155=%f\n", max155);
			temp155[y++] = max155;
		}

		printf("\n");
		min155 = temp155[0];
		for (i = 1; i < m; i++)
		{
			if (temp155[i] < min155)
				min155 = temp155[i];
		}
		printf("frechet distance of zone 11 wrt zone 7=%f\n", min155);
	}
	printf("\n");
	y = 0; if (m == 0 || h == 0)
		printf("frechet distance of zone 11 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max156 = sqrt((pow((z16[j] - z22[i]), 2)) + (pow((z15[j] - z21[i]), 2)));
				else {
					k156 = sqrt((pow((z16[j] - z22[i]), 2)) + (pow((z15[j] - z21[i]), 2)));
					if (k156 > max156)
						max156 = k156;
				}
			} printf("max156=%f\n", max156);
			temp156[y++] = max156;
		}

		printf("\n");
		min156 = temp156[0];
		for (i = 1; i < m; i++)
		{
			if (temp156[i] < min156)
				min156 = temp156[i];
		}
		printf("frechet distance of zone 11 wrt zone 8=%f\n", min156);
	}
	printf("\n");
	y = 0; if (m == 0 || k == 0)
		printf("frechet distance of zone 11 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max157 = sqrt((pow((z18[j] - z22[i]), 2)) + (pow((z17[j] - z21[i]), 2)));
				else {
					k157 = sqrt((pow((z18[j] - z22[i]), 2)) + (pow((z17[j] - z21[i]), 2)));
					if (k157 > max157)
						max157 = k157;
				}
			} printf("max157=%f\n", max157);
			temp157[y++] = max157;
		}

		printf("\n");
		min157 = temp157[0];
		for (i = 1; i < m; i++)
		{
			if (temp157[i] < min157)
				min157 = temp157[i];
		}
		printf("frechet distance of zone 11 wrt zone 9=%f\n", min157);
	}
	printf("\n");
	y = 0; if (m == 0 || l == 0)
		printf("frechet distance of zone 11 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max158 = sqrt((pow((z20[j] - z22[i]), 2)) + (pow((z19[j] - z21[i]), 2)));
				else {
					k158 = sqrt((pow((z20[j] - z22[i]), 2)) + (pow((z19[j] - z21[i]), 2)));
					if (k158 > max158)
						max158 = k158;
				}
			} printf("max158=%f\n", max158);
			temp158[y++] = max158;
		}

		printf("\n");
		min158 = temp158[0];
		for (i = 1; i < m; i++)
		{
			if (temp158[i] < min158)
				min158 = temp158[i];
		}
		printf("frechet distance of zone 11 wrt zone 10=%f\n", min158);
	}
	printf("\n");
	y = 0; if (m == 0 || o == 0)
		printf("frechet distance of zone 11 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max159 = sqrt((pow((z24[j] - z22[i]), 2)) + (pow((z23[j] - z21[i]), 2)));
				else {
					k159 = sqrt((pow((z24[j] - z22[i]), 2)) + (pow((z23[j] - z21[i]), 2)));
					if (k159 > max159)
						max159 = k159;
				}
			} printf("max159=%f\n", max159);
			temp159[y++] = max159;
		}

		printf("\n");
		min159 = temp159[0];
		for (i = 1; i < m; i++)
		{
			if (temp159[i] < min159)
				min159 = temp159[i];
		}
		printf("frechet distance of zone 11 wrt zone 12=%f\n", min159);
	}
	printf("\n");
	y = 0; if (m == 0 || p == 0)
		printf("frechet distance of zone 11 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max160 = sqrt((pow((z26[j] - z22[i]), 2)) + (pow((z25[j] - z21[i]), 2)));
				else {
					k160 = sqrt((pow((z26[j] - z22[i]), 2)) + (pow((z25[j] - z21[i]), 2)));
					if (k160 > max160)
						max160 = k160;
				}
			} printf("max160=%f\n", max160);
			temp160[y++] = max160;
		}

		printf("\n");
		min160 = temp160[0];
		for (i = 1; i < m; i++)
		{
			if (temp160[i] < min160)
				min160 = temp160[i];
		}
		printf("frechet distance of zone 11 wrt zone 13=%f\n", min160);
	}
	printf("\n");
	y = 0; if (m == 0 || q == 0)
		printf("frechet distance of zone 11 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max161 = sqrt((pow((z28[j] - z22[i]), 2)) + (pow((z27[j] - z21[i]), 2)));
				else {
					k161 = sqrt((pow((z28[j] - z22[i]), 2)) + (pow((z27[j] - z21[i]), 2)));
					if (k161 > max161)
						max161 = k161;
				}
			} printf("max161=%f\n", max161);
			temp161[y++] = max161;
		}

		printf("\n");
		min161 = temp161[0];
		for (i = 1; i < m; i++)
		{
			if (temp161[i] < min161)
				min161 = temp161[i];
		}
		printf("frechet distance of zone 11 wrt zone 14=%f\n", min161);
	}
	printf("\n");
	y = 0; if (m == 0 || v == 0)
		printf("frechet distance of zone 11 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max162 = sqrt((pow((z30[j] - z22[i]), 2)) + (pow((z29[j] - z21[i]), 2)));
				else {
					k162 = sqrt((pow((z30[j] - z22[i]), 2)) + (pow((z29[j] - z21[i]), 2)));
					if (k162 > max162)
						max162 = k162;
				}
			} printf("max162=%f\n", max162);
			temp162[y++] = max162;
		}

		printf("\n");
		min162 = temp162[0];
		for (i = 1; i < m; i++)
		{
			if (temp162[i] < min162)
				min162 = temp162[i];
		}
		printf("frechet distance of zone 11 wrt zone 15=%f\n", min162);
	}
	printf("\n");
	y = 0; if (m == 0 || w == 0)
		printf("frechet distance of zone 11 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max163 = sqrt((pow((z32[j] - z22[i]), 2)) + (pow((z31[j] - z21[i]), 2)));
				else {
					k163 = sqrt((pow((z32[j] - z22[i]), 2)) + (pow((z31[j] - z21[i]), 2)));
					if (k163 > max163)
						max163 = k163;
				}
			} printf("max163=%f\n", max163);
			temp163[y++] = max163;
		}

		printf("\n");
		min163 = temp163[0];
		for (i = 1; i < m; i++)
		{
			if (temp163[i] < min163)
				min163 = temp163[i];
		}
		printf("frechet distance of zone 11 wrt zone 16=%f\n", min163);
	}//getch();
	printf("\n");
	y = 0; if (o == 0 || a == 0)
		printf("frechet distance of zone 12 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max164 = sqrt((pow((z2[j] - z24[i]), 2)) + (pow((z1[j] - z23[i]), 2)));
				else {
					k164 = sqrt((pow((z2[j] - z24[i]), 2)) + (pow((z1[j] - z23[i]), 2)));
					if (k164 > max164)
						max164 = k164;
				}
			} printf("max164=%f\n", max164);
			temp164[y++] = max164;
		}

		printf("\n");
		min164 = temp164[0];
		for (i = 1; i < o; i++)
		{
			if (temp164[i] < min164)
				min164 = temp164[i];
		}
		printf("frechet distance of zone 12 wrt zone 1=%f\n", min164);
	}
	printf("\n");
	y = 0; if (o == 0 || b == 0)
		printf("frechet distance of zone 12 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max165 = sqrt((pow((z4[j] - z24[i]), 2)) + (pow((z3[j] - z23[i]), 2)));
				else {
					k165 = sqrt((pow((z4[j] - z24[i]), 2)) + (pow((z3[j] - z23[i]), 2)));
					if (k165 > max165)
						max165 = k165;
				}
			} printf("max165=%f\n", max165);
			temp165[y++] = max165;
		}

		printf("\n");
		min165 = temp165[0];
		for (i = 1; i < o; i++)
		{
			if (temp165[i] < min165)
				min165 = temp165[i];
		}
		printf("frechet distance of zone 12 wrt zone 2=%f\n", min165);
	}
	printf("\n");
	y = 0; if (o == 0 || c == 0)
		printf("frechet distance of zone 12 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max166 = sqrt((pow((z6[j] - z24[i]), 2)) + (pow((z5[j] - z23[i]), 2)));
				else {
					k166 = sqrt((pow((z6[j] - z24[i]), 2)) + (pow((z5[j] - z23[i]), 2)));
					if (k166 > max166)
						max166 = k166;
				}
			} printf("max166=%f\n", max166);
			temp166[y++] = max166;
		}

		printf("\n");
		min166 = temp166[0];
		for (i = 1; i < o; i++)
		{
			if (temp166[i] < min166)
				min166 = temp166[i];
		}
		printf("frechet distance of zone 12 wrt zone 3=%f\n", min166);
	}
	printf("\n");
	y = 0; if (o == 0 || d == 0)
		printf("frechet distance of zone 12 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max167 = sqrt((pow((z8[j] - z24[i]), 2)) + (pow((z7[j] - z23[i]), 2)));
				else {
					k167 = sqrt((pow((z8[j] - z24[i]), 2)) + (pow((z7[j] - z23[i]), 2)));
					if (k167 > max167)
						max167 = k167;
				}
			} printf("max167=%f\n", max167);
			temp167[y++] = max167;
		}

		printf("\n");
		min167 = temp167[0];
		for (i = 1; i < o; i++)
		{
			if (temp167[i] < min167)
				min167 = temp167[i];
		}
		printf("frechet distance of zone 12 wrt zone 4=%f\n", min167);
	}
	printf("\n");
	y = 0; if (o == 0 || e == 0)
		printf("frechet distance of zone 12 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
				{

					max168 = sqrt((pow((z10[j] - z24[i]), 2)) + (pow((z9[j] - z23[i]), 2)));
				}
				else {
					k168 = sqrt((pow((z10[j] - z24[i]), 2)) + (pow((z9[j] - z23[i]), 2)));
					if (k168 > max168)
						max168 = k168;
				}
			} printf("max168=%f\n", max168);
			temp168[y++] = max168;
		}

		printf("\n");
		min168 = temp168[0];
		for (i = 1; i < o; i++)
		{
			if (temp168[i] < min168)
				min168 = temp168[i];
		}
		printf("frechet distance of zone 12 wrt zone 5=%f\n", min168);
	}
	printf("\n");
	y = 0; if (o == 0 || f == 0)
		printf("frechet distance of zone 12 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max169 = sqrt((pow((z12[j] - z24[i]), 2)) + (pow((z11[j] - z23[i]), 2)));
				else {
					k169 = sqrt((pow((z12[j] - z24[i]), 2)) + (pow((z11[j] - z23[i]), 2)));
					if (k169 > max169)
						max169 = k169;
				}
			} printf("max169=%f\n", max169);
			temp169[y++] = max169;
		}

		printf("\n");
		min169 = temp169[0];
		for (i = 1; i < o; i++)
		{
			if (temp169[i] < min169)
				min169 = temp169[i];
		}
		printf("frechet distance of zone 12 wrt zone 6=%f\n", min169);
	}
	printf("\n");
	y = 0; if (o == 0 || g == 0)
		printf("frechet distance of zone 12 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max170 = sqrt((pow((z14[j] - z24[i]), 2)) + (pow((z13[j] - z23[i]), 2)));
				else {
					k170 = sqrt((pow((z14[j] - z24[i]), 2)) + (pow((z13[j] - z23[i]), 2)));
					if (k170 > max170)
						max170 = k170;
				}
			} printf("max170=%f\n", max170);
			temp170[y++] = max170;
		}

		printf("\n");
		min170 = temp170[0];
		for (i = 1; i < o; i++)
		{
			if (temp170[i] < min170)
				min170 = temp170[i];
		}
		printf("frechet distance of zone 12 wrt zone 7=%f\n", min170);
	}
	printf("\n");
	y = 0; if (o == 0 || h == 0)
		printf("frechet distance of zone 12 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max171 = sqrt((pow((z16[j] - z24[i]), 2)) + (pow((z15[j] - z23[i]), 2)));
				else {
					k171 = sqrt((pow((z16[j] - z24[i]), 2)) + (pow((z15[j] - z23[i]), 2)));
					if (k171 > max171)
						max171 = k171;
				}
			} printf("max171=%f\n", max171);
			temp171[y++] = max171;
		}

		printf("\n");
		min171 = temp171[0];
		for (i = 1; i < o; i++)
		{
			if (temp171[i] < min171)
				min171 = temp171[i];
		}
		printf("frechet distance of zone 12 wrt zone 8=%f\n", min171);
	}
	printf("\n");
	y = 0; if (o == 0 || k == 0)
		printf("frechet distance of zone 12 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max172 = sqrt((pow((z18[j] - z24[i]), 2)) + (pow((z17[j] - z23[i]), 2)));
				else {
					k172 = sqrt((pow((z18[j] - z24[i]), 2)) + (pow((z17[j] - z23[i]), 2)));
					if (k172 > max172)
						max172 = k172;
				}
			} printf("max172=%f\n", max172);
			temp172[y++] = max172;
		}

		printf("\n");
		min172 = temp172[0];
		for (i = 1; i < o; i++)
		{
			if (temp172[i] < min172)
				min172 = temp172[i];
		}
		printf("frechet distance of zone 12 wrt zone 9=%f\n", min172);
	}
	printf("\n");
	y = 0; if (o == 0 || l == 0)
		printf("frechet distance of zone 12 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max173 = sqrt((pow((z20[j] - z24[i]), 2)) + (pow((z19[j] - z23[i]), 2)));
				else {
					k173 = sqrt((pow((z20[j] - z24[i]), 2)) + (pow((z19[j] - z23[i]), 2)));
					if (k173 > max173)
						max173 = k173;
				}
			} printf("max173=%f\n", max173);
			temp173[y++] = max173;
		}

		printf("\n");
		min173 = temp173[0];
		for (i = 1; i < o; i++)
		{
			if (temp173[i] < min173)
				min173 = temp173[i];
		}
		printf("frechet distance of zone 12 wrt zone 10=%f\n", min173);
	}
	printf("\n");
	y = 0; if (m == 0 || o == 0)
		printf("frechet distance of zone 12 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max174 = sqrt((pow((z22[j] - z24[i]), 2)) + (pow((z21[j] - z23[i]), 2)));
				else {
					k174 = sqrt((pow((z22[j] - z24[i]), 2)) + (pow((z21[j] - z23[i]), 2)));
					if (k174 > max174)
						max174 = k174;
				}
			} printf("max174=%f\n", max174);
			temp174[y++] = max174;
		}

		printf("\n");
		min174 = temp174[0];
		for (i = 1; i < o; i++)
		{
			if (temp174[i] < min174)
				min174 = temp174[i];
		}
		printf("frechet distance of zone 12 wrt zone 11=%f\n", min174);
	}
	printf("\n");
	y = 0; if (o == 0 || p == 0)
		printf("frechet distance of zone 12 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max175 = sqrt((pow((z26[j] - z24[i]), 2)) + (pow((z25[j] - z23[i]), 2)));
				else {
					k175 = sqrt((pow((z26[j] - z24[i]), 2)) + (pow((z25[j] - z23[i]), 2)));
					if (k175 > max175)
						max175 = k175;
				}
			} printf("max175=%f\n", max175);
			temp175[y++] = max175;
		}

		printf("\n");
		min175 = temp175[0];
		for (i = 1; i < o; i++)
		{
			if (temp175[i] < min175)
				min175 = temp175[i];
		}
		printf("frechet distance of zone 12 wrt zone 13=%f\n", min175);
	}
	printf("\n");
	y = 0; if (o == 0 || q == 0)
		printf("frechet distance of zone 12 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max178 = sqrt((pow((z28[j] - z24[i]), 2)) + (pow((z27[j] - z23[i]), 2)));
				else {
					k178 = sqrt((pow((z28[j] - z24[i]), 2)) + (pow((z27[j] - z23[i]), 2)));
					if (k178 > max178)
						max178 = k178;
				}
			} printf("max178=%f\n", max178);
			temp178[y++] = max178;
		}

		printf("\n");
		min178 = temp178[0];
		for (i = 1; i < o; i++)
		{
			if (temp178[i] < min178)
				min178 = temp178[i];
		}
		printf("frechet distance of zone 12 wrt zone 14=%f\n", min178);
	}
	printf("\n");
	y = 0; if (o == 0 || v == 0)
		printf("frechet distance of zone 12 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max176 = sqrt((pow((z30[j] - z24[i]), 2)) + (pow((z29[j] - z23[i]), 2)));
				else {
					k176 = sqrt((pow((z30[j] - z24[i]), 2)) + (pow((z29[j] - z23[i]), 2)));
					if (k176 > max176)
						max176 = k176;
				}

			} printf("max176=%f\n", max176);
			temp176[y++] = max176;
		}

		printf("\n");
		min176 = temp176[0];
		for (i = 1; i < o; i++)
		{
			if (temp176[i] < min176)
				min176 = temp176[i];
		}
		printf("frechet distance of zone 12 wrt zone 15=%f\n", min176);
	}
	printf("\n");
	y = 0; if (o == 0 || w == 0)
		printf("frechet distance of zone 12 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < o; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max177 = sqrt((pow((z32[j] - z24[i]), 2)) + (pow((z31[j] - z23[i]), 2)));
				else {
					k177 = sqrt((pow((z32[j] - z24[i]), 2)) + (pow((z31[j] - z23[i]), 2)));
					if (k177 > max177)
						max177 = k177;
				}
			} printf("max177=%f\n", max177);
			temp177[y++] = max177;
		}

		printf("\n");
		min177 = temp177[0];
		for (i = 1; i < o; i++)
		{
			if (temp177[i] < min177)
				min177 = temp177[i];
		}
		printf("frechet distance of zone 12 wrt zone 16=%f\n", min177);
	}//getch();
	printf("\n");
	y = 0; if (p == 0 || a == 0)
		printf("frechet distance of zone 13 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max179 = sqrt((pow((z2[j] - z26[i]), 2)) + (pow((z1[j] - z25[i]), 2)));
				else {
					k179 = sqrt((pow((z2[j] - z26[i]), 2)) + (pow((z1[j] - z25[i]), 2)));
					if (k179 > max179)
						max179 = k179;
				}
			} printf("max179=%f\n", max179);
			temp179[y++] = max179;
		}

		printf("\n");
		min179 = temp179[0];
		for (i = 1; i < p; i++)
		{
			if (temp179[i] < min179)
				min179 = temp179[i];
		}
		printf("frechet distance of zone 13 wrt zone 1=%f\n", min179);
	}

	printf("\n");
	y = 0; if (p == 0 || b == 0)
		printf("frechet distance of zone 13 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max180 = sqrt((pow((z4[j] - z26[i]), 2)) + (pow((z3[j] - z25[i]), 2)));
				else {
					k180 = sqrt((pow((z4[j] - z26[i]), 2)) + (pow((z3[j] - z25[i]), 2)));
					if (k180 > max180)
						max180 = k180;
				}
			} printf("max180=%f\n", max180);
			temp180[y++] = max180;
		}

		printf("\n");
		min180 = temp180[0];
		for (i = 1; i < p; i++)
		{
			if (temp180[i] < min180)
				min180 = temp180[i];
		}
		printf("frechet distance of zone 13 wrt zone 2=%f\n", min180);
	}
	printf("\n");
	y = 0; if (p == 0 || c == 0)
		printf("frechet distance of zone 13 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max181 = sqrt((pow((z6[j] - z26[i]), 2)) + (pow((z5[j] - z25[i]), 2)));
				else {
					k181 = sqrt((pow((z6[j] - z26[i]), 2)) + (pow((z5[j] - z25[i]), 2)));
					if (k181 > max181)
						max181 = k181;
				}
			} printf("max181=%f\n", max181);
			temp181[y++] = max181;
		}

		printf("\n");
		min181 = temp181[0];
		for (i = 1; i < p; i++)
		{
			if (temp181[i] < min181)
				min181 = temp181[i];
		}
		printf("frechet distance of zone 13 wrt zone 3=%f\n", min181);
	}
	printf("\n");
	y = 0; if (p == 0 || d == 0)
		printf("frechet distance of zone 13 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max182 = sqrt((pow((z8[j] - z26[i]), 2)) + (pow((z7[j] - z25[i]), 2)));
				else {
					k182 = sqrt((pow((z8[j] - z26[i]), 2)) + (pow((z7[j] - z25[i]), 2)));
					if (k182 > max182)
						max182 = k182;
				}
			} printf("max182=%f\n", max182);
			temp182[y++] = max182;
		}

		printf("\n");
		min182 = temp182[0];
		for (i = 1; i < p; i++)
		{
			if (temp182[i] < min182)
				min182 = temp182[i];
		}
		printf("frechet distance of zone 13 wrt zone 4=%f\n", min182);
	}
	printf("\n");
	y = 0; if (p == 0 || e == 0)
		printf("frechet distance of zone 13 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
				{

					max183 = sqrt((pow((z10[j] - z26[i]), 2)) + (pow((z9[j] - z25[i]), 2)));
				}
				else {
					k183 = sqrt((pow((z10[j] - z26[i]), 2)) + (pow((z9[j] - z25[i]), 2)));
					if (k183 > max183)
						max183 = k183;
				}
			} printf("max183=%f\n", max183);
			temp183[y++] = max183;
		}

		printf("\n");
		min183 = temp183[0];
		for (i = 1; i < p; i++)
		{
			if (temp183[i] < min183)
				min183 = temp183[i];
		}
		printf("frechet distance of zone 13 wrt zone 5=%f\n", min183);
	}
	printf("\n");
	y = 0; if (p == 0 || f == 0)
		printf("frechet distance of zone 13 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max184 = sqrt((pow((z12[j] - z26[i]), 2)) + (pow((z11[j] - z25[i]), 2)));
				else {
					k184 = sqrt((pow((z12[j] - z26[i]), 2)) + (pow((z11[j] - z25[i]), 2)));
					if (k184 > max184)
						max184 = k184;
				}
			} printf("max184=%f\n", max184);
			temp184[y++] = max184;
		}

		printf("\n");
		min184 = temp184[0];
		for (i = 1; i < p; i++)
		{
			if (temp184[i] < min184)
				min184 = temp184[i];
		}
		printf("frechet distance of zone 13 wrt zone 6=%f\n", min184);
	}
	printf("\n");
	y = 0; if (p == 0 || g == 0)
		printf("frechet distance of zone 13 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max185 = sqrt((pow((z14[j] - z26[i]), 2)) + (pow((z13[j] - z25[i]), 2)));
				else {
					k185 = sqrt((pow((z14[j] - z26[i]), 2)) + (pow((z13[j] - z25[i]), 2)));
					if (k185 > max185)
						max185 = k185;
				}
			} printf("max185=%f\n", max185);
			temp185[y++] = max185;
		}

		printf("\n");
		min185 = temp185[0];
		for (i = 1; i < p; i++)
		{
			if (temp185[i] < min185)
				min185 = temp185[i];
		}
		printf("frechet distance of zone 13 wrt zone 7=%f\n", min185);
	}
	printf("\n");
	y = 0; if (p == 0 || h == 0)
		printf("frechet distance of zone 13 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max186 = sqrt((pow((z16[j] - z26[i]), 2)) + (pow((z15[j] - z25[i]), 2)));
				else {
					k186 = sqrt((pow((z16[j] - z26[i]), 2)) + (pow((z15[j] - z25[i]), 2)));
					if (k186 > max186)
						max186 = k186;
				}
			} printf("max186=%f\n", max186);
			temp186[y++] = max186;
		}

		printf("\n");
		min186 = temp186[0];
		for (i = 1; i < p; i++)
		{
			if (temp186[i] < min186)
				min186 = temp186[i];
		}
		printf("frechet distance of zone 13 wrt zone 8=%f\n", min186);
	}
	printf("\n");
	y = 0; if (p == 0 || k == 0)
		printf("frechet distance of zone 13 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max187 = sqrt((pow((z18[j] - z26[i]), 2)) + (pow((z17[j] - z25[i]), 2)));
				else {
					k187 = sqrt((pow((z18[j] - z26[i]), 2)) + (pow((z17[j] - z25[i]), 2)));
					if (k187 > max187)
						max187 = k187;
				}
			} printf("max187=%f\n", max187);
			temp187[y++] = max187;
		}

		printf("\n");
		min187 = temp187[0];
		for (i = 1; i < p; i++)
		{
			if (temp187[i] < min187)
				min187 = temp187[i];
		}
		printf("frechet distance of zone 13 wrt zone 9=%f\n", min187);
	}
	printf("\n");
	y = 0; if (p == 0 || l == 0)
		printf("frechet distance of zone 13 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max188 = sqrt((pow((z20[j] - z26[i]), 2)) + (pow((z19[j] - z25[i]), 2)));
				else {
					k188 = sqrt((pow((z20[j] - z26[i]), 2)) + (pow((z19[j] - z25[i]), 2)));
					if (k188 > max188)
						max188 = k188;
				}
			} printf("max188=%f\n", max188);
			temp188[y++] = max188;
		}

		printf("\n");
		min188 = temp188[0];
		for (i = 1; i < p; i++)
		{
			if (temp188[i] < min188)
				min188 = temp188[i];
		}
		printf("frechet distance of zone 13 wrt zone 10=%f\n", min188);
	}
	printf("\n");
	y = 0; if (p == 0 || m == 0)
		printf("frechet distance of zone 13 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max189 = sqrt((pow((z22[j] - z26[i]), 2)) + (pow((z21[j] - z25[i]), 2)));
				else {
					k189 = sqrt((pow((z22[j] - z26[i]), 2)) + (pow((z21[j] - z25[i]), 2)));
					if (k189 > max189)
						max189 = k189;
				}
			} printf("max189=%f\n", max189);
			temp189[y++] = max189;
		}

		printf("\n");
		min189 = temp189[0];
		for (i = 1; i < p; i++)
		{
			if (temp189[i] < min189)
				min189 = temp189[i];
		}
		printf("frechet distance of zone 13 wrt zone 11=%f\n", min189);
	}
	printf("\n");
	y = 0; if (o == 0 || p == 0)
		printf("frechet distance of zone 13 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max190 = sqrt((pow((z24[j] - z26[i]), 2)) + (pow((z23[j] - z25[i]), 2)));
				else {
					k190 = sqrt((pow((z24[j] - z26[i]), 2)) + (pow((z23[j] - z25[i]), 2)));
					if (k190 > max190)
						max190 = k190;
				}
			} printf("max190=%f\n", max190);
			temp190[y++] = max190;
		}

		printf("\n");
		min190 = temp190[0];
		for (i = 1; i < p; i++)
		{
			if (temp190[i] < min190)
				min190 = temp190[i];
		}
		printf("frechet distance of zone 13 wrt zone 12=%f\n", min190);
	}
	printf("\n");
	y = 0; if (p == 0 || q == 0)
		printf("frechet distance of zone 13 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max191 = sqrt((pow((z28[j] - z26[i]), 2)) + (pow((z27[j] - z25[i]), 2)));
				else {
					k191 = sqrt((pow((z28[j] - z26[i]), 2)) + (pow((z27[j] - z25[i]), 2)));
					if (k191 > max191)
						max191 = k191;
				}
			} printf("max191=%f\n", max191);
			temp191[y++] = max191;
		}

		printf("\n");
		min191 = temp191[0];
		for (i = 1; i < p; i++)
		{
			if (temp191[i] < min191)
				min191 = temp191[i];
		}
		printf("frechet distance of zone 13 wrt zone 14=%f\n", min191);
	}
	printf("\n");
	y = 0; if (p == 0 || v == 0)
		printf("frechet distance of zone 13 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max192 = sqrt((pow((z30[j] - z26[i]), 2)) + (pow((z29[j] - z25[i]), 2)));
				else {
					k192 = sqrt((pow((z30[j] - z26[i]), 2)) + (pow((z29[j] - z25[i]), 2)));
					if (k192 > max192)
						max192 = k192;
				}
			} printf("max192=%f\n", max192);
			temp192[y++] = max192;
		}

		printf("\n");
		min192 = temp192[0];
		for (i = 1; i < p; i++)
		{
			if (temp192[i] < min192)
				min192 = temp192[i];
		}
		printf("frechet distance of zone 13 wrt zone 15=%f\n", min192);
	}
	printf("\n");
	y = 0; if (p == 0 || w == 0)
		printf("frechet distance of zone 13 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max193 = sqrt((pow((z32[j] - z26[i]), 2)) + (pow((z31[j] - z25[i]), 2)));
				else {
					k193 = sqrt((pow((z32[j] - z26[i]), 2)) + (pow((z31[j] - z25[i]), 2)));
					if (k193 > max193)
						max193 = k193;
				}
			} printf("max193=%f\n", max193);
			temp193[y++] = max193;
		}

		printf("\n");
		min193 = temp193[0];
		for (i = 1; i < p; i++)
		{
			if (temp193[i] < min193)
				min193 = temp193[i];
		}
		printf("frechet distance of zone 13 wrt zone 16=%f\n", min193);
	}//getch();
	printf("\n");
	y = 0; if (q == 0 || a == 0)
		printf("frechet distance of zone 14 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max194 = sqrt((pow((z2[j] - z28[i]), 2)) + (pow((z1[j] - z27[i]), 2)));
				else {
					k194 = sqrt((pow((z2[j] - z28[i]), 2)) + (pow((z1[j] - z27[i]), 2)));
					if (k194 > max194)
						max194 = k194;
				}
			} printf("max194=%f\n", max194);
			temp194[y++] = max194;
		}

		printf("\n");
		min194 = temp194[0];
		for (i = 1; i < q; i++)
		{
			if (temp194[i] < min194)
				min194 = temp194[i];
		}
		printf("frechet distance of zone 14 wrt zone 1=%f\n", min194);
	}
	printf("\n");
	y = 0; if (q == 0 || b == 0)
		printf("frechet distance of zone 14 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max195 = sqrt((pow((z4[j] - z28[i]), 2)) + (pow((z3[j] - z27[i]), 2)));
				else {
					k195 = sqrt((pow((z4[j] - z28[i]), 2)) + (pow((z3[j] - z27[i]), 2)));
					if (k195 > max195)
						max195 = k195;
				}
			} printf("max195=%f\n", max195);
			temp195[y++] = max195;
		}

		printf("\n");
		min195 = temp195[0];
		for (i = 1; i < q; i++)
		{
			if (temp195[i] < min195)
				min195 = temp195[i];
		}
		printf("frechet distance of zone 14 wrt zone 2=%f\n", min195);
	}
	printf("\n");
	y = 0; if (q == 0 || c == 0)
		printf("frechet distance of zone 14 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max196 = sqrt((pow((z6[j] - z28[i]), 2)) + (pow((z5[j] - z27[i]), 2)));
				else {
					k196 = sqrt((pow((z6[j] - z28[i]), 2)) + (pow((z5[j] - z27[i]), 2)));
					if (k196 > max196)
						max196 = k196;
				}
			} printf("max196=%f\n", max196);
			temp196[y++] = max196;
		}

		printf("\n");
		min196 = temp196[0];
		for (i = 1; i < q; i++)
		{
			if (temp196[i] < min196)
				min196 = temp196[i];
		}
		printf("frechet distance of zone 14 wrt zone 3=%f\n", min196);
	}
	printf("\n");
	y = 0; if (q == 0 || d == 0)
		printf("frechet distance of zone 14 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max197 = sqrt((pow((z8[j] - z28[i]), 2)) + (pow((z7[j] - z27[i]), 2)));
				else {
					k197 = sqrt((pow((z8[j] - z28[i]), 2)) + (pow((z7[j] - z27[i]), 2)));
					if (k197 > max197)
						max197 = k197;
				}
			} printf("max197=%f\n", max197);
			temp197[y++] = max197;
		}

		printf("\n");
		min197 = temp197[0];
		for (i = 1; i < q; i++)
		{
			if (temp197[i] < min197)
				min197 = temp197[i];
		}
		printf("frechet distance of zone 14 wrt zone 4=%f\n", min197);
	}
	printf("\n");
	y = 0; if (q == 0 || e == 0)
		printf("frechet distance of zone 14 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
				{

					max198 = sqrt((pow((z10[j] - z28[i]), 2)) + (pow((z9[j] - z27[i]), 2)));
				}
				else {
					k198 = sqrt((pow((z10[j] - z28[i]), 2)) + (pow((z9[j] - z27[i]), 2)));
					if (k198 > max198)
						max198 = k198;
				}
			} printf("max198=%f\n", max198);
			temp198[y++] = max198;
		}

		printf("\n");
		min198 = temp198[0];
		for (i = 1; i < q; i++)
		{
			if (temp198[i] < min198)
				min198 = temp198[i];
		}
		printf("frechet distance of zone 14 wrt zone 5=%f\n", min198);
	}
	printf("\n");
	y = 0; if (q == 0 || f == 0)
		printf("frechet distance of zone 14 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max199 = sqrt((pow((z12[j] - z28[i]), 2)) + (pow((z11[j] - z27[i]), 2)));
				else {
					k199 = sqrt((pow((z12[j] - z28[i]), 2)) + (pow((z11[j] - z27[i]), 2)));
					if (k199 > max199)
						max199 = k199;
				}
			} printf("max199=%f\n", max199);
			temp199[y++] = max199;
		}

		printf("\n");
		min199 = temp199[0];
		for (i = 1; i < q; i++)
		{
			if (temp199[i] < min199)
				min199 = temp199[i];
		}
		printf("frechet distance of zone 14 wrt zone 6=%f\n", min199);
	}
	printf("\n");
	y = 0; if (q == 0 || g == 0)
		printf("frechet distance of zone 14 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max200 = sqrt((pow((z14[j] - z28[i]), 2)) + (pow((z13[j] - z27[i]), 2)));
				else {
					k200 = sqrt((pow((z14[j] - z28[i]), 2)) + (pow((z13[j] - z27[i]), 2)));
					if (k200 > max200)
						max200 = k200;
				}
			} printf("max200=%f\n", max200);
			temp200[y++] = max200;
		}

		printf("\n");
		min200 = temp200[0];
		for (i = 1; i < q; i++)
		{
			if (temp200[i] < min200)
				min200 = temp200[i];
		}
		printf("frechet distance of zone 14 wrt zone 7=%f\n", min200);
	}
	printf("\n");
	y = 0; if (q == 0 || h == 0)
		printf("frechet distance of zone 14 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max201 = sqrt((pow((z16[j] - z28[i]), 2)) + (pow((z15[j] - z27[i]), 2)));
				else {
					k201 = sqrt((pow((z16[j] - z28[i]), 2)) + (pow((z15[j] - z27[i]), 2)));
					if (k201 > max201)
						max201 = k201;
				}
			} printf("max201=%f\n", max201);
			temp201[y++] = max201;
		}

		printf("\n");
		min201 = temp201[0];
		for (i = 1; i < q; i++)
		{
			if (temp201[i] < min201)
				min201 = temp201[i];
		}
		printf("frechet distance of zone 14 wrt zone 8=%f\n", min201);
	}
	printf("\n");
	y = 0; if (q == 0 || k == 0)
		printf("frechet distance of zone 14 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max202 = sqrt((pow((z18[j] - z28[i]), 2)) + (pow((z17[j] - z27[i]), 2)));
				else {
					k202 = sqrt((pow((z18[j] - z28[i]), 2)) + (pow((z17[j] - z27[i]), 2)));
					if (k202 > max202)
						max202 = k202;
				}
			} printf("max202=%f\n", max202);
			temp202[y++] = max202;
		}

		printf("\n");
		min202 = temp202[0];
		for (i = 1; i < q; i++)
		{
			if (temp202[i] < min202)
				min202 = temp202[i];
		}
		printf("frechet distance of zone 14 wrt zone 9=%f\n", min202);
	}
	printf("\n");
	y = 0; if (q == 0 || l == 0)
		printf("frechet distance of zone 14 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max203 = sqrt((pow((z20[j] - z28[i]), 2)) + (pow((z19[j] - z27[i]), 2)));
				else {
					k203 = sqrt((pow((z20[j] - z28[i]), 2)) + (pow((z19[j] - z27[i]), 2)));
					if (k203 > max203)
						max203 = k203;
				}
			} printf("max203=%f\n", max203);
			temp203[y++] = max203;
		}

		printf("\n");
		min203 = temp203[0];
		for (i = 1; i < q; i++)
		{
			if (temp203[i] < min203)
				min203 = temp203[i];
		}
		printf("frechet distance of zone 14 wrt zone 10=%f\n", min203);
	}
	printf("\n");
	y = 0; if (q == 0 || m == 0)
		printf("frechet distance of zone 14 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max204 = sqrt((pow((z22[j] - z28[i]), 2)) + (pow((z21[j] - z27[i]), 2)));
				else {
					k204 = sqrt((pow((z22[j] - z28[i]), 2)) + (pow((z21[j] - z27[i]), 2)));
					if (k204 > max204)
						max204 = k204;
				}
			} printf("max204=%f\n", max204);
			temp204[y++] = max204;
		}

		printf("\n");
		min204 = temp204[0];
		for (i = 1; i < q; i++)
		{
			if (temp204[i] < min204)
				min204 = temp204[i];
		}
		printf("frechet distance of zone 14 wrt zone 11=%f\n", min204);
	}
	printf("\n");
	y = 0; if (q == 0 || o == 0)
		printf("frechet distance of zone 14 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max205 = sqrt((pow((z24[j] - z28[i]), 2)) + (pow((z23[j] - z27[i]), 2)));
				else {
					k205 = sqrt((pow((z24[j] - z28[i]), 2)) + (pow((z23[j] - z27[i]), 2)));
					if (k205 > max205)
						max205 = k205;
				}
			} printf("max205=%f\n", max205);
			temp205[y++] = max205;
		}

		printf("\n");
		min205 = temp205[0];
		for (i = 1; i < q; i++)
		{
			if (temp205[i] < min205)
				min205 = temp205[i];
		}
		printf("frechet distance of zone 14 wrt zone 12=%f\n", min205);
	}
	printf("\n");
	y = 0; if (p == 0 || q == 0)
		printf("frechet distance of zone 14 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max206 = sqrt((pow((z26[j] - z28[i]), 2)) + (pow((z25[j] - z27[i]), 2)));
				else {
					k206 = sqrt((pow((z26[j] - z28[i]), 2)) + (pow((z25[j] - z27[i]), 2)));
					if (k206 > max206)
						max206 = k206;
				}
			} printf("max206=%f\n", max206);
			temp206[y++] = max206;
		}

		printf("\n");
		min206 = temp206[0];
		for (i = 1; i < q; i++)
		{
			if (temp206[i] < min206)
				min206 = temp206[i];
		}
		printf("frechet distance of zone 14 wrt zone 13=%f\n", min206);
	}
	printf("\n");
	y = 0; if (q == 0 || v == 0)
		printf("frechet distance of zone 14 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max207 = sqrt((pow((z30[j] - z28[i]), 2)) + (pow((z29[j] - z27[i]), 2)));
				else {
					k207 = sqrt((pow((z30[j] - z28[i]), 2)) + (pow((z29[j] - z27[i]), 2)));
					if (k207 > max207)
						max207 = k207;
				}
			} printf("max207=%f\n", max207);
			temp207[y++] = max207;
		}

		printf("\n");
		min207 = temp207[0];
		for (i = 1; i < q; i++)
		{
			if (temp207[i] < min207)
				min207 = temp207[i];
		}
		printf("frechet distance of zone 14 wrt zone 15=%f\n", min207);
	}
	printf("\n");
	y = 0; if (q == 0 || w == 0)
		printf("frechet distance of zone 14 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < q; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max208 = sqrt((pow((z32[j] - z28[i]), 2)) + (pow((z31[j] - z27[i]), 2)));
				else {
					k208 = sqrt((pow((z32[j] - z28[i]), 2)) + (pow((z31[j] - z27[i]), 2)));
					if (k208 > max208)
						max208 = k208;
				}
			} printf("max208=%f\n", max208);
			temp208[y++] = max208;
		}

		printf("\n");
		min208 = temp208[0];
		for (i = 1; i < q; i++)
		{
			if (temp208[i] < min208)
				min208 = temp208[i];
		}
		printf("frechet distance of zone 14 wrt zone 16=%f\n", min208);
	}//getch();
	printf("\n");
	y = 0; if (v == 0 || a == 0)
		printf("frechet distance of zone 15 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max209 = sqrt((pow((z2[j] - z30[i]), 2)) + (pow((z1[j] - z29[i]), 2)));
				else {
					k209 = sqrt((pow((z2[j] - z30[i]), 2)) + (pow((z1[j] - z29[i]), 2)));
					if (k209 > max209)
						max209 = k209;
				}
			} printf("max209=%f\n", max209);
			temp209[y++] = max209;
		}

		printf("\n");
		min209 = temp209[0];
		for (i = 1; i < v; i++)
		{
			if (temp209[i] < min209)
				min209 = temp209[i];
		}
		printf("frechet distance of zone 15 wrt zone 1=%f\n", min209);
	}
	printf("\n");
	y = 0; if (v == 0 || b == 0)
		printf("frechet distance of zone 15 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max210 = sqrt((pow((z4[j] - z30[i]), 2)) + (pow((z3[j] - z29[i]), 2)));
				else {
					k210 = sqrt((pow((z4[j] - z30[i]), 2)) + (pow((z3[j] - z29[i]), 2)));
					if (k210 > max210)
						max210 = k210;
				}
			} printf("max210=%f\n", max210);
			temp210[y++] = max210;
		}

		printf("\n");
		min210 = temp210[0];
		for (i = 1; i < v; i++)
		{
			if (temp210[i] < min210)
				min210 = temp210[i];
		}
		printf("frechet distance of zone 15 wrt zone 2=%f\n", min210);
	}
	printf("\n");
	y = 0; if (v == 0 || c == 0)
		printf("frechet distance of zone 15 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max211 = sqrt((pow((z6[j] - z30[i]), 2)) + (pow((z5[j] - z29[i]), 2)));
				else {
					k211 = sqrt((pow((z6[j] - z30[i]), 2)) + (pow((z5[j] - z29[i]), 2)));
					if (k211 > max211)
						max211 = k211;
				}
			} printf("max211=%f\n", max211);
			temp211[y++] = max211;
		}

		printf("\n");
		min211 = temp211[0];
		for (i = 1; i < v; i++)
		{
			if (temp211[i] < min211)
				min211 = temp211[i];
		}
		printf("frechet distance of zone 15 wrt zone 3=%f\n", min211);
	}
	printf("\n");
	y = 0; if (v == 0 || d == 0)
		printf("frechet distance of zone 15 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max212 = sqrt((pow((z8[j] - z30[i]), 2)) + (pow((z7[j] - z29[i]), 2)));
				else {
					k212 = sqrt((pow((z8[j] - z30[i]), 2)) + (pow((z7[j] - z29[i]), 2)));
					if (k212 > max212)
						max212 = k212;
				}
			} printf("max212=%f\n", max212);
			temp212[y++] = max212;
		}

		printf("\n");
		min212 = temp212[0];
		for (i = 1; i < v; i++)
		{
			if (temp212[i] < min212)
				min212 = temp212[i];
		}
		printf("frechet distance of zone 15 wrt zone 4=%f\n", min212);
	}
	printf("\n");
	y = 0; if (v == 0 || e == 0)
		printf("frechet distance of zone 15 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
				{

					max213 = sqrt((pow((z10[j] - z30[i]), 2)) + (pow((z9[j] - z29[i]), 2)));
				}
				else {
					k213 = sqrt((pow((z10[j] - z30[i]), 2)) + (pow((z9[j] - z29[i]), 2)));
					if (k213 > max213)
						max213 = k213;
				}
			} printf("max213=%f\n", max213);
			temp213[y++] = max213;
		}

		printf("\n");
		min213 = temp213[0];
		for (i = 1; i < v; i++)
		{
			if (temp213[i] < min213)
				min213 = temp213[i];
		}
		printf("frechet distance of zone 15 wrt zone 5=%f\n", min213);
	}
	printf("\n");
	y = 0; if (v == 0 || f == 0)
		printf("frechet distance of zone 15 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max214 = sqrt((pow((z12[j] - z30[i]), 2)) + (pow((z11[j] - z29[i]), 2)));
				else {
					k214 = sqrt((pow((z12[j] - z30[i]), 2)) + (pow((z11[j] - z29[i]), 2)));
					if (k214 > max214)
						max214 = k214;
				}
			} printf("max214=%f\n", max214);
			temp214[y++] = max214;
		}

		printf("\n");
		min214 = temp214[0];
		for (i = 1; i < v; i++)
		{
			if (temp214[i] < min214)
				min214 = temp214[i];
		}
		printf("frechet distance of zone 15 wrt zone 6=%f\n", min214);
	}
	printf("\n");
	y = 0; if (v == 0 || g == 0)
		printf("frechet distance of zone 15 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max215 = sqrt((pow((z14[j] - z30[i]), 2)) + (pow((z13[j] - z29[i]), 2)));
				else {
					k215 = sqrt((pow((z14[j] - z30[i]), 2)) + (pow((z13[j] - z29[i]), 2)));
					if (k215 > max215)
						max215 = k215;
				}
			} printf("max215=%f\n", max215);
			temp215[y++] = max215;
		}

		printf("\n");
		min215 = temp215[0];
		for (i = 1; i < v; i++)
		{
			if (temp215[i] < min215)
				min215 = temp215[i];
		}
		printf("frechet distance of zone 15 wrt zone 7=%f\n", min215);
	}
	printf("\n");
	y = 0; if (v == 0 || h == 0)
		printf("frechet distance of zone 15 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max216 = sqrt((pow((z16[j] - z30[i]), 2)) + (pow((z15[j] - z29[i]), 2)));
				else {
					k216 = sqrt((pow((z16[j] - z30[i]), 2)) + (pow((z15[j] - z29[i]), 2)));
					if (k216 > max216)
						max216 = k216;
				}
			} printf("max216=%f\n", max216);
			temp216[y++] = max216;
		}

		printf("\n");
		min216 = temp216[0];
		for (i = 1; i < q; i++)
		{
			if (temp216[i] < min216)
				min216 = temp216[i];
		}
		printf("frechet distance of zone 15 wrt zone 8=%f\n", min216);
	}
	printf("\n");
	y = 0; if (v == 0 || k == 0)
		printf("frechet distance of zone 15 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max217 = sqrt((pow((z18[j] - z30[i]), 2)) + (pow((z17[j] - z29[i]), 2)));
				else {
					k217 = sqrt((pow((z18[j] - z30[i]), 2)) + (pow((z17[j] - z29[i]), 2)));
					if (k217 > max217)
						max217 = k217;
				}
			} printf("max217=%f\n", max217);
			temp217[y++] = max217;
		}

		printf("\n");
		min217 = temp217[0];
		for (i = 1; i < v; i++)
		{
			if (temp217[i] < min217)
				min217 = temp217[i];
		}
		printf("frechet distance of zone 15 wrt zone 9=%f\n", min217);
	}
	printf("\n");
	y = 0; if (v == 0 || l == 0)
		printf("frechet distance of zone 15 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max218 = sqrt((pow((z20[j] - z30[i]), 2)) + (pow((z19[j] - z29[i]), 2)));
				else {
					k218 = sqrt((pow((z20[j] - z30[i]), 2)) + (pow((z19[j] - z29[i]), 2)));
					if (k218 > max218)
						max218 = k218;
				}
			} printf("max218=%f\n", max218);
			temp218[y++] = max218;
		}

		printf("\n");
		min218 = temp218[0];
		for (i = 1; i < v; i++)
		{
			if (temp218[i] < min218)
				min218 = temp218[i];
		}
		printf("frechet distance of zone 15 wrt zone 10=%f\n", min218);
	}
	printf("\n");
	y = 0; if (v == 0 || m == 0)
		printf("frechet distance of zone 15 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max219 = sqrt((pow((z22[j] - z30[i]), 2)) + (pow((z21[j] - z29[i]), 2)));
				else {
					k219 = sqrt((pow((z22[j] - z30[i]), 2)) + (pow((z21[j] - z29[i]), 2)));
					if (k219 > max219)
						max219 = k219;
				}
			} printf("max219=%f\n", max219);
			temp219[y++] = max219;
		}

		printf("\n");
		min219 = temp219[0];
		for (i = 1; i < v; i++)
		{
			if (temp219[i] < min219)
				min219 = temp219[i];
		}
		printf("frechet distance of zone 15 wrt zone 11=%f\n", min219);
	}
	printf("\n");
	y = 0; if (v == 0 || o == 0)
		printf("frechet distance of zone 15 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max220 = sqrt((pow((z24[j] - z30[i]), 2)) + (pow((z23[j] - z29[i]), 2)));
				else {
					k220 = sqrt((pow((z24[j] - z30[i]), 2)) + (pow((z23[j] - z29[i]), 2)));
					if (k220 > max220)
						max220 = k220;
				}
			} printf("max220=%f\n", max220);
			temp220[y++] = max220;
		}

		printf("\n");
		min220 = temp220[0];
		for (i = 1; i < v; i++)
		{
			if (temp220[i] < min220)
				min220 = temp220[i];
		}
		printf("frechet distance of zone 15 wrt zone 12=%f\n", min220);
	}
	printf("\n");
	y = 0; if (v == 0 || p == 0)
		printf("frechet distance of zone 15 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max221 = sqrt((pow((z26[j] - z30[i]), 2)) + (pow((z25[j] - z29[i]), 2)));
				else {
					k221 = sqrt((pow((z26[j] - z30[i]), 2)) + (pow((z25[j] - z29[i]), 2)));
					if (k221 > max221)
						max221 = k221;
				}
			} printf("max221=%f\n", max221);
			temp221[y++] = max221;
		}

		printf("\n");
		min221 = temp221[0];
		for (i = 1; i < v; i++)
		{
			if (temp221[i] < min221)
				min221 = temp221[i];
		}
		printf("frechet distance of zone 15 wrt zone 13=%f\n", min221);
	}
	printf("\n");
	y = 0; if (q == 0 || v == 0)
		printf("frechet distance of zone 15 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max222 = sqrt((pow((z28[j] - z30[i]), 2)) + (pow((z27[j] - z29[i]), 2)));
				else {
					k222 = sqrt((pow((z28[j] - z30[i]), 2)) + (pow((z27[j] - z29[i]), 2)));
					if (k222 > max222)
						max222 = k222;
				}
			} printf("max222=%f\n", max222);
			temp222[y++] = max222;
		}

		printf("\n");
		min222 = temp222[0];
		for (i = 1; i < v; i++)
		{
			if (temp222[i] < min222)
				min222 = temp222[i];
		}
		printf("frechet distance of zone 15 wrt zone 14=%f\n", min222);
	}
	printf("\n");
	y = 0; if (v == 0 || w == 0)
		printf("frechet distance of zone 15 wrt zone 16=0\n");
	else

	{
		for (i = 0; i < v; i++)
		{
			for (j = 0; j < w; j++)
			{
				if (j == 0)
					max223 = sqrt((pow((z32[j] - z30[i]), 2)) + (pow((z31[j] - z29[i]), 2)));
				else {
					k223 = sqrt((pow((z32[j] - z30[i]), 2)) + (pow((z31[j] - z29[i]), 2)));
					if (k223 > max223)
						max223 = k223;
				}
			} printf("max223=%f\n", max223);
			temp223[y++] = max223;
		}

		printf("\n");
		min223 = temp223[0];
		for (i = 1; i < v; i++)
		{
			if (temp223[i] < min223)
				min223 = temp223[i];
		}
		printf("frechet distance of zone 15 wrt zone 16=%f\n", min223);
	}//getch();
	printf("\n");
	y = 0; if (w == 0 || a == 0)
		printf("frechet distance of zone 16 wrt zone 1=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (j == 0)
					max224 = sqrt((pow((z2[j] - z32[i]), 2)) + (pow((z1[j] - z31[i]), 2)));
				else {
					k224 = sqrt((pow((z2[j] - z32[i]), 2)) + (pow((z1[j] - z31[i]), 2)));
					if (k224 > max224)
						max224 = k224;
				}
			} printf("max224=%f\n", max224);
			temp224[y++] = max224;
		}

		printf("\n");
		min224 = temp224[0];
		for (i = 1; i < w; i++)
		{
			if (temp224[i] < min224)
				min224 = temp224[i];
		}
		printf("frechet distance of zone 16 wrt zone 1=%f\n", min224);
	}
	printf("\n");
	y = 0; if (w == 0 || b == 0)
		printf("frechet distance of zone 16 wrt zone 2=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (j == 0)
					max225 = sqrt((pow((z4[j] - z32[i]), 2)) + (pow((z3[j] - z31[i]), 2)));
				else {
					k225 = sqrt((pow((z4[j] - z32[i]), 2)) + (pow((z3[j] - z31[i]), 2)));
					if (k225 > max225)
						max225 = k225;
				}
			} printf("max225=%f\n", max225);
			temp225[y++] = max225;
		}

		printf("\n");
		min225 = temp225[0];
		for (i = 1; i < w; i++)
		{
			if (temp225[i] < min225)
				min225 = temp225[i];
		}
		printf("frechet distance of zone 16 wrt zone 2=%f\n", min225);
	}
	printf("\n");
	y = 0; if (w == 0 || c == 0)
		printf("frechet distance of zone 16 wrt zone 3=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < c; j++)
			{
				if (j == 0)
					max226 = sqrt((pow((z6[j] - z32[i]), 2)) + (pow((z5[j] - z31[i]), 2)));
				else {
					k226 = sqrt((pow((z6[j] - z32[i]), 2)) + (pow((z5[j] - z31[i]), 2)));
					if (k226 > max226)
						max226 = k226;
				}
			} printf("max226=%f\n", max226);
			temp226[y++] = max226;
		}

		printf("\n");
		min226 = temp226[0];
		for (i = 1; i < w; i++)
		{
			if (temp226[i] < min226)
				min226 = temp226[i];
		}
		printf("frechet distance of zone 16 wrt zone 3=%f\n", min226);
	}
	printf("\n");
	y = 0; if (w == 0 || d == 0)
		printf("frechet distance of zone 16 wrt zone 4=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < d; j++)
			{
				if (j == 0)
					max227 = sqrt((pow((z8[j] - z32[i]), 2)) + (pow((z7[j] - z31[i]), 2)));
				else {
					k227 = sqrt((pow((z8[j] - z32[i]), 2)) + (pow((z7[j] - z31[i]), 2)));
					if (k227 > max227)
						max227 = k227;
				}
			} printf("max227=%f\n", max227);
			temp227[y++] = max227;
		}

		printf("\n");
		min227 = temp227[0];
		for (i = 1; i < w; i++)
		{
			if (temp227[i] < min227)
				min227 = temp227[i];
		}
		printf("frechet distance of zone 16 wrt zone 4=%f\n", min227);
	}
	printf("\n");
	y = 0; if (w == 0 || e == 0)
		printf("frechet distance of zone 16 wrt zone 5=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < e; j++)
			{
				if (j == 0)
				{

					max228 = sqrt((pow((z10[j] - z32[i]), 2)) + (pow((z9[j] - z31[i]), 2)));
				}
				else {
					k228 = sqrt((pow((z10[j] - z32[i]), 2)) + (pow((z9[j] - z31[i]), 2)));
					if (k228 > max228)
						max228 = k228;
				}
			} printf("max228=%f\n", max228);
			temp228[y++] = max228;
		}

		printf("\n");
		min228 = temp228[0];
		for (i = 1; i < w; i++)
		{
			if (temp228[i] < min228)
				min228 = temp228[i];
		}
		printf("frechet distance of zone 16 wrt zone 5=%f\n", min228);
	}
	printf("\n");
	y = 0; if (w == 0 || f == 0)
		printf("frechet distance of zone 16 wrt zone 6=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < f; j++)
			{
				if (j == 0)
					max229 = sqrt((pow((z12[j] - z32[i]), 2)) + (pow((z11[j] - z31[i]), 2)));
				else {
					k229 = sqrt((pow((z12[j] - z32[i]), 2)) + (pow((z11[j] - z31[i]), 2)));
					if (k229 > max229)
						max229 = k229;
				}
			} printf("max229=%f\n", max229);
			temp229[y++] = max229;
		}

		printf("\n");
		min229 = temp229[0];
		for (i = 1; i < w; i++)
		{
			if (temp229[i] < min229)
				min229 = temp229[i];
		}
		printf("frechet distance of zone 16 wrt zone 6=%f\n", min229);
	}
	printf("\n");
	y = 0; if (w == 0 || g == 0)
		printf("frechet distance of zone 16 wrt zone 7=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < g; j++)
			{
				if (j == 0)
					max230 = sqrt((pow((z14[j] - z32[i]), 2)) + (pow((z13[j] - z31[i]), 2)));
				else {
					k230 = sqrt((pow((z14[j] - z32[i]), 2)) + (pow((z13[j] - z31[i]), 2)));
					if (k230 > max230)
						max230 = k230;
				}
			} printf("max230=%f\n", max230);
			temp230[y++] = max230;
		}

		printf("\n");
		min230 = temp230[0];
		for (i = 1; i < w; i++)
		{
			if (temp230[i] < min230)
				min230 = temp230[i];
		}
		printf("frechet distance of zone 16 wrt zone 7=%f\n", min230);
	}
	printf("\n");
	y = 0; if (w == 0 || h == 0)
		printf("frechet distance of zone 16 wrt zone 8=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < h; j++)
			{
				if (j == 0)
					max231 = sqrt((pow((z16[j] - z32[i]), 2)) + (pow((z15[j] - z31[i]), 2)));
				else {
					k231 = sqrt((pow((z16[j] - z32[i]), 2)) + (pow((z15[j] - z31[i]), 2)));
					if (k231 > max231)
						max231 = k231;
				}
			} printf("max231=%f\n", max231);
			temp231[y++] = max231;
		}

		printf("\n");
		min231 = temp231[0];
		for (i = 1; i < w; i++)
		{
			if (temp231[i] < min231)
				min231 = temp231[i];
		}
		printf("frechet distance of zone 16 wrt zone 8=%f\n", min231);
	}
	printf("\n");
	y = 0; if (w == 0 || k == 0)
		printf("frechet distance of zone 16 wrt zone 9=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (j == 0)
					max232 = sqrt((pow((z18[j] - z32[i]), 2)) + (pow((z17[j] - z31[i]), 2)));
				else {
					k232 = sqrt((pow((z18[j] - z32[i]), 2)) + (pow((z17[j] - z31[i]), 2)));
					if (k232 > max232)
						max232 = k232;
				}
			} printf("max232=%f\n", max232);
			temp232[y++] = max232;
		}

		printf("\n");
		min232 = temp232[0];
		for (i = 1; i < w; i++)
		{
			if (temp232[i] < min232)
				min232 = temp232[i];
		}
		printf("frechet distance of zone 16 wrt zone 9=%f\n", min232);
	}
	printf("\n");
	y = 0; if (w == 0 || l == 0)
		printf("frechet distance of zone 16 wrt zone 10=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (j == 0)
					max233 = sqrt((pow((z20[j] - z32[i]), 2)) + (pow((z19[j] - z31[i]), 2)));
				else {
					k233 = sqrt((pow((z20[j] - z32[i]), 2)) + (pow((z19[j] - z31[i]), 2)));
					if (k233 > max233)
						max233 = k233;
				}
			} printf("max233=%f\n", max233);
			temp233[y++] = max233;
		}

		printf("\n");
		min233 = temp233[0];
		for (i = 1; i < w; i++)
		{
			if (temp233[i] < min233)
				min233 = temp233[i];
		}
		printf("frechet distance of zone 16 wrt zone 10=%f\n", min233);
	}
	printf("\n");
	y = 0; if (w == 0 || m == 0)
		printf("frechet distance of zone 16 wrt zone 11=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (j == 0)
					max234 = sqrt((pow((z22[j] - z32[i]), 2)) + (pow((z21[j] - z31[i]), 2)));
				else {
					k234 = sqrt((pow((z22[j] - z32[i]), 2)) + (pow((z21[j] - z31[i]), 2)));
					if (k234 > max234)
						max234 = k234;
				}
			} printf("max234=%f\n", max234);
			temp234[y++] = max234;
		}

		printf("\n");
		min234 = temp234[0];
		for (i = 1; i < w; i++)
		{
			if (temp234[i] < min234)
				min234 = temp234[i];
		}
		printf("frechet distance of zone 16 wrt zone 11=%f\n", min234);
	}
	printf("\n");
	y = 0; if (w == 0 || o == 0)
		printf("frechet distance of zone 16 wrt zone 12=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < o; j++)
			{
				if (j == 0)
					max235 = sqrt((pow((z24[j] - z32[i]), 2)) + (pow((z23[j] - z31[i]), 2)));
				else {
					k235 = sqrt((pow((z24[j] - z32[i]), 2)) + (pow((z23[j] - z31[i]), 2)));
					if (k235 > max235)
						max235 = k235;
				}
			} printf("max235=%f\n", max235);
			temp235[y++] = max235;
		}

		printf("\n");
		min235 = temp235[0];
		for (i = 1; i < w; i++)
		{
			if (temp235[i] < min235)
				min235 = temp235[i];
		}
		printf("frechet distance of zone 16 wrt zone 12=%f\n", min235);
	}
	printf("\n");
	y = 0; if (p == 0 || w == 0)
		printf("frechet distance of zone 16 wrt zone 13=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < p; j++)
			{
				if (j == 0)
					max236 = sqrt((pow((z26[j] - z32[i]), 2)) + (pow((z25[j] - z31[i]), 2)));
				else {
					k236 = sqrt((pow((z26[j] - z32[i]), 2)) + (pow((z25[j] - z31[i]), 2)));
					if (k236 > max236)
						max236 = k236;
				}
			} printf("max236=%f\n", max236);
			temp236[y++] = max236;
		}

		printf("\n");
		min236 = temp236[0];
		for (i = 1; i < w; i++)
		{
			if (temp236[i] < min236)
				min236 = temp236[i];
		}
		printf("frechet distance of zone 16 wrt zone 13=%f\n", min236);
	}
	printf("\n");
	y = 0; if (q == 0 || w == 0)
		printf("frechet distance of zone 16 wrt zone 14=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < q; j++)
			{
				if (j == 0)
					max237 = sqrt((pow((z28[j] - z32[i]), 2)) + (pow((z27[j] - z31[i]), 2)));
				else {
					k237 = sqrt((pow((z28[j] - z32[i]), 2)) + (pow((z27[j] - z31[i]), 2)));
					if (k237 > max237)
						max237 = k237;
				}
			} printf("max237=%f\n", max237);
			temp237[y++] = max237;
		}

		printf("\n");
		min237 = temp237[0];
		for (i = 1; i < w; i++)
		{
			if (temp237[i] < min237)
				min237 = temp237[i];
		}
		printf("frechet distance of zone 16 wrt zone 14=%f\n", min237);
	}
	printf("\n");
	y = 0; if (w == 0 || v == 0)
		printf("frechet distance of zone 16 wrt zone 15=0\n");
	else

	{
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < v; j++)
			{
				if (j == 0)
					max238 = sqrt((pow((z30[j] - z32[i]), 2)) + (pow((z29[j] - z31[i]), 2)));
				else {
					k238 = sqrt((pow((z30[j] - z32[i]), 2)) + (pow((z29[j] - z31[i]), 2)));
					if (k238 > max238)
						max238 = k238;
				}
			} printf("max238=%f\n", max238);
			temp238[y++] = max238;
		}

		printf("\n");
		min238 = temp238[0];
		for (i = 1; i < w; i++)
		{
			if (temp238[i] < min238)
				min238 = temp238[i];
		}
		printf("frechet distance of zone 16 wrt zone 15=%f\n", min238);
	}
	//getch();
	printf("\n");
	if (min < min3)
		f0 = min;
	else
		f0 = min3;
	printf("ultimate frechet distance of zone 1 wrt zone 2=%f\n", f0);
	if (min1 < min15)
		f1 = min;
	else
		f1 = min15;
	printf("ultimate frechet distance of zone 1 wrt zone 3=%f\n", f1);
	if (min2 < min20)
		f2 = min2;
	else
		f2 = min20;
	printf("ultimate frechet distance of zone 1 wrt zone 4=%f\n", f2);
	if (min46 < min68)
		f3 = min46;
	else
		f3 = min68;
	printf("ultimate frechet distance of zone 1 wrt zone 5=%f\n", f3);
	if (min47 < min78)
		f4 = min47;
	else
		f4 = min78;
	printf("ultimate frechet distance of zone 1 wrt zone 6=%f\n", f4);
	if (min48 < min107)
		f5 = min48;
	else
		f5 = min48;
	printf("ultimate frechet distance of zone 1 wrt zone 7=%f\n", f5);
	if (min49 < min114)
		f6 = min49;
	else
		f6 = min114;
	printf("ultimate frechet distance of zone 1 wrt zone 8=%f\n", f6);
	if (min50 < min124)
		f7 = min50;
	else
		f7 = min124;
	printf("ultimate frechet distance of zone 1 wrt zone 9=%f\n", f7);
	if (min51 < min134)
		f8 = min51;
	else
		f8 = min134;
	printf("ultimate frechet distance of zone 1 wrt zone 10=%f\n", f8);
	if (min52 < min149)
		f9 = min52;
	else
		f9 = min149;
	printf("ultimate frechet distance of zone 1 wrt zone 11=%f\n", f9);
	if (min53 < min164)
		f10 = min53;
	else
		f10 = min164;
	printf("ultimate frechet distance of zone 1 wrt zone 12=%f\n", f10);
	if (min54 < min179)
		f11 = min54;
	else
		f11 = min179;
	printf("ultimate frechet distance of zone 1 wrt zone 13=%f\n", f11);
	if (min55 < min194)
		f12 = min55;
	else
		f12 = min194;
	printf("ultimate frechet distance of zone 1 wrt zone 14=%f\n", f12);
	if (min56 < min209)
		f13 = min56;
	else
		f13 = min209;
	printf("ultimate frechet distance of zone 1 wrt zone 15=%f\n", f13);
	if (min57 < min224)
		f14 = min57;
	else
		f14 = min224;
	printf("ultimate frechet distance of zone 1 wrt zone 16=%f\n", f14);
	if (min4 < min16)
		f15 = min4;
	else
		f15 = min16;
	printf("ultimate frechet distance of zone 2 wrt zone 3=%f\n", f15);
	if (min5 < min21)
		f16 = min5;
	else
		f16 = min21;
	printf("ultimate frechet distance of zone 2 wrt zone 4=%f\n", f16);
	if (min6 < min8)
		f17 = min6;
	else
		f17 = min8;
	printf("ultimate frechet distance of zone 2 wrt zone 5=%f\n", f17);
	if (min58 < min79)
		f18 = min58;
	else
		f18 = min79;
	printf("ultimate frechet distance of zone 2 wrt zone 6=%f\n", f18);
	if (min7 < min28)
		f19 = min7;
	else
		f19 = min28;
	printf("ultimate frechet distance of zone 2 wrt zone 7=%f\n", f19);
	if (min59 < min115)
		f20 = min59;
	else
		f20 = min59;
	printf("ultimate frechet distance of zone 2 wrt zone 8=%f\n", f20);
	if (min60 < min125)
		f21 = min60;
	else
		f21 = min125;
	printf("ultimate frechet distance of zone 2 wrt zone 9=%f\n", f21);
	if (min61 < min135)
		f22 = min61;
	else
		f22 = min135;
	printf("ultimate frechet distance of zone 2 wrt zone 10=%f\n", f22);
	if (min62 < min150)
		f23 = min62;
	else
		f23 = min150;
	printf("ultimate frechet distance of zone 2 wrt zone 11=%f\n", f23);
	if (min63 < min165)
		f24 = min63;
	else
		f24 = min165;
	printf("ultimate frechet distance of zone 2 wrt zone 12=%f\n", f24);
	if (min64 < min180)
		f25 = min64;
	else
		f25 = min180;
	printf("ultimate frechet distance of zone 2 wrt zone 13=%f\n", f25);
	if (min65 < min195)
		f26 = min65;
	else
		f26 = min195;
	printf("ultimate frechet distance of zone 2 wrt zone 14=%f\n", f26);
	if (min66 < min210)
		f27 = min66;
	else
		f27 = min210;
	printf("ultimate frechet distance of zone 2 wrt zone 15=%f\n", f27);
	if (min67 < min225)
		f28 = min67;
	else
		f28 = min225;
	printf("ultimate frechet distance of zone 2 wrt zone 16=%f\n", f28);
	if (min17 < min22)
		f29 = min17;
	else
		f29 = min22;
	printf("ultimate frechet distance of zone 3 wrt zone 4=%f\n", f29);

	if (min90 < min69)
		f30 = min90;
	else
		f30 = min69;
	printf("ultimate frechet distance of zone 3 wrt zone 5=%f\n", f30);
	if (min91 < min80)
		f31 = min91;
	else
		f31 = min80;
	printf("ultimate frechet distance of zone 3 wrt zone 6=%f\n", f31);
	if (min92 < min108)
		f32 = min92;
	else
		f32 = min92;
	printf("ultimate frechet distance of zone 3 wrt zone 7=%f\n", f32);
	if (min93 < min116)
		f33 = min93;
	else
		f33 = min116;
	printf("ultimate frechet distance of zone 3 wrt zone 8=%f\n", f33);
	if (min18 < min41)
		f34 = min18;
	else
		f34 = min41;
	printf("ultimate frechet distance of zone 3 wrt zone 9=%f\n", f34);
	if (min19 < min136)
		f35 = min19;
	else
		f35 = min136;
	printf("ultimate frechet distance of zone 3 wrt zone 10=%f\n", f35);
	if (min94 < min151)
		f36 = min94;
	else
		f36 = min151;
	printf("ultimate frechet distance of zone 3 wrt zone 11=%f\n", f36);
	if (min95 < min166)
		f37 = min95;
	else
		f37 = min166;
	printf("ultimate frechet distance of zone 3 wrt zone 12=%f\n", f37);
	if (min96 < min181)
		f38 = min96;
	else
		f38 = min181;
	printf("ultimate frechet distance of zone 3 wrt zone 13=%f\n", f38);
	if (min97 < min196)
		f39 = min97;
	else
		f39 = min196;
	printf("ultimate frechet distance of zone 3 wrt zone 14=%f\n", f39);
	if (min98 < min211)
		f40 = min98;
	else
		f40 = min211;
	printf("ultimate frechet distance of zone 3 wrt zone 15=%f\n", f40);
	if (min99 < min226)
		f41 = min99;
	else
		f41 = min226;
	printf("ultimate frechet distance of zone 3 wrt zone 16=%f\n", f41);
	if (min23 < min9)
		f42 = min23;
	else
		f42 = min9;
	printf("ultimate frechet distance of zone 4 wrt zone 5=%f\n", f42);
	if (min100 < min81)
		f43 = min100;
	else
		f43 = min81;
	printf("ultimate frechet distance of zone 4 wrt zone 6=%f\n", f43);
	if (min24 < min29)
		f44 = min24;
	else
		f44 = min29;
	printf("ultimate frechet distance of zone 4 wrt zone 7=%f\n", f44);
	if (min101 < min117)
		f45 = min101;
	else
		f45 = min117;
	printf("ultimate frechet distance of zone 4 wrt zone 8=%f\n", f45);
	if (min25 < min42)
		f46 = min25;
	else
		f46 = min42;
	printf("ultimate frechet distance of zone 4 wrt zone 9=%f\n", f46);
	if (min26 < min137)
		f47 = min26;
	else
		f47 = min137;
	printf("ultimate frechet distance of zone 4 wrt zone 10=%f\n", f47);
	if (min103 < min152)
		f48 = min103;
	else
		f48 = min152;
	printf("ultimate frechet distance of zone 4 wrt zone 11=%f\n", f48);
	if (min104 < min167)
		f49 = min104;
	else
		f49 = min167;
	printf("ultimate frechet distance of zone 4 wrt zone 12=%f\n", f49);
	if (min27 < min182)
		f50 = min27;
	else
		f50 = min182;
	printf("ultimate frechet distance of zone 4 wrt zone 13=%f\n", f50);
	if (min102 < min197)
		f51 = min102;
	else
		f51 = min197;
	printf("ultimate frechet distance of zone 4 wrt zone 14=%f\n", f51);
	if (min105 < min212)
		f52 = min105;
	else
		f52 = min212;
	printf("ultimate frechet distance of zone 4 wrt zone 15=%f\n", f52);
	if (min106 < min227)
		f53 = min106;
	else
		f53 = min227;
	printf("ultimate frechet distance of zone 4 wrt zone 16=%f\n", f53);
	if (min240 < min12)
		f54 = min240;
	else
		f54 = min240;
	printf("ultimate frechet distance of zone 5 wrt zone 6=%f\n", f54);
	if (min10 < min30)
		f55 = min10;
	else
		f55 = min30;
	printf("ultimate frechet distance of zone 5 wrt zone 7=%f\n", f55);
	if (min11 < min36)
		f56 = min11;
	else
		f56 = min36;
	printf("ultimate frechet distance of zone 5 wrt zone 8=%f\n", f56);
	if (min70 < min126)
		f57 = min70;
	else
		f57 = min126;
	printf("ultimate frechet distance of zone 5 wrt zone 9=%f\n", f57);
	if (min71 < min138)
		f58 = min71;
	else
		f58 = min138;
	printf("ultimate frechet distance of zone 5 wrt zone 10=%f\n", f58);
	if (min72 < min153)
		f59 = min72;
	else
		f59 = min153;
	printf("ultimate frechet distance of zone 5 wrt zone 11=%f\n", f59);
	if (min73 < min168)
		f60 = min73;
	else
		f60 = min168;
	printf("ultimate frechet distance of zone 5 wrt zone 12=%f\n", f60);
	if (min74 < min183)
		f61 = min74;
	else
		f61 = min183;
	printf("ultimate frechet distance of zone 5 wrt zone 13=%f\n", f61);
	if (min75 < min198)
		f62 = min75;
	else
		f62 = min198;
	printf("ultimate frechet distance of zone 5 wrt zone 14=%f\n", f62);
	if (min76 < min213)
		f63 = min76;
	else
		f63 = min213;
	printf("ultimate frechet distance of zone 5 wrt zone 15=%f\n", f63);
	if (min77 < min228)
		f64 = min77;
	else
		f64 = min228;
	printf("ultimate frechet distance of zone 5 wrt zone 16=%f\n", f64);
	if (min13 < min31)
		f65 = min13;
	else
		f65 = min31;
	printf("ultimate frechet distance of zone 6 wrt zone 7=%f\n", f65);
	if (min14 < min37)
		f66 = min14;
	else
		f66 = min37;
	printf("ultimate frechet distance of zone 6 wrt zone 8=%f\n", f66);
	if (min82 < min127)
		f67 = min82;
	else
		f67 = min127;
	printf("ultimate frechet distance of zone 6 wrt zone 9=%f\n", f67);
	if (min83 < min139)
		f68 = min83;
	else
		f68 = min139;
	printf("ultimate frechet distance of zone 6 wrt zone 10=%f\n", f68);
	if (min84 < min154)
		f69 = min84;
	else
		f69 = min154;
	printf("ultimate frechet distance of zone 6 wrt zone 11=%f\n", f69);
	if (min85 < min169)
		f70 = min85;
	else
		f70 = min169;
	printf("ultimate frechet distance of zone 6 wrt zone 12=%f\n", f70);
	if (min86 < min184)
		f71 = min86;
	else
		f71 = min184;
	printf("ultimate frechet distance of zone 6 wrt zone 13=%f\n", f71);
	if (min87 < min199)
		f72 = min87;
	else
		f72 = min199;
	printf("ultimate frechet distance of zone 6 wrt zone 14=%f\n", f72);
	if (min88 < min214)
		f73 = min88;
	else
		f73 = min214;
	printf("ultimate frechet distance of zone 6 wrt zone 15=%f\n", f73);
	if (min89 < min229)
		f74 = min89;
	else
		f74 = min229;
	printf("ultimate frechet distance of zone 6 wrt zone 16=%f\n", f74);
	if (min32 < min38)
		f75 = min32;
	else
		f75 = min38;
	printf("ultimate frechet distance of zone 7 wrt zone 8=%f\n", f75);
	if (min109 < min128)
		f76 = min109;
	else
		f76 = min128;
	printf("ultimate frechet distance of zone 7 wrt zone 9=%f\n", f76);
	if (min33 < min140)
		f77 = min33;
	else
		f77 = min140;
	printf("ultimate frechet distance of zone 7 wrt zone 10=%f\n", f77);
	if (min110 < min155)
		f78 = min110;
	else
		f78 = min155;
	printf("ultimate frechet distance of zone 7 wrt zone 11=%f\n", f78);
	if (min111 < min170)
		f79 = min111;
	else
		f79 = min170;
	printf("ultimate frechet distance of zone 7 wrt zone 12=%f\n", f79);
	if (min34 < min185)
		f80 = min34;
	else
		f80 = min185;
	printf("ultimate frechet distance of zone 7 wrt zone 13=%f\n", f80);
	if (min35 < min200)
		f81 = min35;
	else
		f81 = min200;
	printf("ultimate frechet distance of zone 7 wrt zone 14=%f\n", f81);
	if (min112 < min215)
		f82 = min112;
	else
		f82 = min215;
	printf("ultimate frechet distance of zone 7 wrt zone 15=%f\n", f82);
	if (min113 < min230)
		f83 = min113;
	else
		f83 = min230;
	printf("ultimate frechet distance of zone 7 wrt zone 16=%f\n", f83);
	if (min118 < min129)
		f84 = min118;
	else
		f84 = min129;
	printf("ultimate frechet distance of zone 8 wrt zone 9=%f\n", f84);
	if (min119 < min141)
		f85 = min119;
	else
		f85 = min141;
	printf("ultimate frechet distance of zone 8 wrt zone 10=%f\n", f85);
	if (min120 < min156)
		f86 = min120;
	else
		f86 = min156;
	printf("ultimate frechet distance of zone 8 wrt zone 11=%f\n", f86);
	if (min121 < min171)
		f87 = min121;
	else
		f87 = min171;
	printf("ultimate frechet distance of zone 8 wrt zone 12=%f\n", f87);
	if (min39 < min186)
		f88 = min39;
	else
		f88 = min186;
	printf("ultimate frechet distance of zone 8 wrt zone 13=%f\n", f88);
	if (min40 < min201)
		f89 = min40;
	else
		f89 = min201;
	printf("ultimate frechet distance of zone 8 wrt zone 14=%f\n", f89);
	if (min122 < min216)
		f90 = min122;
	else
		f90 = min216;
	printf("ultimate frechet distance of zone 8 wrt zone 15=%f\n", f90);
	if (min123 < min231)
		f91 = min123;
	else
		f91 = min231;
	printf("ultimate frechet distance of zone 8 wrt zone 16=%f\n", f91);
	if (min43 < min142)
		f92 = min43;
	else
		f92 = min142;
	printf("ultimate frechet distance of zone 9 wrt zone 10=%f\n", f92);
	if (min44 < min157)
		f93 = min44;
	else
		f93 = min157;
	printf("ultimate frechet distance of zone 9 wrt zone 11=%f\n", f93);
	if (min45 < min172)
		f94 = min45;
	else
		f94 = min172;
	printf("ultimate frechet distance of zone 9 wrt zone 12=%f\n", f94);
	if (min130 < min187)
		f95 = min130;
	else
		f95 = min187;
	printf("ultimate frechet distance of zone 9 wrt zone 13=%f\n", f95);
	if (min131 < min202)
		f96 = min131;
	else
		f96 = min202;
	printf("ultimate frechet distance of zone 9 wrt zone 14=%f\n", f96);
	if (min132 < min217)
		f97 = min132;
	else
		f97 = min217;
	printf("ultimate frechet distance of zone 9 wrt zone 15=%f\n", f97);
	if (min133 < min232)
		f98 = min133;
	else
		f98 = min232;
	printf("ultimate frechet distance of zone 9 wrt zone 16=%f\n", f98);
	if (min143 < min158)
		f99 = min143;
	else
		f99 = min158;
	printf("ultimate frechet distance of zone 10 wrt zone 11=%f\n", f99);
	if (min144 < min173)
		f100 = min144;
	else
		f100 = min173;
	printf("ultimate frechet distance of zone 10 wrt zone 12=%f\n", f100);
	if (min145 < min188)
		f101 = min145;
	else
		f101 = min188;
	printf("ultimate frechet distance of zone 10 wrt zone 13=%f\n", f101);
	if (min146 < min203)
		f102 = min146;
	else
		f102 = min203;
	printf("ultimate frechet distance of zone 10 wrt zone 14=%f\n", f102);
	if (min147 < min218)
		f103 = min147;
	else
		f103 = min218;
	printf("ultimate frechet distance of zone 10 wrt zone 15=%f\n", f103);
	if (min148 < min233)
		f104 = min148;
	else
		f104 = min233;
	printf("ultimate frechet distance of zone 10 wrt zone 16=%f\n", f104);
	if (min159 < min174)
		f105 = min159;
	else
		f105 = min174;
	printf("ultimate frechet distance of zone 11 wrt zone 12=%f\n", f105);
	if (min160 < min189)
		f106 = min160;
	else
		f106 = min189;
	printf("ultimate frechet distance of zone 11 wrt zone 13=%f\n", f106);
	if (min161 < min204)
		f107 = min161;
	else
		f107 = min204;
	printf("ultimate frechet distance of zone 11 wrt zone 14=%f\n", f107);
	if (min162 < min219)
		f108 = min162;
	else
		f108 = min219;
	printf("ultimate frechet distance of zone 11 wrt zone 15=%f\n", f108);
	if (min163 < min234)
		f109 = min163;
	else
		f109 = min234;
	printf("ultimate frechet distance of zone 11 wrt zone 16=%f\n", f109);
	if (min175 < min190)
		f110 = min175;
	else
		f110 = min190;
	printf("ultimate frechet distance of zone 12 wrt zone 13=%f\n", f110);
	if (min178 < min205)
		f111 = min178;
	else
		f111 = min205;
	printf("ultimate frechet distance of zone 12 wrt zone 14=%f\n", f111);
	if (min176 < min220)
		f112 = min176;
	else
		f112 = min220;
	printf("ultimate frechet distance of zone 12 wrt zone 15=%f\n", f112);
	if (min177 < min235)
		f113 = min177;
	else
		f113 = min235;
	printf("ultimate frechet distance of zone 12 wrt zone 16=%f\n", f113);

	if (min191 < min206)
		f114 = min191;
	else
		f114 = min206;
	printf("ultimate frechet distance of zone 13 wrt zone 14=%f\n", f114);
	if (min192 < min221)
		f115 = min192;
	else
		f115 = min221;
	printf("ultimate frechet distance of zone 13 wrt zone 15=%f\n", f115);
	if (min193 < min236)
		f116 = min193;
	else
		f116 = min236;
	printf("ultimate frechet distance of zone 13 wrt zone 16=%f\n", f116);
	if (min207 < min222)
		f117 = min207;
	else
		f117 = min222;
	printf("ultimate frechet distance of zone 14 wrt zone 15=%f\n", f117);
	if (min208 < min237)
		f118 = min208;
	else
		f118 = min237;
	printf("ultimate frechet distance of zone 14 wrt zone 16=%f\n", f118);
	if (min223 < min238)
		f119 = min223;
	else
		f119 = min238;
	printf("ultimate frechet distance of zone 15 wrt zone 16=%f\n", f119);
	FILE* ptr;
	ptr = fopen("F:\\SPS Sir Project\\Frechet Distance\\FRECHETDAT\\Quadtree2_Final.dat", "a");
	fprintf(ptr, "\n%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,A", counter, f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40, f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60, f61, f62, f63, f64, f65, f66, f67, f68, f69, f70, f71, f72, f73, f74, f75, f76, f77, f78, f79, f80, f81, f82, f83, f84, f85, f86, f87, f88, f89, f90, f91, f92, f93, f94, f95, f96, f97, f98, f99, f100, f101, f102, f103, f104, f105, f106, f107, f108, f109, f110, f111, f112, f113, f114, f115, f116, f117, f118, f119);
	fclose(ptr);
}
