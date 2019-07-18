#include<stdio.h>
#include<stdlib.h>
#include<cv.h>
#include<cxcore.h>
#include<highgui.h>
#include<math.h>
void zonecalc(int, int, int, int[], int[]);
float frechet(int, int, int[], int[], int[], int[], int, int);
int counter = 0; int g = 0;
int z1x[11000], z2x[11000], z3x[11000], z4x[11000], z5x[11000], z6x[11000], z7x[11000], z8x[11000], z9x[11000], z10x[11000], z11x[11000], z12x[11000], z13x[100], z14x[100], z15x[100], z16x[100], z17x[100], z18x[100], z19x[100], z20x[100], z21x[100], z22x[100], z23x[100], z24x[100], z25x[100], z26x[100], z27x[100], z28x[100], z29x[100], z30x[100], z31x[100], z32x[100], z33x[100], z34x[100], z35x[100], z36x[100], z37x[100], z38x[100], z39x[100], z40x[100], z41x[100], z42x[100], z43x[100], z44x[100], z45x[100], z46x[100], z47x[100], z48x[100], z49x[100], z50x[100], z51x[100], z52x[100], z53x[100], z54x[100], z55x[100], z56x[100], z57x[100], z58x[100], z59x[100], z60x[100], z61x[100], z62x[100], z63x[100], z64x[100];
int z1y[11000], z2y[11000], z3y[11000], z4y[11000], z5y[11000], z6y[11000], z7y[11000], z8y[11000], z9y[11000], z10y[11000], z11y[11000], z12y[11000], z13y[100], z14y[100], z15y[100], z16y[100], z17y[100], z18y[100], z19y[100], z20y[100], z21y[100], z22y[100], z23y[100], z24y[100], z25y[100], z26y[100], z27y[100], z28y[100], z29y[100], z30y[100], z31y[100], z32y[100], z33y[100], z34y[100], z35y[100], z36y[100], z37y[100], z38y[100], z39y[100], z40y[100], z41y[100], z42y[100], z43y[100], z44y[100], z45y[100], z46y[100], z47y[100], z48y[100], z49y[100], z50y[100], z51y[100], z52y[100], z53y[100], z54y[100], z55y[100], z56y[100], z57y[100], z58y[100], z59y[100], z60y[100], z61y[100], z62y[100], z63y[100], z64y[100];
int z1c = 0, z2c = 0, z3c = 0, z4c = 0, z5c = 0, z6c = 0, z7c = 0, z8c = 0, z9c = 0, z10c = 0, z11c = 0, z12c = 0, z13c = 0, z14c = 0, z15c = 0, z16c = 0, z17c = 0, z18c = 0, z19c = 0, z20c = 0, z21c = 0, z22c = 0, z23c = 0, z24c = 0, z25c = 0, z26c = 0, z27c = 0, z28c = 0, z29c = 0, z30c = 0, z31c = 0, z32c = 0, z33c = 0, z34c = 0, z35c = 0, z36c = 0, z37c = 0, z38c = 0, z39c = 0, z40c = 0, z41c = 0, z42c = 0, z43c = 0, z44c = 0, z45c = 0, z46c = 0, z47c = 0, z48c = 0, z49c = 0, z50c = 0, z51c = 0, z52c = 0, z53c = 0, z54c = 0, z55c = 0, z56c = 0, z57c = 0, z58c = 0, z59c = 0, z60c = 0, z61c = 0, z62c = 0, z63c = 0, z64c = 0;
float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0, f32 = 0, f33 = 0, f34 = 0, f35 = 0, f36 = 0, f37 = 0, f38 = 0, f39 = 0, f40, f41 = 0, f42 = 0, f43 = 0, f44 = 0, f45 = 0, f46 = 0, f47 = 0, f48 = 0, f49 = 0, f50 = 0, f51 = 0, f52 = 0, f53 = 0, f54 = 0, f55 = 0, f56 = 0, f57 = 0, f58 = 0, f59 = 0, f60 = 0, f61 = 0, f62 = 0, f63 = 0, f64 = 0, f65 = 0, f66 = 0, f67 = 0, f68 = 0, f69 = 0, f70 = 0, f71 = 0, f72 = 0, f73 = 0, f74 = 0, f75 = 0, f76 = 0, f77 = 0, f78 = 0, f79 = 0, f80 = 0, f81 = 0, f82 = 0, f83 = 0, f84 = 0, f85 = 0, f86 = 0, f87 = 0, f88 = 0, f89 = 0, f90 = 0, f91 = 0, f92 = 0, f93 = 0, f94 = 0, f95 = 0, f96 = 0, f97 = 0, f98 = 0, f99 = 0, f100 = 0;
float f101 = 0, f102 = 0, f103 = 0, f104 = 0, f105 = 0, f106 = 0, f107 = 0, f108 = 0, f109 = 0, f110 = 0, f111 = 0, f112 = 0, f113 = 0, f114 = 0, f115 = 0, f116 = 0, f117 = 0, f118 = 0, f119 = 0, f120 = 0, f121 = 0, f122 = 0, f123 = 0, f124 = 0, f125 = 0, f126 = 0, f127 = 0, f128 = 0, f129 = 0, f130 = 0, f131 = 0, f132 = 0, f133 = 0, f134 = 0, f135 = 0, f136 = 0, f137 = 0, f138 = 0, f139 = 0, f140, f141 = 0, f142 = 0, f143 = 0, f144 = 0, f145 = 0, f146 = 0, f147 = 0, f148 = 0, f149 = 0, f150 = 0, f151 = 0, f152 = 0, f153 = 0, f154 = 0, f155 = 0, f156 = 0, f157 = 0, f158 = 0, f159 = 0, f160 = 0, f161 = 0, f162 = 0, f163 = 0, f164 = 0, f165 = 0, f166 = 0, f167 = 0, f168 = 0, f169 = 0, f170 = 0, f171 = 0, f172 = 0, f173 = 0, f174 = 0, f175 = 0, f176 = 0, f177 = 0, f178 = 0, f179 = 0, f180 = 0, f181 = 0, f182 = 0, f183 = 0, f184 = 0, f185 = 0, f186 = 0, f187 = 0, f188 = 0, f189 = 0, f190 = 0, f191 = 0, f192 = 0, f193 = 0, f194 = 0, f195 = 0, f196 = 0, f197 = 0, f198 = 0, f199 = 0, f200 = 0;
float f201 = 0, f202 = 0, f203 = 0, f204 = 0, f205 = 0, f206 = 0, f207 = 0, f208 = 0, f209 = 0, f210 = 0, f211 = 0, f212 = 0, f213 = 0, f214 = 0, f215 = 0, f216 = 0, f217 = 0, f218 = 0, f219 = 0, f220 = 0, f221 = 0, f222 = 0, f223 = 0, f224 = 0, f225 = 0, f226 = 0, f227 = 0, f228 = 0, f229 = 0, f230 = 0, f231 = 0, f232 = 0, f233 = 0, f234 = 0, f235 = 0, f236 = 0, f237 = 0, f238 = 0, f239 = 0, f240 = 0, f241 = 0, f242 = 0, f243 = 0, f244 = 0, f245 = 0, f246 = 0, f247 = 0, f248 = 0, f249 = 0, f250 = 0, f251 = 0, f252 = 0, f253 = 0, f254 = 0, f255 = 0, f256 = 0, f257 = 0, f258 = 0, f259 = 0, f260 = 0, f261 = 0, f262 = 0, f263 = 0, f264 = 0, f265 = 0, f266 = 0, f267 = 0, f268 = 0, f269 = 0, f270 = 0, f271 = 0, f272 = 0, f273 = 0, f274 = 0, f275 = 0, f276 = 0, f277 = 0, f278 = 0, f279 = 0, f280 = 0, f281 = 0, f282 = 0, f283 = 0, f284 = 0, f285 = 0, f286 = 0, f287 = 0, f288 = 0, f289 = 0, f290 = 0, f291 = 0, f292 = 0, f293 = 0, f294 = 0, f295 = 0, f296 = 0, f297 = 0, f298 = 0, f299 = 0, f300 = 0, f301 = 0, f302 = 0, f303 = 0, f304 = 0, f305 = 0, f306 = 0, f307 = 0, f308 = 0, f309 = 0, f310 = 0, f311 = 0, f312 = 0, f313 = 0, f314 = 0, f315 = 0, f316 = 0, f317 = 0, f318 = 0, f319 = 0, f320 = 0, f321 = 0, f322 = 0, f323 = 0, f324 = 0, f325 = 0, f326 = 0, f327 = 0, f328 = 0, f329 = 0, f330 = 0, f331 = 0, f332 = 0, f333 = 0, f334 = 0, f335 = 0, f336 = 0, f337 = 0, f338 = 0, f339 = 0, f340 = 0, f341 = 0, f342 = 0, f343 = 0, f344 = 0, f345 = 0, f346 = 0, f347 = 0, f348 = 0, f349 = 0, f350 = 0, f351 = 0, f352 = 0, f353 = 0, f354 = 0, f355 = 0, f356 = 0, f357 = 0, f358 = 0, f359 = 0, f360 = 0, f361 = 0, f362 = 0, f363 = 0, f364 = 0, f365 = 0, f366 = 0, f367 = 0, f368 = 0, f369 = 0, f370 = 0, f371 = 0, f372 = 0, f373 = 0, f374 = 0, f375 = 0, f376 = 0, f377 = 0, f378 = 0, f379 = 0, f380 = 0, f381 = 0, f382 = 0, f383 = 0, f384 = 0, f385 = 0, f386 = 0, f387 = 0, f388 = 0, f389 = 0, f390 = 0, f391 = 0, f392 = 0, f393 = 0, f394 = 0, f395 = 0, f396 = 0, f397 = 0, f398 = 0, f399 = 0, f400 = 0;
float f401 = 0, f402 = 0, f403 = 0, f404 = 0, f405 = 0, f406 = 0, f407 = 0, f408 = 0, f409 = 0, f410 = 0, f411 = 0, f412 = 0, f413 = 0, f414 = 0, f415 = 0, f416 = 0, f417 = 0, f418 = 0, f419 = 0, f420 = 0, f421 = 0, f422 = 0, f423 = 0, f424 = 0, f425 = 0, f426 = 0, f427 = 0, f428 = 0, f429 = 0, f430 = 0, f431 = 0, f432 = 0, f433 = 0, f434 = 0, f435 = 0, f436 = 0, f437 = 0, f438 = 0, f439 = 0, f440 = 0, f441 = 0, f442 = 0, f443 = 0, f444 = 0, f445 = 0, f446 = 0, f447 = 0, f448 = 0, f449 = 0, f450 = 0, f451 = 0, f452 = 0, f453 = 0, f454 = 0, f455 = 0, f456 = 0, f457 = 0, f458 = 0, f459 = 0, f460 = 0, f461 = 0, f462 = 0, f463 = 0, f464 = 0, f465 = 0, f466 = 0, f467 = 0, f468 = 0, f469 = 0, f470 = 0, f471 = 0, f472 = 0, f473 = 0, f474 = 0, f475 = 0, f476 = 0, f477 = 0, f478 = 0, f479 = 0, f480 = 0, f481 = 0, f482 = 0, f483 = 0, f484 = 0, f485 = 0, f486 = 0, f487 = 0, f488 = 0, f489 = 0, f490 = 0, f491 = 0, f492 = 0, f493 = 0, f494 = 0, f495 = 0, f496 = 0, f497 = 0, f498 = 0, f499 = 0, f500 = 0, f501 = 0, f502 = 0, f503 = 0, f504 = 0, f505 = 0, f506 = 0, f507 = 0, f508 = 0, f509 = 0, f510 = 0, f511 = 0, f512 = 0, f513 = 0, f514 = 0, f515 = 0, f516 = 0, f517 = 0, f518 = 0, f519 = 0, f520 = 0, f521 = 0, f522 = 0, f523 = 0, f524 = 0, f525 = 0, f526 = 0, f527 = 0, f528 = 0, f529 = 0, f530 = 0, f531 = 0, f532 = 0, f533 = 0, f534 = 0, f535 = 0, f536 = 0, f537 = 0, f538 = 0, f539 = 0, f540 = 0, f541 = 0, f542 = 0, f543 = 0, f544 = 0, f545 = 0, f546 = 0, f547 = 0, f548 = 0, f549 = 0, f550 = 0, f551 = 0, f552 = 0, f553 = 0, f554 = 0, f555 = 0, f556 = 0, f557 = 0, f558 = 0, f559 = 0, f560 = 0, f561 = 0, f562 = 0, f563 = 0, f564 = 0, f565 = 0, f566 = 0, f567 = 0, f568 = 0, f569 = 0, f570 = 0, f571 = 0, f572 = 0, f573 = 0, f574 = 0, f575 = 0, f576 = 0, f577 = 0, f578 = 0, f579 = 0, f580 = 0, f581 = 0, f582 = 0, f583 = 0, f584 = 0, f585 = 0, f586 = 0, f587 = 0, f588 = 0, f589 = 0, f590 = 0, f591 = 0, f592 = 0, f593 = 0, f594 = 0, f595 = 0, f596 = 0, f597 = 0, f598 = 0, f599 = 0, f600 = 0;
float f601 = 0, f602 = 0, f603 = 0, f604 = 0, f605 = 0, f606 = 0, f607 = 0, f608 = 0, f609 = 0, f610 = 0, f611 = 0, f612 = 0, f613 = 0, f614 = 0, f615 = 0, f616 = 0, f617 = 0, f618 = 0, f619 = 0, f620 = 0, f621 = 0, f622 = 0, f623 = 0, f624 = 0, f625 = 0, f626 = 0, f627 = 0, f628 = 0, f629 = 0, f630 = 0;

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

	for (var = 0; var < 300; var++)
	{
		float f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0, f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0, f25 = 0, f26 = 0, f27 = 0, f28 = 0, f29 = 0, f30 = 0, f31 = 0, f32 = 0, f33 = 0, f34 = 0, f35 = 0, f36 = 0, f37 = 0, f38 = 0, f39 = 0, f40, f41 = 0, f42 = 0, f43 = 0, f44 = 0, f45 = 0, f46 = 0, f47 = 0, f48 = 0, f49 = 0, f50 = 0, f51 = 0, f52 = 0, f53 = 0, f54 = 0, f55 = 0, f56 = 0, f57 = 0, f58 = 0, f59 = 0, f60 = 0, f61 = 0, f62 = 0, f63 = 0, f64 = 0, f65 = 0, f66 = 0, f67 = 0, f68 = 0, f69 = 0, f70 = 0, f71 = 0, f72 = 0, f73 = 0, f74 = 0, f75 = 0, f76 = 0, f77 = 0, f78 = 0, f79 = 0, f80 = 0, f81 = 0, f82 = 0, f83 = 0, f84 = 0, f85 = 0, f86 = 0, f87 = 0, f88 = 0, f89 = 0, f90 = 0, f91 = 0, f92 = 0, f93 = 0, f94 = 0, f95 = 0, f96 = 0, f97 = 0, f98 = 0, f99 = 0, f100 = 0;
		float f101 = 0, f102 = 0, f103 = 0, f104 = 0, f105 = 0, f106 = 0, f107 = 0, f108 = 0, f109 = 0, f110 = 0, f111 = 0, f112 = 0, f113 = 0, f114 = 0, f115 = 0, f116 = 0, f117 = 0, f118 = 0, f119 = 0, f120 = 0, f121 = 0, f122 = 0, f123 = 0, f124 = 0, f125 = 0, f126 = 0, f127 = 0, f128 = 0, f129 = 0, f130 = 0, f131 = 0, f132 = 0, f133 = 0, f134 = 0, f135 = 0, f136 = 0, f137 = 0, f138 = 0, f139 = 0, f140, f141 = 0, f142 = 0, f143 = 0, f144 = 0, f145 = 0, f146 = 0, f147 = 0, f148 = 0, f149 = 0, f150 = 0, f151 = 0, f152 = 0, f153 = 0, f154 = 0, f155 = 0, f156 = 0, f157 = 0, f158 = 0, f159 = 0, f160 = 0, f161 = 0, f162 = 0, f163 = 0, f164 = 0, f165 = 0, f166 = 0, f167 = 0, f168 = 0, f169 = 0, f170 = 0, f171 = 0, f172 = 0, f173 = 0, f174 = 0, f175 = 0, f176 = 0, f177 = 0, f178 = 0, f179 = 0, f180 = 0, f181 = 0, f182 = 0, f183 = 0, f184 = 0, f185 = 0, f186 = 0, f187 = 0, f188 = 0, f189 = 0, f190 = 0, f191 = 0, f192 = 0, f193 = 0, f194 = 0, f195 = 0, f196 = 0, f197 = 0, f198 = 0, f199 = 0, f200 = 0;
		float f201 = 0, f202 = 0, f203 = 0, f204 = 0, f205 = 0, f206 = 0, f207 = 0, f208 = 0, f209 = 0, f210 = 0, f211 = 0, f212 = 0, f213 = 0, f214 = 0, f215 = 0, f216 = 0, f217 = 0, f218 = 0, f219 = 0, f220 = 0, f221 = 0, f222 = 0, f223 = 0, f224 = 0, f225 = 0, f226 = 0, f227 = 0, f228 = 0, f229 = 0, f230 = 0, f231 = 0, f232 = 0, f233 = 0, f234 = 0, f235 = 0, f236 = 0, f237 = 0, f238 = 0, f239 = 0, f240 = 0, f241 = 0, f242 = 0, f243 = 0, f244 = 0, f245 = 0, f246 = 0, f247 = 0, f248 = 0, f249 = 0, f250 = 0, f251 = 0, f252 = 0, f253 = 0, f254 = 0, f255 = 0, f256 = 0, f257 = 0, f258 = 0, f259 = 0, f260 = 0, f261 = 0, f262 = 0, f263 = 0, f264 = 0, f265 = 0, f266 = 0, f267 = 0, f268 = 0, f269 = 0, f270 = 0, f271 = 0, f272 = 0, f273 = 0, f274 = 0, f275 = 0, f276 = 0, f277 = 0, f278 = 0, f279 = 0, f280 = 0, f281 = 0, f282 = 0, f283 = 0, f284 = 0, f285 = 0, f286 = 0, f287 = 0, f288 = 0, f289 = 0, f290 = 0, f291 = 0, f292 = 0, f293 = 0, f294 = 0, f295 = 0, f296 = 0, f297 = 0, f298 = 0, f299 = 0, f300 = 0, f301 = 0, f302 = 0, f303 = 0, f304 = 0, f305 = 0, f306 = 0, f307 = 0, f308 = 0, f309 = 0, f311 = 0, f312 = 0, f313 = 0, f314 = 0, f315 = 0, f316 = 0, f317 = 0, f318 = 0, f319 = 0, f320 = 0, f321 = 0, f322 = 0, f323 = 0, f324 = 0, f325 = 0, f326 = 0, f327 = 0, f328 = 0, f329 = 0, f330 = 0, f331 = 0, f332 = 0, f333 = 0, f334 = 0, f335 = 0, f336 = 0, f337 = 0, f338 = 0, f339 = 0, f340 = 0, f341 = 0, f342 = 0, f343 = 0, f344 = 0, f345 = 0, f346 = 0, f347 = 0, f348 = 0, f349 = 0, f350 = 0, f351 = 0, f352 = 0, f353 = 0, f354 = 0, f355 = 0, f356 = 0, f357 = 0, f358 = 0, f359 = 0, f360 = 0, f361 = 0, f362 = 0, f363 = 0, f364 = 0, f365 = 0, f366 = 0, f367 = 0, f368 = 0, f369 = 0, f370 = 0, f371 = 0, f372 = 0, f373 = 0, f374 = 0, f375 = 0, f376 = 0, f377 = 0, f378 = 0, f379 = 0, f380 = 0, f381 = 0, f382 = 0, f383 = 0, f384 = 0, f385 = 0, f386 = 0, f387 = 0, f388 = 0, f389 = 0, f390 = 0, f391 = 0, f392 = 0, f393 = 0, f394 = 0, f395 = 0, f396 = 0, f397 = 0, f398 = 0, f399 = 0, f400 = 0;
		float f401 = 0, f402 = 0, f403 = 0, f404 = 0, f405 = 0, f406 = 0, f407 = 0, f408 = 0, f409 = 0, f410 = 0, f411 = 0, f412 = 0, f413 = 0, f414 = 0, f415 = 0, f416 = 0, f417 = 0, f418 = 0, f419 = 0, f420 = 0, f421 = 0, f422 = 0, f423 = 0, f424 = 0, f425 = 0, f426 = 0, f427 = 0, f428 = 0, f429 = 0, f430 = 0, f431 = 0, f432 = 0, f433 = 0, f434 = 0, f435 = 0, f436 = 0, f437 = 0, f438 = 0, f439 = 0, f440 = 0, f441 = 0, f442 = 0, f443 = 0, f444 = 0, f445 = 0, f446 = 0, f447 = 0, f448 = 0, f449 = 0, f450 = 0, f451 = 0, f452 = 0, f453 = 0, f454 = 0, f455 = 0, f456 = 0, f457 = 0, f458 = 0, f459 = 0, f460 = 0, f461 = 0, f462 = 0, f463 = 0, f464 = 0, f465 = 0, f466 = 0, f467 = 0, f468 = 0, f469 = 0, f470 = 0, f471 = 0, f472 = 0, f473 = 0, f474 = 0, f475 = 0, f476 = 0, f477 = 0, f478 = 0, f479 = 0, f480 = 0, f481 = 0, f482 = 0, f483 = 0, f484 = 0, f485 = 0, f486 = 0, f487 = 0, f488 = 0, f489 = 0, f490 = 0, f491 = 0, f492 = 0, f493 = 0, f494 = 0, f495 = 0, f496 = 0, f497 = 0, f498 = 0, f499 = 0, f500 = 0, f501 = 0, f502 = 0, f503 = 0, f504 = 0, f505 = 0, f506 = 0, f507 = 0, f508 = 0, f509 = 0, f510 = 0, f511 = 0, f512 = 0, f513 = 0, f514 = 0, f515 = 0, f516 = 0, f517 = 0, f518 = 0, f519 = 0, f520 = 0, f521 = 0, f522 = 0, f523 = 0, f524 = 0, f525 = 0, f526 = 0, f527 = 0, f528 = 0, f529 = 0, f530 = 0, f531 = 0, f532 = 0, f533 = 0, f534 = 0, f535 = 0, f536 = 0, f537 = 0, f538 = 0, f539 = 0, f540 = 0, f541 = 0, f542 = 0, f543 = 0, f544 = 0, f545 = 0, f546 = 0, f547 = 0, f548 = 0, f549 = 0, f550 = 0, f551 = 0, f552 = 0, f553 = 0, f554 = 0, f555 = 0, f556 = 0, f557 = 0, f558 = 0, f559 = 0, f560 = 0, f561 = 0, f562 = 0, f563 = 0, f564 = 0, f565 = 0, f566 = 0, f567 = 0, f568 = 0, f569 = 0, f570 = 0, f571 = 0, f572 = 0, f573 = 0, f574 = 0, f575 = 0, f576 = 0, f577 = 0, f578 = 0, f579 = 0, f580 = 0, f581 = 0, f582 = 0, f583 = 0, f584 = 0, f585 = 0, f586 = 0, f587 = 0, f588 = 0, f589 = 0, f590 = 0, f591 = 0, f592 = 0, f593 = 0, f594 = 0, f595 = 0, f596 = 0, f597 = 0, f598 = 0, f599 = 0, f600 = 0;
		float f601 = 0, f602 = 0, f603 = 0, f604 = 0, f605 = 0, f606 = 0, f607 = 0, f608 = 0, f609 = 0, f610 = 0, f611 = 0, f612 = 0, f613 = 0, f614 = 0, f615 = 0, f616 = 0, f617 = 0, f618 = 0, f619 = 0, f620 = 0, f621 = 0, f622 = 0, f623 = 0, f624 = 0, f625 = 0, f626 = 0, f627 = 0, f628 = 0, f629 = 0, f630 = 0;
		int z1c = 0, z2c = 0, z3c = 0, z4c = 0, z5c = 0, z6c = 0, z7c = 0, z8c = 0, z9c = 0, z10c = 0, z11c = 0, z12c = 0, z13c = 0, z14c = 0, z15c = 0, z16c = 0, z17c = 0, z18c = 0, z19c = 0, z20c = 0, z21c = 0, z22c = 0, z23c = 0, z24c = 0, z25c = 0, z26c = 0, z27c = 0, z28c = 0, z29c = 0, z30c = 0, z31c = 0, z32c = 0, z33c = 0, z34c = 0, z35c = 0, z36c = 0, z37c = 0, z38c = 0, z39c = 0, z40c = 0, z41c = 0, z42c = 0, z43c = 0, z44c = 0, z45c = 0, z46c = 0, z47c = 0, z48c = 0, z49c = 0, z50c = 0, z51c = 0, z52c = 0, z53c = 0, z54c = 0, z55c = 0, z56c = 0, z57c = 0, z58c = 0, z59c = 0, z60c = 0, z61c = 0, z62c = 0, z63c = 0, z64c = 0;
		char ch[100]; g++;
		int i = 0, j = 0, n = 0, ro, k = 1, v = 0, x[11000], y[11000], z[11000], tempx[11000], tempy[11000];
		float vx[500], vy[500];
		float mx, my, cx, cy;
		float a = 0, b = 0, c = 0, d = 0;
		int ct = 0, count = 1, sq; int m;
		int minx, miny, maxx, maxy, tmx, tmy, u;
		//    float a=0,b=0,c=0,d=0;
		sprintf(r, "D:\\SPS Sir Project\\Frechet\\FRECHETDAT\\unit data\\YA\\normalized\\unit_scalled_coordinate%04d", var);
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


		for (i = 0; i <= sq; i++)
			printf("%f\t%f\n", vx[i], vy[i]);

		printf("Number of Co-ordinate Points: %d\n\n", n);

		ro = 0;
		for (i = 1; i <= sq; i++)
		{
			for (j = 1; j <= sq; j++)
			{
				v = 0; ro = 0;
				printf("Zone %d:\n", k);
				while (ro < n)
				{
					if ((x[ro] >= tmx && x[ro] < vx[i]) && (y[ro] >= tmy && y[ro] < vy[j]))
					{
						printf("( %d, %d )\n", x[ro], y[ro]);
						tempx[v] = x[ro]; tempy[v] = y[ro];
						ro++; v++;
					}
					else if ((x[ro] >= tmx && x[ro] <= vx[i]) && (y[ro] >= tmy && y[ro] <= vy[j]) && (i == sq) && (j == sq))
					{
						printf("( %d, %d )\n", x[ro], y[ro]);
						tempx[v] = x[ro]; tempy[v] = y[ro];
						ro++; v++;
					}
					else if ((x[ro] >= tmx && x[ro] < vx[i]) && (y[ro] >= tmy && y[ro] <= vy[j]) && (i != sq) && (j == sq))
					{
						printf("( %d, %d )\n", x[ro], y[ro]);
						tempx[v] = x[ro]; tempy[v] = y[ro];
						ro++; v++;
					}
					else if ((x[ro] >= tmx && x[ro] <= vx[i]) && (y[ro] >= tmy && y[ro] < vy[j]) && (i == sq) && (j != sq))
					{
						printf("( %d, %d )\n", x[ro], y[ro]);
						tempx[v] = x[ro]; tempy[v] = y[ro];
						ro++; v++;
					}
					else
						ro++;
				}
				printf("Number of elements in Zone %d: %d\n", k, v);
				printf("\n");
				tmy = vx[j];
				zonecalc(t, v, k, tempx, tempy);
				k++;
			}
			tmx = vx[i];
			tmy = miny;
		}
		cvNamedWindow("character", CV_WINDOW_AUTOSIZE);
		cvShowImage("character", img);
		//sprintf(ch,"%s.bmp",r);
		//cvSaveImage(ch,img,0);
		cvWaitKey(1);
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
	printf("*****************  %d *******************", zn);
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
	if (zn == 16)
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
			fv1 = frechet(z1, z5, z1x, z1y, z5x, z5y, z1c, z5c);
			fv2 = frechet(z5, z1, z5x, z5y, z1x, z1y, z5c, z1c);
			if (fv1 <= fv2) {
				f4 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z5, f4);
			}
			else {
				f4 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z5, f4);
			}
			fv1 = frechet(z1, z6, z1x, z1y, z6x, z6y, z1c, z6c);
			fv2 = frechet(z6, z1, z6x, z6y, z1x, z1y, z6c, z1c);
			if (fv1 <= fv2) {
				f5 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z6, f5);
			}
			else {
				f5 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z6, f5);
			}
			fv1 = frechet(z1, z7, z1x, z1y, z7x, z7y, z1c, z7c);
			fv2 = frechet(z7, z1, z7x, z7y, z1x, z1y, z7c, z1c);
			if (fv1 <= fv2) {
				f6 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z7, f6);
			}
			else {
				f6 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z7, f6);
			}
			fv1 = frechet(z1, z8, z1x, z1y, z8x, z8y, z1c, z8c);
			fv2 = frechet(z8, z1, z8x, z8y, z1x, z1y, z8c, z1c);
			if (fv1 <= fv2) {
				f7 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z8, f7);
			}
			else {
				f7 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z8, f7);
			}
			fv1 = frechet(z1, z9, z1x, z1y, z9x, z9y, z1c, z9c);
			fv2 = frechet(z9, z1, z9x, z9y, z1x, z1y, z9c, z1c);
			if (fv1 <= fv2) {
				f8 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z9, f8);
			}
			else {
				f8 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z9, f8);
			}
			fv1 = frechet(z1, z10, z1x, z1y, z10x, z10y, z1c, z10c);
			fv2 = frechet(z10, z1, z10x, z10y, z1x, z1y, z10c, z1c);
			if (fv1 <= fv2) {
				f9 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z10, f9);
			}
			else {
				f9 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z10, f9);
			}
			fv1 = frechet(z1, z11, z1x, z1y, z11x, z11y, z1c, z11c);
			fv2 = frechet(z11, z1, z11x, z11y, z1x, z1y, z11c, z1c);
			if (fv1 <= fv2) {
				f10 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z11, f10);
			}
			else {
				f10 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z11, f10);
			}
			fv1 = frechet(z1, z12, z1x, z1y, z12x, z12y, z1c, z12c);
			fv2 = frechet(z12, z1, z12x, z12y, z1x, z1y, z12c, z1c);
			if (fv1 <= fv2) {
				f11 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z12, f11);
			}
			else {
				f11 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z12, f11);
			}
			fv1 = frechet(z1, z13, z1x, z1y, z13x, z13y, z1c, z13c);
			fv2 = frechet(z13, z1, z13x, z13y, z1x, z1y, z13c, z1c);
			if (fv1 <= fv2) {
				f12 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z13, f12);
			}
			else {
				f12 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z13, f12);
			}
			fv1 = frechet(z1, z14, z1x, z1y, z14x, z14y, z1c, z14c);
			fv2 = frechet(z14, z1, z14x, z14y, z1x, z1y, z14c, z1c);
			if (fv1 <= fv2) {
				f13 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z14, f13);
			}
			else {
				f13 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z14, f13);
			}
			fv1 = frechet(z1, z15, z1x, z1y, z15x, z15y, z1c, z15c);
			fv2 = frechet(z15, z1, z15x, z15y, z1x, z1y, z15c, z1c);
			if (fv1 <= fv2) {
				f14 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z15, f14);
			}
			else {
				f14 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z15, f14);
			}
			fv1 = frechet(z1, z16, z1x, z1y, z16x, z16y, z1c, z16c);
			fv2 = frechet(z16, z1, z16x, z16y, z1x, z1y, z16c, z1c);
			if (fv1 <= fv2) {
				f15 = fv1;
				printf("Frechet distance between %d and %d is: %f", z1, z16, f15);
			}
			else {
				f15 = fv2;
				printf("Frechet distance between %d and %d is: %f", z1, z16, f15);
			}
			fv1 = frechet(z2, z3, z2x, z2y, z3x, z3y, z2c, z3c);
			fv2 = frechet(z3, z2, z3x, z3y, z2x, z2y, z3c, z2c);
			if (fv1 <= fv2) {
				f16 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z3, f16);
			}
			else {
				f16 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z3, f16);
			}
			fv1 = frechet(z2, z4, z2x, z2y, z4x, z4y, z2c, z4c);
			fv2 = frechet(z4, z2, z4x, z4y, z2x, z2y, z4c, z2c);
			if (fv1 <= fv2) {
				f17 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z4, f17);
			}
			else {
				f17 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z4, f17);
			}
			fv1 = frechet(z2, z5, z2x, z2y, z5x, z5y, z2c, z5c);
			fv2 = frechet(z5, z2, z5x, z5y, z2x, z2y, z5c, z2c);
			if (fv1 <= fv2) {
				f18 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z5, f18);
			}
			else {
				f18 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z5, f18);
			}
			fv1 = frechet(z2, z6, z2x, z2y, z6x, z6y, z2c, z6c);
			fv2 = frechet(z6, z2, z6x, z6y, z2x, z2y, z6c, z2c);
			if (fv1 <= fv2) {
				f19 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z6, f19);
			}
			else {
				f19 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z6, f19);
			}
			fv1 = frechet(z2, z7, z2x, z2y, z7x, z7y, z2c, z7c);
			fv2 = frechet(z7, z2, z7x, z7y, z2x, z2y, z7c, z2c);
			if (fv1 <= fv2) {
				f20 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z7, f20);
			}
			else {
				f20 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z7, f20);
			}
			fv1 = frechet(z2, z8, z2x, z2y, z8x, z8y, z2c, z8c);
			fv2 = frechet(z8, z2, z8x, z8y, z2x, z2y, z8c, z2c);
			if (fv1 <= fv2) {
				f21 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z8, f21);
			}
			else {
				f21 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z8, f21);
			}
			fv1 = frechet(z2, z9, z2x, z2y, z9x, z9y, z2c, z9c);
			fv2 = frechet(z9, z2, z9x, z9y, z2x, z2y, z9c, z2c);
			if (fv1 <= fv2) {
				f22 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z9, f22);
			}
			else {
				f22 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z9, f22);
			}
			fv1 = frechet(z2, z10, z2x, z2y, z10x, z10y, z2c, z10c);
			fv2 = frechet(z10, z2, z10x, z10y, z2x, z2y, z10c, z2c);
			if (fv1 <= fv2) {
				f23 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z10, f23);
			}
			else {
				f23 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z10, f9);
			}
			fv1 = frechet(z2, z11, z2x, z2y, z11x, z11y, z2c, z11c);
			fv2 = frechet(z11, z2, z11x, z11y, z2x, z2y, z11c, z2c);
			if (fv1 <= fv2) {
				f24 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z11, f24);
			}
			else {
				f24 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z11, f24);
			}
			fv1 = frechet(z2, z12, z2x, z2y, z12x, z12y, z2c, z12c);
			fv2 = frechet(z12, z2, z12x, z12y, z2x, z2y, z12c, z2c);
			if (fv1 <= fv2) {
				f25 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z12, f25);
			}
			else {
				f25 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z12, f25);
			}
			fv1 = frechet(z2, z13, z2x, z2y, z13x, z13y, z2c, z13c);
			fv2 = frechet(z13, z2, z13x, z13y, z2x, z2y, z13c, z2c);
			if (fv1 <= fv2) {
				f26 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z13, f26);
			}
			else {
				f26 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z13, f26);
			}
			fv1 = frechet(z2, z14, z2x, z2y, z14x, z14y, z2c, z14c);
			fv2 = frechet(z14, z2, z14x, z14y, z2x, z2y, z14c, z2c);
			if (fv1 <= fv2) {
				f27 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z14, f27);
			}
			else {
				f27 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z14, f27);
			}
			fv1 = frechet(z2, z15, z2x, z2y, z15x, z15y, z2c, z15c);
			fv2 = frechet(z15, z2, z15x, z15y, z2x, z2y, z15c, z2c);
			if (fv1 <= fv2) {
				f28 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z15, f28);
			}
			else {
				f28 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z15, f28);
			}
			fv1 = frechet(z2, z16, z2x, z2y, z16x, z16y, z2c, z16c);
			fv2 = frechet(z16, z2, z16x, z16y, z2x, z2y, z16c, z2c);
			if (fv1 <= fv2) {
				f29 = fv1;
				printf("Frechet distance between %d and %d is: %f", z2, z16, f29);
			}
			else {
				f29 = fv2;
				printf("Frechet distance between %d and %d is: %f", z2, z16, f29);
			}
			fv1 = frechet(z3, z4, z3x, z3y, z4x, z4y, z3c, z4c);
			fv2 = frechet(z4, z3, z4x, z4y, z3x, z3y, z4c, z3c);
			if (fv1 <= fv2) {
				f30 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z4, f30);
			}
			else {
				f30 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z4, f30);
			}
			fv1 = frechet(z3, z5, z3x, z3y, z5x, z5y, z3c, z5c);
			fv2 = frechet(z5, z3, z5x, z5y, z3x, z3y, z5c, z3c);
			if (fv1 <= fv2) {
				f31 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z5, f31);
			}
			else {
				f31 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z5, f31);
			}
			fv1 = frechet(z3, z6, z3x, z3y, z6x, z6y, z3c, z6c);
			fv2 = frechet(z6, z3, z6x, z6y, z3x, z3y, z6c, z3c);
			if (fv1 <= fv2) {
				f32 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z6, f32);
			}
			else {
				f32 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z6, f32);
			}
			fv1 = frechet(z3, z7, z3x, z3y, z7x, z7y, z3c, z7c);
			fv2 = frechet(z7, z3, z7x, z7y, z3x, z3y, z7c, z3c);
			if (fv1 <= fv2) {
				f33 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z7, f33);
			}
			else {
				f33 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z7, f33);
			}
			fv1 = frechet(z3, z8, z3x, z3y, z8x, z8y, z3c, z8c);
			fv2 = frechet(z8, z3, z8x, z8y, z3x, z3y, z8c, z3c);
			if (fv1 <= fv2) {
				f34 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z8, f34);
			}
			else {
				f34 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z8, f34);
			}
			fv1 = frechet(z3, z9, z3x, z3y, z9x, z9y, z3c, z9c);
			fv2 = frechet(z9, z3, z9x, z9y, z3x, z3y, z9c, z3c);
			if (fv1 <= fv2) {
				f35 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z9, f35);
			}
			else {
				f35 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z9, f35);
			}
			fv1 = frechet(z3, z10, z3x, z3y, z10x, z10y, z3c, z10c);
			fv2 = frechet(z10, z3, z10x, z10y, z3x, z3y, z10c, z3c);
			if (fv1 <= fv2) {
				f36 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z10, f36);
			}
			else {
				f36 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z10, f36);
			}
			fv1 = frechet(z3, z11, z3x, z3y, z11x, z11y, z3c, z11c);
			fv2 = frechet(z11, z3, z11x, z11y, z3x, z3y, z11c, z3c);
			if (fv1 <= fv2) {
				f37 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z11, f37);
			}
			else {
				f37 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z11, f37);
			}
			fv1 = frechet(z3, z12, z3x, z3y, z12x, z12y, z3c, z12c);
			fv2 = frechet(z12, z3, z12x, z12y, z3x, z3y, z12c, z3c);
			if (fv1 <= fv2) {
				f38 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z12, f38);
			}
			else {
				f38 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z12, f38);
			}
			fv1 = frechet(z3, z13, z3x, z3y, z13x, z13y, z3c, z13c);
			fv2 = frechet(z13, z3, z13x, z13y, z3x, z3y, z13c, z3c);
			if (fv1 <= fv2) {
				f39 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z13, f39);
			}
			else {
				f39 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z13, f39);
			}
			fv1 = frechet(z3, z14, z3x, z3y, z14x, z14y, z3c, z14c);
			fv2 = frechet(z14, z3, z14x, z14y, z3x, z3y, z14c, z3c);
			if (fv1 <= fv2) {
				f40 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z14, f40);
			}
			else {
				f40 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z14, f40);
			}
			fv1 = frechet(z3, z15, z3x, z3y, z15x, z15y, z3c, z15c);
			fv2 = frechet(z15, z3, z15x, z15y, z3x, z3y, z15c, z3c);
			if (fv1 <= fv2) {
				f41 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z15, f41);
			}
			else {
				f41 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z15, f41);
			}
			fv1 = frechet(z3, z16, z3x, z3y, z16x, z16y, z3c, z16c);
			fv2 = frechet(z16, z3, z16x, z16y, z3x, z3y, z16c, z3c);
			if (fv1 <= fv2) {
				f42 = fv1;
				printf("Frechet distance between %d and %d is: %f", z3, z16, f42);
			}
			else {
				f42 = fv2;
				printf("Frechet distance between %d and %d is: %f", z3, z16, f42);
			}
			fv1 = frechet(z4, z5, z4x, z4y, z5x, z5y, z4c, z5c);
			fv2 = frechet(z5, z4, z5x, z5y, z4x, z4y, z5c, z4c);
			if (fv1 <= fv2)
				f43 = fv1;
			else
				f43 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z5, f43);
			fv1 = frechet(z4, z6, z4x, z4y, z6x, z6y, z4c, z6c);
			fv2 = frechet(z6, z4, z6x, z6y, z4x, z4y, z6c, z4c);
			if (fv1 <= fv2)
				f44 = fv1;
			else
				f44 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z6, f44);
			fv1 = frechet(z4, z7, z4x, z4y, z7x, z7y, z4c, z7c);
			fv2 = frechet(z7, z4, z7x, z7y, z4x, z4y, z7c, z4c);
			if (fv1 <= fv2)
				f45 = fv1;
			else
				f45 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z7, f45);
			fv1 = frechet(z4, z8, z4x, z4y, z8x, z8y, z4c, z8c);
			fv2 = frechet(z8, z4, z8x, z8y, z4x, z4y, z8c, z4c);
			if (fv1 <= fv2)
				f46 = fv1;
			else
				f46 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z8, f46);
			fv1 = frechet(z4, z9, z4x, z4y, z9x, z9y, z4c, z9c);
			fv2 = frechet(z9, z4, z9x, z9y, z4x, z4y, z9c, z4c);
			if (fv1 <= fv2)
				f47 = fv1;
			else
				f47 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z9, f47);
			fv1 = frechet(z4, z10, z4x, z4y, z10x, z10y, z4c, z10c);
			fv2 = frechet(z10, z4, z10x, z10y, z4x, z4y, z10c, z4c);
			if (fv1 <= fv2)
				f48 = fv1;
			else
				f48 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z10, f48);
			fv1 = frechet(z4, z11, z4x, z4y, z11x, z11y, z4c, z11c);
			fv2 = frechet(z11, z4, z11x, z11y, z4x, z4y, z11c, z4c);
			if (fv1 <= fv2)
				f49 = fv1;
			else
				f49 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z11, f49);
			fv1 = frechet(z4, z12, z4x, z4y, z12x, z12y, z4c, z12c);
			fv2 = frechet(z12, z4, z12x, z12y, z4x, z4y, z12c, z4c);
			if (fv1 <= fv2)
				f50 = fv1;
			else
				f50 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z12, f50);
			fv1 = frechet(z4, z13, z4x, z4y, z13x, z13y, z4c, z13c);
			fv2 = frechet(z13, z4, z13x, z13y, z4x, z4y, z13c, z4c);
			if (fv1 <= fv2)
				f51 = fv1;
			else
				f51 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z13, f51);
			fv1 = frechet(z4, z14, z4x, z4y, z14x, z14y, z4c, z14c);
			fv2 = frechet(z14, z4, z14x, z14y, z4x, z4y, z14c, z4c);
			if (fv1 <= fv2)
				f52 = fv1;
			else
				f52 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z14, f52);
			fv1 = frechet(z4, z15, z4x, z4y, z15x, z15y, z4c, z15c);
			fv2 = frechet(z15, z4, z15x, z15y, z4x, z4y, z15c, z4c);
			if (fv1 <= fv2)
				f53 = fv1;
			else
				f53 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z15, f53);
			fv1 = frechet(z4, z16, z4x, z4y, z16x, z16y, z4c, z16c);
			fv2 = frechet(z16, z4, z16x, z16y, z4x, z4y, z16c, z4c);
			if (fv1 <= fv2)
				f54 = fv1;
			else
				f54 = fv2;
			printf("Frechet distance between %d and %d is: %f", z4, z16, f54);
			fv1 = frechet(z5, z6, z5x, z5y, z6x, z6y, z5c, z6c);
			fv2 = frechet(z6, z5, z6x, z6y, z5x, z5y, z6c, z5c);
			if (fv1 <= fv2)
				f55 = fv1;
			else
				f55 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z6, f55);
			fv1 = frechet(z5, z7, z5x, z5y, z7x, z7y, z5c, z7c);
			fv2 = frechet(z7, z5, z7x, z7y, z5x, z5y, z7c, z5c);
			if (fv1 <= fv2)
				f56 = fv1;
			else
				f56 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z7, f56);
			fv1 = frechet(z5, z8, z5x, z5y, z8x, z8y, z5c, z8c);
			fv2 = frechet(z8, z5, z8x, z8y, z5x, z5y, z8c, z5c);
			if (fv1 <= fv2)
				f57 = fv1;
			else
				f57 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z8, f57);
			fv1 = frechet(z5, z9, z5x, z5y, z9x, z9y, z5c, z9c);
			fv2 = frechet(z9, z3, z9x, z9y, z5x, z5y, z9c, z5c);
			if (fv1 <= fv2)
				f58 = fv1;
			else
				f58 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z9, f58);
			fv1 = frechet(z5, z10, z5x, z5y, z10x, z10y, z5c, z10c);
			fv2 = frechet(z10, z5, z10x, z10y, z5x, z5y, z10c, z5c);
			if (fv1 <= fv2)
				f59 = fv1;
			else
				f59 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z10, f59);
			fv1 = frechet(z5, z11, z5x, z5y, z11x, z11y, z5c, z11c);
			fv2 = frechet(z11, z5, z11x, z11y, z5x, z5y, z11c, z5c);
			if (fv1 <= fv2)
				f60 = fv1;
			else
				f60 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z11, f60);
			fv1 = frechet(z5, z12, z5x, z5y, z12x, z12y, z5c, z12c);
			fv2 = frechet(z12, z5, z12x, z12y, z5x, z5y, z12c, z5c);
			if (fv1 <= fv2)
				f61 = fv1;
			else
				f61 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z12, f61);
			fv1 = frechet(z5, z13, z5x, z5y, z13x, z13y, z5c, z13c);
			fv2 = frechet(z13, z5, z13x, z13y, z5x, z5y, z13c, z5c);
			if (fv1 <= fv2)
				f62 = fv1;
			else
				f62 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z13, f62);
			fv1 = frechet(z5, z14, z5x, z5y, z14x, z14y, z5c, z14c);
			fv2 = frechet(z14, z5, z14x, z14y, z5x, z5y, z14c, z5c);
			if (fv1 <= fv2)
				f63 = fv1;
			else
				f63 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z14, f63);
			fv1 = frechet(z5, z15, z5x, z5y, z15x, z15y, z5c, z15c);
			fv2 = frechet(z15, z5, z15x, z15y, z5x, z5y, z15c, z5c);
			if (fv1 <= fv2)
				f64 = fv1;
			else
				f64 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z15, f64);
			fv1 = frechet(z5, z16, z5x, z5y, z16x, z16y, z5c, z16c);
			fv2 = frechet(z16, z5, z16x, z16y, z5x, z5y, z16c, z5c);
			if (fv1 <= fv2)
				f65 = fv1;
			else
				f65 = fv2;
			printf("Frechet distance between %d and %d is: %f", z5, z16, f65);
			printf("\n");
			if (z6c != 0 && z7c != 0)
			{
				fv1 = frechet(z6, z7, z6x, z6y, z7x, z7y, z6c, z7c);//printf("fv1_test=%f",fv1);
				fv2 = frechet(z7, z6, z7x, z7y, z6x, z6y, z7c, z6c);//printf("fv2_test=%f",fv2);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			//printf("\n\n%f",frechet(z6, z7, z6x,z6y, z7x, z7y, z6c, z7c ));
			//printf("\n\n%f",frechet(z7, z6, z7x,z7y, z6x, z6y, z7c, z6c ));
			if (fv1 <= fv2)


				f66 = fv1;//printf("f66_test=%d\n",f66);}
			else
				f66 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z7, f66); printf("\n");
			if (z6c != 0 && z8c != 0)
			{

				fv1 = frechet(z6, z8, z6x, z6y, z8x, z8y, z6c, z8c);
				fv2 = frechet(z8, z6, z8x, z8y, z6x, z6y, z8c, z6c);
			}
			else { fv1 = 0; fv2 = 0; }
			if (fv1 <= fv2)
				f67 = fv1;
			else
				f67 = fv2;
			printf("Frechet distance between %d and %d is: %f", z6, z8, f67); printf("\n");
			if (z6c != 0 && z9c != 0)
			{
				fv1 = frechet(z6, z9, z6x, z6y, z9x, z9y, z6c, z9c);
				fv2 = frechet(z9, z6, z9x, z9y, z6x, z6y, z9c, z6c);
			}
			else {
				fv1 = 0;
				fv2 = 0;
			}
			if (fv1 <= fv2)
				f68 = fv1;
			else
				f68 = fv2;
			printf("Frechet distance between %d and %d is: %f", z6, z9, f68);
			fv1 = frechet(z6, z10, z6x, z6y, z10x, z10y, z6c, z10c);
			fv2 = frechet(z10, z6, z10x, z10y, z6x, z6y, z10c, z6c);
			if (fv1 <= fv2)
				f69 = fv1;
			else
				f69 = fv2;
			printf("Frechet distance between %d and %d is: %f", z6, z10, f69);
			fv1 = frechet(z6, z11, z6x, z6y, z11x, z11y, z6c, z11c);
			fv2 = frechet(z11, z6, z11x, z11y, z6x, z6y, z11c, z6c);
			if (fv1 <= fv2)
				f70 = fv1;
			else
				f70 = fv2;
			printf("Frechet distance between %d and %d is: %f", z6, z11, f70);
			fv1 = frechet(z6, z12, z6x, z6y, z12x, z12y, z6c, z12c);
			fv2 = frechet(z12, z6, z12x, z12y, z6x, z6y, z12c, z6c);
			if (fv1 <= fv2)
				f71 = fv1;
			else
				f71 = fv2;
			printf("Frechet distance between %d and %d is: %f", z6, z12, f71);
			fv1 = frechet(z6, z13, z6x, z6y, z13x, z13y, z6c, z13c);
			fv2 = frechet(z13, z6, z13x, z13y, z6x, z6y, z13c, z6c);
			if (fv1 <= fv2)
				f72 = fv1;
			else
				f72 = fv2;
			printf("Frechet distance between %d and %d is: %f", z6, z13, f72);
			fv1 = frechet(z6, z14, z6x, z6y, z14x, z14y, z6c, z14c);
			fv2 = frechet(z14, z6, z14x, z14y, z6x, z6y, z14c, z6c);
			if (fv1 <= fv2)
				f73 = fv1;
			else
				f73 = fv2;
			printf("Frechet distance between %d and %d is: %f", z6, z14, f73);
			fv1 = frechet(z6, z15, z6x, z6y, z15x, z15y, z6c, z15c);
			fv2 = frechet(z15, z6, z15x, z15y, z6x, z6y, z15c, z6c);
			if (fv1 <= fv2)
				f74 = fv1;
			else
				f74 = fv2;
			printf("Frechet distance between %d and %d is: %f", z6, z15, f74);
			fv1 = frechet(z6, z16, z6x, z6y, z16x, z16y, z6c, z16c);
			fv2 = frechet(z16, z6, z16x, z16y, z6x, z6y, z16c, z6c);
			if (fv1 <= fv2)
				f75 = fv1;
			else
				f75 = fv2;
			printf("Frechet distance between %d and %d is: %f", z6, z16, f75);
			fv1 = frechet(z7, z8, z7x, z7y, z8x, z8y, z7c, z8c);
			fv2 = frechet(z8, z7, z8x, z8y, z7x, z7y, z8c, z7c);
			if (fv1 <= fv2)
				f76 = fv1;
			else
				f76 = fv2;
			printf("Frechet distance between %d and %d is: %f", z7, z8, f76);
			fv1 = frechet(z7, z9, z7x, z7y, z9x, z9y, z7c, z9c);
			fv2 = frechet(z9, z3, z9x, z9y, z7x, z7y, z9c, z7c);
			if (fv1 <= fv2)
				f77 = fv1;
			else
				f77 = fv2;
			printf("Frechet distance between %d and %d is: %f", z7, z9, f77);
			fv1 = frechet(z7, z10, z7x, z7y, z10x, z10y, z7c, z10c);
			fv2 = frechet(z10, z7, z10x, z10y, z7x, z7y, z10c, z7c);
			if (fv1 <= fv2)
				f78 = fv1;
			else
				f78 = fv2;
			printf("Frechet distance between %d and %d is: %f", z7, z10, f78);
			fv1 = frechet(z7, z11, z7x, z7y, z11x, z11y, z7c, z11c);
			fv2 = frechet(z11, z7, z11x, z11y, z7x, z7y, z11c, z7c);
			if (fv1 <= fv2)
				f79 = fv1;
			else
				f79 = fv2;
			printf("Frechet distance between %d and %d is: %f", z7, z11, f79);
			fv1 = frechet(z7, z12, z7x, z7y, z12x, z12y, z7c, z12c);
			fv2 = frechet(z12, z7, z12x, z12y, z7x, z7y, z12c, z7c);
			if (fv1 <= fv2)
				f80 = fv1;
			else
				f80 = fv2;
			printf("Frechet distance between %d and %d is: %f", z7, z12, f80);
			fv1 = frechet(z7, z13, z7x, z7y, z13x, z13y, z7c, z13c);
			fv2 = frechet(z13, z7, z13x, z13y, z7x, z7y, z13c, z7c);
			if (fv1 <= fv2)
				f81 = fv1;
			else
				f81 = fv2;
			printf("Frechet distance between %d and %d is: %f", z7, z13, f81);
			fv1 = frechet(z7, z14, z7x, z7y, z14x, z14y, z7c, z14c);
			fv2 = frechet(z14, z7, z14x, z14y, z7x, z7y, z14c, z7c);
			if (fv1 <= fv2)
				f82 = fv1;
			else
				f82 = fv2;
			printf("Frechet distance between %d and %d is: %f", z7, z14, f82);
			fv1 = frechet(z7, z15, z7x, z7y, z15x, z15y, z7c, z15c);
			fv2 = frechet(z15, z7, z15x, z15y, z7x, z7y, z15c, z7c);
			if (fv1 <= fv2)
				f83 = fv1;
			else
				f83 = fv2;
			printf("Frechet distance between %d and %d is: %f", z7, z15, f83);
			fv1 = frechet(z7, z16, z7x, z7y, z16x, z16y, z7c, z16c);
			fv2 = frechet(z16, z7, z16x, z16y, z7x, z7y, z16c, z7c);
			if (fv1 <= fv2)
				f84 = fv1;
			else
				f84 = fv2;
			printf("Frechet distance between %d and %d is: %f", z7, z16, f84);
			fv1 = frechet(z8, z9, z8x, z8y, z9x, z9y, z8c, z9c);
			fv2 = frechet(z9, z3, z9x, z9y, z8x, z8y, z9c, z8c);
			if (fv1 <= fv2)
				f85 = fv1;
			else
				f85 = fv2;
			printf("Frechet distance between %d and %d is: %f", z8, z9, f85);
			fv1 = frechet(z8, z10, z8x, z8y, z10x, z10y, z8c, z10c);
			fv2 = frechet(z10, z8, z10x, z10y, z8x, z8y, z10c, z8c);
			if (fv1 <= fv2)
				f86 = fv1;
			else
				f86 = fv2;
			printf("Frechet distance between %d and %d is: %f", z8, z10, f86);
			fv1 = frechet(z8, z11, z8x, z8y, z11x, z11y, z8c, z11c);
			fv2 = frechet(z11, z8, z11x, z11y, z8x, z8y, z11c, z8c);
			if (fv1 <= fv2)
				f87 = fv1;
			else
				f87 = fv2;
			printf("Frechet distance between %d and %d is: %f", z8, z11, f87);
			fv1 = frechet(z8, z12, z8x, z8y, z12x, z12y, z8c, z12c);
			fv2 = frechet(z12, z8, z12x, z12y, z8x, z8y, z12c, z8c);
			if (fv1 <= fv2)
				f88 = fv1;
			else
				f88 = fv2;
			printf("Frechet distance between %d and %d is: %f", z8, z12, f88);
			fv1 = frechet(z8, z13, z8x, z8y, z13x, z13y, z8c, z13c);
			fv2 = frechet(z13, z8, z13x, z13y, z8x, z8y, z13c, z8c);
			if (fv1 <= fv2)
				f89 = fv1;
			else
				f89 = fv2;
			printf("Frechet distance between %d and %d is: %f", z8, z13, f89);
			fv1 = frechet(z8, z14, z8x, z8y, z14x, z14y, z8c, z14c);
			fv2 = frechet(z14, z8, z14x, z14y, z8x, z8y, z14c, z8c);
			if (fv1 <= fv2)
				f90 = fv1;
			else
				f90 = fv2;
			printf("Frechet distance between %d and %d is: %f", z8, z14, f90);
			fv1 = frechet(z8, z15, z8x, z8y, z15x, z15y, z8c, z15c);
			fv2 = frechet(z15, z8, z15x, z15y, z8x, z8y, z15c, z8c);
			if (fv1 <= fv2)
				f91 = fv1;
			else
				f91 = fv2;
			printf("Frechet distance between %d and %d is: %f", z8, z15, f91);
			fv1 = frechet(z8, z16, z8x, z8y, z16x, z16y, z8c, z16c);
			fv2 = frechet(z16, z8, z16x, z16y, z8x, z8y, z16c, z8c);
			if (fv1 <= fv2)
				f92 = fv1;
			else
				f92 = fv2;
			printf("Frechet distance between %d and %d is: %f", z8, z16, f92);
			fv1 = frechet(z9, z10, z9x, z9y, z10x, z10y, z9c, z10c);
			fv2 = frechet(z10, z9, z10x, z10y, z9x, z9y, z10c, z9c);
			if (fv1 <= fv2)
				f93 = fv1;
			else
				f93 = fv2;
			printf("Frechet distance between %d and %d is: %f", z9, z10, f93);
			fv1 = frechet(z9, z11, z9x, z9y, z11x, z11y, z9c, z11c);
			fv2 = frechet(z11, z9, z11x, z11y, z9x, z9y, z11c, z9c);
			if (fv1 <= fv2)
				f94 = fv1;
			else
				f94 = fv2;
			printf("Frechet distance between %d and %d is: %f", z9, z11, f94);
			fv1 = frechet(z9, z12, z9x, z9y, z12x, z12y, z9c, z12c);
			fv2 = frechet(z12, z9, z12x, z12y, z9x, z9y, z12c, z9c);
			if (fv1 <= fv2)
				f95 = fv1;
			else
				f95 = fv2;
			printf("Frechet distance between %d and %d is: %f", z9, z12, f95);
			fv1 = frechet(z9, z13, z9x, z9y, z13x, z13y, z9c, z13c);
			fv2 = frechet(z13, z9, z13x, z13y, z9x, z9y, z13c, z9c);
			if (fv1 <= fv2)
				f96 = fv1;
			else
				f96 = fv2;
			printf("Frechet distance between %d and %d is: %f", z9, z13, f96);
			fv1 = frechet(z9, z14, z9x, z9y, z14x, z14y, z9c, z14c);
			fv2 = frechet(z14, z9, z14x, z14y, z9x, z9y, z14c, z9c);
			if (fv1 <= fv2)
				f97 = fv1;
			else
				f97 = fv2;
			printf("Frechet distance between %d and %d is: %f", z9, z14, f97);
			fv1 = frechet(z9, z15, z9x, z9y, z15x, z15y, z9c, z15c);
			fv2 = frechet(z15, z9, z15x, z15y, z9x, z9y, z15c, z9c);
			if (fv1 <= fv2)
				f98 = fv1;
			else
				f98 = fv2;
			printf("Frechet distance between %d and %d is: %f", z9, z15, f98);
			fv1 = frechet(z9, z16, z9x, z9y, z16x, z16y, z9c, z16c);
			fv2 = frechet(z16, z9, z16x, z16y, z9x, z9y, z16c, z9c);
			if (fv1 <= fv2)
				f99 = fv1;
			else
				f99 = fv2;
			printf("Frechet distance between %d and %d is: %f", z9, z16, f99);
			fv1 = frechet(z10, z11, z10x, z10y, z11x, z11y, z10c, z11c);
			fv2 = frechet(z11, z10, z11x, z11y, z10x, z10y, z11c, z10c);
			if (fv1 <= fv2)
				f100 = fv1;
			else
				f100 = fv2;
			printf("Frechet distance between %d and %d is: %f", z10, z11, f100);
			fv1 = frechet(z10, z12, z10x, z10y, z12x, z12y, z10c, z12c);
			fv2 = frechet(z12, z10, z12x, z12y, z10x, z10y, z12c, z10c);
			if (fv1 <= fv2)
				f101 = fv1;
			else
				f101 = fv2;
			printf("Frechet distance between %d and %d is: %f", z10, z12, f101);
			fv1 = frechet(z10, z13, z10x, z10y, z13x, z13y, z10c, z13c);
			fv2 = frechet(z13, z10, z13x, z13y, z10x, z10y, z13c, z10c);
			if (fv1 <= fv2)
				f102 = fv1;
			else
				f102 = fv2;
			printf("Frechet distance between %d and %d is: %f", z10, z13, f102);
			fv1 = frechet(z10, z14, z10x, z10y, z14x, z14y, z10c, z14c);
			fv2 = frechet(z14, z10, z14x, z14y, z10x, z10y, z14c, z10c);
			if (fv1 <= fv2)
				f103 = fv1;
			else
				f103 = fv2;
			printf("Frechet distance between %d and %d is: %f", z10, z14, f103);
			fv1 = frechet(z10, z15, z10x, z10y, z15x, z15y, z10c, z15c);
			fv2 = frechet(z15, z10, z15x, z15y, z10x, z10y, z15c, z10c);
			if (fv1 <= fv2)
				f104 = fv1;
			else
				f104 = fv2;
			printf("Frechet distance between %d and %d is: %f", z10, z15, f104);
			fv1 = frechet(z10, z16, z10x, z10y, z16x, z16y, z10c, z16c);
			fv2 = frechet(z16, z10, z16x, z16y, z10x, z10y, z16c, z10c);
			if (fv1 <= fv2)
				f105 = fv1;
			else
				f105 = fv2;
			printf("Frechet distance between %d and %d is: %f", z10, z16, f105);
			fv1 = frechet(z11, z12, z11x, z11y, z12x, z12y, z11c, z12c);
			fv2 = frechet(z12, z11, z12x, z12y, z11x, z11y, z12c, z11c);
			if (fv1 <= fv2)
				f106 = fv1;
			else
				f106 = fv2;
			printf("Frechet distance between %d and %d is: %f", z11, z12, f106);
			fv1 = frechet(z11, z13, z11x, z11y, z13x, z13y, z11c, z13c);
			fv2 = frechet(z13, z11, z13x, z13y, z11x, z11y, z13c, z11c);
			if (fv1 <= fv2)
				f107 = fv1;
			else
				f107 = fv2;
			printf("Frechet distance between %d and %d is: %f", z11, z13, f107);
			fv1 = frechet(z11, z14, z11x, z11y, z14x, z14y, z11c, z14c);
			fv2 = frechet(z14, z11, z14x, z14y, z11x, z11y, z14c, z11c);
			if (fv1 <= fv2)
				f108 = fv1;
			else
				f108 = fv2;
			printf("Frechet distance between %d and %d is: %f", z11, z14, f108);
			fv1 = frechet(z11, z15, z11x, z11y, z15x, z15y, z11c, z15c);
			fv2 = frechet(z15, z11, z15x, z15y, z11x, z11y, z15c, z11c);
			if (fv1 <= fv2)
				f109 = fv1;
			else
				f109 = fv2;
			printf("Frechet distance between %d and %d is: %f", z11, z15, f109);
			fv1 = frechet(z11, z16, z11x, z11y, z16x, z16y, z11c, z16c);
			fv2 = frechet(z16, z11, z16x, z16y, z11x, z11y, z16c, z11c);
			if (fv1 <= fv2)
				f110 = fv1;
			else
				f110 = fv2;
			printf("Frechet distance between %d and %d is: %f", z11, z16, f110);
			fv1 = frechet(z12, z13, z12x, z12y, z13x, z13y, z12c, z13c);
			fv2 = frechet(z13, z12, z13x, z13y, z12x, z12y, z13c, z12c);
			if (fv1 <= fv2)
				f111 = fv1;
			else
				f111 = fv2;
			printf("Frechet distance between %d and %d is: %f", z12, z13, f111);
			fv1 = frechet(z12, z14, z12x, z12y, z14x, z14y, z12c, z14c);
			fv2 = frechet(z14, z12, z14x, z14y, z12x, z12y, z14c, z12c);
			if (fv1 <= fv2)
				f112 = fv1;
			else
				f112 = fv2;
			printf("Frechet distance between %d and %d is: %f", z12, z14, f112);
			fv1 = frechet(z12, z15, z12x, z12y, z15x, z15y, z12c, z15c);
			fv2 = frechet(z15, z12, z15x, z15y, z12x, z12y, z15c, z12c);
			if (fv1 <= fv2)
				f113 = fv1;
			else
				f113 = fv2;
			printf("Frechet distance between %d and %d is: %f", z12, z15, f113);
			fv1 = frechet(z12, z16, z12x, z12y, z16x, z16y, z12c, z16c);
			fv2 = frechet(z16, z12, z16x, z16y, z12x, z12y, z16c, z12c);
			if (fv1 <= fv2)
				f114 = fv1;
			else
				f114 = fv2;
			printf("Frechet distance between %d and %d is: %f", z12, z16, f114);
			fv1 = frechet(z13, z14, z13x, z13y, z14x, z14y, z13c, z14c);
			fv2 = frechet(z14, z13, z14x, z14y, z13x, z13y, z14c, z13c);
			if (fv1 <= fv2)
				f115 = fv1;
			else
				f115 = fv2;
			printf("Frechet distance between %d and %d is: %f", z13, z14, f115);
			fv1 = frechet(z13, z15, z13x, z13y, z15x, z15y, z13c, z15c);
			fv2 = frechet(z15, z13, z15x, z15y, z13x, z13y, z15c, z13c);
			if (fv1 <= fv2)
				f116 = fv1;
			else
				f116 = fv2;
			printf("Frechet distance between %d and %d is: %f", z13, z15, f116);
			fv1 = frechet(z13, z16, z13x, z13y, z16x, z16y, z13c, z16c);
			fv2 = frechet(z16, z13, z16x, z16y, z13x, z13y, z16c, z13c);
			if (fv1 <= fv2)
				f117 = fv1;
			else
				f117 = fv2;
			printf("Frechet distance between %d and %d is: %f", z13, z16, f117);
			fv1 = frechet(z14, z15, z14x, z14y, z15x, z15y, z14c, z15c);
			fv2 = frechet(z15, z14, z15x, z15y, z14x, z14y, z15c, z14c);
			if (fv1 <= fv2)
				f118 = fv1;
			else
				f118 = fv2;
			printf("Frechet distance between %d and %d is: %f", z14, z15, f118);
			fv1 = frechet(z14, z16, z14x, z14y, z16x, z16y, z14c, z16c);
			fv2 = frechet(z16, z14, z16x, z16y, z14x, z14y, z16c, z14c);
			if (fv1 <= fv2)
				f119 = fv1;
			else
				f119 = fv2;
			printf("Frechet distance between %d and %d is: %f", z14, z16, f119);
			fv1 = frechet(z15, z16, z15x, z15y, z16x, z16y, z15c, z16c);
			fv2 = frechet(z16, z15, z16x, z16y, z15x, z15y, z16c, z15c);
			if (fv1 <= fv2)
				f120 = fv1;
			else
				f120 = fv2;
			printf("Frechet distance between %d and %d is: %f", z15, z16, f120);
			FILE* ptr;
			ptr = fopen("./x1A.csv", "a");
			fprintf(ptr, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,A\n", f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40, f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60, f61, f62, f63, f64, f65, f66, f67, f68, f69, f70, f71, f72, f73, f74, f75, f76, f77, f78, f79, f80, f81, f82, f83, f84, f85, f86, f87, f88, f89, f90, f91, f92, f93, f94, f95, f96, f97, f98, f99, f100, f101, f102, f103, f104, f105, f106, f107, f108, f109, f110, f111, f112, f113, f114, f115, f116, f117, f118, f119, f120);
			fprintf(ptr, "\n");
			fclose(ptr);
		}
	}
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

			if (z9c != 0 && z20c != 0)
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

			if (z9c != 0 && z22c != 0)
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

			if (z9c != 0 && z25c != 0)
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
			ptr = fopen("C:\\FRECHETDAT\\frechetCheck_newz.dat", "a");
			fprintf(ptr, "\n%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,A", g, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40, f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60, f61, f62, f63, f64, f65, f66, f67, f68, f69, f70, f71, f72, f73, f74, f75, f76, f77, f78, f79, f80, f81, f82, f83, f84, f85, f86, f87, f88, f89, f90, f91, f92, f93, f94, f95, f96, f97, f98, f99, f100, f101, f102, f103, f104, f105, f106, f107, f108, f109, f110, f0, f111, f112, f113, f114, f115, f116, f117, f118, f119, f120, f121, f122, f123, f124, f125, f126, f127, f128, f129, f130, f131, f132, f133, f134, f135, f136, f137, f138, f139, f140, f141, f142, f143, f144, f145, f146, f147, f148, f149, f150, f151, f152, f153, f154, f155, f156, f157, f158, f159, f160, f161, f162, f163, f164, f165, f166, f167, f168, f169, f170, f171, f172, f173, f174, f175, f176, f177, f178, f179, f180, f181, f182, f183, f184, f185, f186, f187, f188, f189, f190, f191, f307, f192, f193, f194, f195, f196, f197, f198, f199, f200, f201, f202, f203, f204, f205, f206, f207, f208, f209, f210, f211, f212, f213, f214, f215, f216, f217, f218, f219, f220, f221, f222, f223, f224, f225, f226, f227, f228, f229, f308, f230, f231, f232, f233, f234, f235, f236, f237, f238, f239, f240, f241, f242, f243, f244, f245, f246, f247, f248, f249, f250, f251, f252, f253, f254, f255, f256, f257, f258, f259, f260, f261, f262, f263, f264, f265, f266, f267, f268, f269, f270, f271, f272, f273, f274, f275, f276, f277, f278, f279, f280, f281, f282, f283, f284, f285, f286, f287, f288, f289, f290, f291, f292, f293, f294, f295, f296, f297, f298, f299, f300, f301, f302, f303, f304, f305, f306);

			fclose(ptr);

		}
	}
	if (zn == 36)

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
		case 26: z26c = v;
			printf("%d\n", z26c);
			for (i = 0; i < z26c; i++)
			{
				z26x[i] = tempx[i];
				z26y[i] = tempy[i];
				printf("\t\t%d %d\n", z26x[i], z26y[i]);
			}
			break;
		case 27: z27c = v;
			printf("%d\n", z27c);
			for (i = 0; i < z27c; i++)
			{
				z27x[i] = tempx[i];
				z27y[i] = tempy[i];
				printf("\t\t%d %d\n", z27x[i], z27y[i]);
			}
			break;
		case 28: z28c = v;
			printf("%d\n", z28c);
			for (i = 0; i < z28c; i++)
			{
				z28x[i] = tempx[i];
				z28y[i] = tempy[i];
				printf("\t\t%d %d\n", z28x[i], z28y[i]);
			}
			break;
		case 29: z29c = v;
			printf("%d\n", z29c);
			for (i = 0; i < z29c; i++)
			{
				z29x[i] = tempx[i];
				z29y[i] = tempy[i];
				printf("\t\t%d %d\n", z29x[i], z29y[i]);
			}
			break;
		case 30: z30c = v;
			printf("%d\n", z30c);
			for (i = 0; i < z30c; i++)
			{
				z30x[i] = tempx[i];
				z30y[i] = tempy[i];
				printf("\t\t%d %d\n", z30x[i], z30y[i]);
			}
			break;
		case 31: z31c = v;
			printf("%d\n", z31c);
			for (i = 0; i < z31c; i++)
			{
				z31x[i] = tempx[i];
				z31y[i] = tempy[i];
				printf("\t\t%d %d\n", z31x[i], z31y[i]);
			}
			break;
		case 32: z32c = v;
			printf("%d\n", z32c);
			for (i = 0; i < z32c; i++)
			{
				z32x[i] = tempx[i];
				z32y[i] = tempy[i];
				printf("\t\t%d %d\n", z32x[i], z32y[i]);
			}
			break;
		case 33: z33c = v;
			printf("%d\n", z33c);
			for (i = 0; i < z33c; i++)
			{
				z33x[i] = tempx[i];
				z33y[i] = tempy[i];
				printf("\t\t%d %d\n", z33x[i], z33y[i]);
			}
			break;
		case 34: z34c = v;
			printf("%d\n", z34c);
			for (i = 0; i < z34c; i++)
			{
				z34x[i] = tempx[i];
				z34y[i] = tempy[i];
				printf("\t\t%d %d\n", z34x[i], z34y[i]);
			}
			break;
		case 35: z35c = v;
			printf("%d\n", z35c);
			for (i = 0; i < z35c; i++)
			{
				z35x[i] = tempx[i];
				z35y[i] = tempy[i];
				printf("\t\t%d %d\n", z35x[i], z35y[i]);
			}
			break;
		case 36: z36c = v;
			printf("%d\n", z36c);
			for (i = 0; i < z36c; i++)
			{
				z36x[i] = tempx[i];
				z36y[i] = tempy[i];
				printf("\t\t%d %d\n", z36x[i], z36y[i]);
			}
			break;
		}//printf("counter=%d",counter);

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
			if (z1c != 0 && z26c != 0)
			{
				fv1 = frechet(z1, z26, z1x, z1y, z26x, z26y, z1c, z26c);
				fv2 = frechet(z26, z1, z26x, z26y, z1x, z1y, z26c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f25 = fv1;
			else
				f25 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z26, f25); printf("\n");
			if (z1c != 0 && z27c != 0)
			{
				fv1 = frechet(z1, z27, z1x, z1y, z27x, z27y, z1c, z27c);
				fv2 = frechet(z27, z1, z27x, z27y, z1x, z1y, z27c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f26 = fv1;
			else
				f26 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z27, f26); printf("\n");
			if (z1c != 0 && z28c != 0)
			{
				fv1 = frechet(z1, z28, z1x, z1y, z28x, z28y, z1c, z28c);
				fv2 = frechet(z28, z1, z28x, z28y, z1x, z1y, z28c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f27 = fv1;
			else
				f27 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z28, f27); printf("\n");
			if (z1c != 0 && z29c != 0)
			{
				fv1 = frechet(z1, z29, z1x, z1y, z29x, z29y, z1c, z29c);
				fv2 = frechet(z29, z1, z29x, z29y, z1x, z1y, z29c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f28 = fv1;
			else
				f28 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z29, f28); printf("\n");
			if (z1c != 0 && z30c != 0)
			{
				fv1 = frechet(z1, z30, z1x, z1y, z30x, z30y, z1c, z30c);
				fv2 = frechet(z30, z1, z30x, z30y, z1x, z1y, z30c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f29 = fv1;
			else
				f29 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z30, f29); printf("\n");
			if (z1c != 0 && z31c != 0)
			{
				fv1 = frechet(z1, z31, z1x, z1y, z31x, z31y, z1c, z31c);
				fv2 = frechet(z31, z1, z31x, z31y, z1x, z1y, z31c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f30 = fv1;
			else
				f30 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z31, f30); printf("\n");
			if (z1c != 0 && z32c != 0)
			{
				fv1 = frechet(z1, z32, z1x, z1y, z32x, z32y, z1c, z32c);
				fv2 = frechet(z32, z1, z32x, z32y, z1x, z1y, z32c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f31 = fv1;
			else
				f31 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z32, f31); printf("\n");
			if (z1c != 0 && z33c != 0)
			{
				fv1 = frechet(z1, z33, z1x, z1y, z33x, z33y, z1c, z33c);
				fv2 = frechet(z33, z1, z33x, z33y, z1x, z1y, z33c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f32 = fv1;
			else
				f32 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z33, f32); printf("\n");
			if (z1c != 0 && z34c != 0)
			{
				fv1 = frechet(z1, z34, z1x, z1y, z34x, z34y, z1c, z34c);
				fv2 = frechet(z34, z1, z34x, z34y, z1x, z1y, z34c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f33 = fv1;
			else
				f33 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z34, f33); printf("\n");
			if (z1c != 0 && z35c != 0)
			{
				fv1 = frechet(z1, z35, z1x, z1y, z35x, z35y, z1c, z35c);
				fv2 = frechet(z35, z1, z35x, z35y, z1x, z1y, z35c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f34 = fv1;
			else
				f34 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z35, f34); printf("\n");
			if (z1c != 0 && z36c != 0)
			{
				fv1 = frechet(z1, z36, z1x, z1y, z36x, z36y, z1c, z36c);
				fv2 = frechet(z36, z1, z36x, z36y, z1x, z1y, z36c, z1c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f35 = fv1;
			else
				f35 = fv2;


			printf("Frechet distance between %d and %d is: %f", z1, z36, f35); printf("\n");
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


				f36 = fv1;
			else
				f36 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z3, f36); printf("\n");
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


				f37 = fv1;
			else
				f37 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z4, f37); printf("\n");
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


				f38 = fv1;
			else
				f38 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z5, f38); printf("\n");
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


				f39 = fv1;
			else
				f39 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z6, f39); printf("\n");
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


				f40 = fv1;
			else
				f40 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z7, f40); printf("\n");
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


				f41 = fv1;
			else
				f41 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z8, f41); printf("\n");
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


				f42 = fv1;
			else
				f42 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z9, f42); printf("\n");
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


				f43 = fv1;
			else
				f43 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z10, f43); printf("\n");
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


				f44 = fv1;
			else
				f44 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z11, f44); printf("\n");
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


				f45 = fv1;
			else
				f45 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z12, f45); printf("\n");
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


				f46 = fv1;
			else
				f46 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z13, f46); printf("\n");
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


				f47 = fv1;
			else
				f47 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z14, f47); printf("\n");
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


				f48 = fv1;
			else
				f48 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z15, f48); printf("\n");
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


				f49 = fv1;
			else
				f49 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z16, f49); printf("\n");
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


				f50 = fv1;
			else
				f50 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z17, f50); printf("\n");
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


				f51 = fv1;
			else
				f51 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z18, f51); printf("\n");
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


				f52 = fv1;
			else
				f52 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z19, f52); printf("\n");
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


				f53 = fv1;
			else
				f53 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z20, f53); printf("\n");
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


				f54 = fv1;
			else
				f54 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z21, f54); printf("\n");
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


				f55 = fv1;
			else
				f55 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z22, f55); printf("\n");
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


				f56 = fv1;
			else
				f56 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z23, f56); printf("\n");
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


				f57 = fv1;
			else
				f57 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z24, f57); printf("\n");
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


				f58 = fv1;
			else
				f58 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z25, f58); printf("\n");
			if (z2c != 0 && z26c != 0)
			{
				fv1 = frechet(z2, z26, z2x, z2y, z26x, z26y, z2c, z26c);
				fv2 = frechet(z26, z2, z26x, z26y, z2x, z2y, z26c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f59 = fv1;
			else
				f59 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z26, f59); printf("\n");
			if (z2c != 0 && z27c != 0)
			{
				fv1 = frechet(z2, z27, z2x, z2y, z27x, z27y, z2c, z27c);
				fv2 = frechet(z27, z2, z27x, z27y, z2x, z2y, z27c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f60 = fv1;
			else
				f60 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z27, f60); printf("\n");
			if (z2c != 0 && z28c != 0)
			{
				fv1 = frechet(z2, z28, z2x, z2y, z28x, z28y, z2c, z28c);
				fv2 = frechet(z28, z2, z28x, z28y, z2x, z2y, z28c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f61 = fv1;
			else
				f61 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z28, f61); printf("\n");
			if (z2c != 0 && z29c != 0)
			{
				fv1 = frechet(z2, z29, z2x, z2y, z29x, z29y, z2c, z29c);
				fv2 = frechet(z29, z2, z29x, z29y, z2x, z2y, z29c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f62 = fv1;
			else
				f62 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z29, f62); printf("\n");
			if (z2c != 0 && z30c != 0)
			{
				fv1 = frechet(z2, z30, z2x, z2y, z30x, z30y, z2c, z30c);
				fv2 = frechet(z30, z2, z30x, z30y, z2x, z2y, z30c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f63 = fv1;
			else
				f63 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z30, f63); printf("\n");
			if (z2c != 0 && z31c != 0)
			{
				fv1 = frechet(z2, z31, z2x, z2y, z31x, z31y, z2c, z31c);
				fv2 = frechet(z31, z2, z31x, z31y, z2x, z2y, z31c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f64 = fv1;
			else
				f64 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z31, f64); printf("\n");
			if (z2c != 0 && z32c != 0)
			{
				fv1 = frechet(z2, z32, z2x, z2y, z32x, z32y, z2c, z32c);
				fv2 = frechet(z32, z2, z32x, z32y, z2x, z2y, z32c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f65 = fv1;
			else
				f65 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z32, f65); printf("\n");
			if (z2c != 0 && z33c != 0)
			{
				fv1 = frechet(z2, z33, z2x, z2y, z33x, z33y, z2c, z33c);
				fv2 = frechet(z33, z2, z33x, z33y, z2x, z2y, z33c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f66 = fv1;
			else
				f66 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z33, f66); printf("\n");
			if (z2c != 0 && z34c != 0)
			{
				fv1 = frechet(z2, z34, z2x, z2y, z34x, z34y, z2c, z34c);
				fv2 = frechet(z34, z2, z34x, z34y, z2x, z2y, z34c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f67 = fv1;
			else
				f67 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z34, f67); printf("\n");
			if (z2c != 0 && z35c != 0)
			{
				fv1 = frechet(z2, z35, z2x, z2y, z35x, z35y, z2c, z35c);
				fv2 = frechet(z35, z2, z35x, z35y, z2x, z2y, z35c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f68 = fv1;
			else
				f68 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z35, f68); printf("\n");
			if (z2c != 0 && z36c != 0)
			{
				fv1 = frechet(z2, z36, z2x, z2y, z36x, z36y, z2c, z36c);
				fv2 = frechet(z36, z2, z36x, z36y, z2x, z2y, z36c, z2c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f69 = fv1;
			else
				f69 = fv2;


			printf("Frechet distance between %d and %d is: %f", z2, z36, f69); printf("\n");
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


				f70 = fv1;
			else
				f70 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z4, f70); printf("\n");
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


				f71 = fv1;
			else
				f71 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z5, f71); printf("\n");
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


				f72 = fv1;
			else
				f72 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z6, f72); printf("\n");
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


				f73 = fv1;
			else
				f73 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z7, f73); printf("\n");
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


				f74 = fv1;
			else
				f74 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z8, f74); printf("\n");
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


				f75 = fv1;
			else
				f75 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z9, f75); printf("\n");
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


				f76 = fv1;
			else
				f76 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z10, f76); printf("\n");
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


				f77 = fv1;
			else
				f77 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z11, f77); printf("\n");
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


				f78 = fv1;
			else
				f78 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z12, f78); printf("\n");
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


				f79 = fv1;
			else
				f79 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z13, f79); printf("\n");
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


				f80 = fv1;
			else
				f80 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z14, f80); printf("\n");
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


				f81 = fv1;
			else
				f81 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z15, f81); printf("\n");
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


				f82 = fv1;
			else
				f82 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z16, f82); printf("\n");
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


				f83 = fv1;
			else
				f83 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z17, f83); printf("\n");
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


				f84 = fv1;
			else
				f84 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z18, f84); printf("\n");
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


				f85 = fv1;
			else
				f85 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z19, f85); printf("\n");
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


				f86 = fv1;
			else
				f86 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z20, f86); printf("\n");
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


				f87 = fv1;
			else
				f87 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z21, f87); printf("\n");
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


				f88 = fv1;
			else
				f88 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z22, f88); printf("\n");
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


				f89 = fv1;
			else
				f89 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z23, f89); printf("\n");
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


				f90 = fv1;
			else
				f90 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z24, f90); printf("\n");
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


				f91 = fv1;
			else
				f91 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z25, f91); printf("\n");
			if (z3c != 0 && z26c != 0)
			{
				fv1 = frechet(z3, z26, z3x, z3y, z26x, z26y, z3c, z26c);
				fv2 = frechet(z26, z3, z26x, z26y, z3x, z3y, z26c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f92 = fv1;
			else
				f92 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z26, f92); printf("\n");
			if (z3c != 0 && z27c != 0)
			{
				fv1 = frechet(z3, z27, z3x, z3y, z27x, z27y, z3c, z27c);
				fv2 = frechet(z27, z3, z27x, z27y, z3x, z3y, z27c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f93 = fv1;
			else
				f93 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z27, f93); printf("\n");
			if (z3c != 0 && z28c != 0)
			{
				fv1 = frechet(z3, z28, z3x, z3y, z28x, z28y, z3c, z28c);
				fv2 = frechet(z28, z3, z28x, z28y, z3x, z3y, z28c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f94 = fv1;
			else
				f94 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z27, f94); printf("\n");
			if (z3c != 0 && z29c != 0)
			{
				fv1 = frechet(z3, z29, z3x, z3y, z29x, z29y, z3c, z29c);
				fv2 = frechet(z29, z3, z29x, z29y, z3x, z3y, z29c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f95 = fv1;
			else
				f95 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z29, f95); printf("\n");
			if (z3c != 0 && z30c != 0)
			{
				fv1 = frechet(z3, z30, z3x, z3y, z30x, z30y, z3c, z30c);
				fv2 = frechet(z30, z3, z30x, z30y, z3x, z3y, z30c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f96 = fv1;
			else
				f96 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z30, f96); printf("\n");
			if (z3c != 0 && z31c != 0)
			{
				fv1 = frechet(z3, z31, z3x, z3y, z31x, z31y, z3c, z31c);
				fv2 = frechet(z31, z3, z31x, z31y, z3x, z3y, z31c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f97 = fv1;
			else
				f97 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z31, f97); printf("\n");
			if (z3c != 0 && z32c != 0)
			{
				fv1 = frechet(z3, z32, z3x, z3y, z32x, z32y, z3c, z32c);
				fv2 = frechet(z32, z3, z32x, z32y, z3x, z3y, z32c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f98 = fv1;
			else
				f98 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z32, f98); printf("\n");
			if (z3c != 0 && z33c != 0)
			{
				fv1 = frechet(z3, z33, z3x, z3y, z33x, z33y, z3c, z33c);
				fv2 = frechet(z33, z3, z33x, z33y, z3x, z3y, z33c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f99 = fv1;
			else
				f99 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z33, f99); printf("\n");
			if (z3c != 0 && z34c != 0)
			{
				fv1 = frechet(z3, z34, z3x, z3y, z34x, z34y, z3c, z34c);
				fv2 = frechet(z34, z3, z34x, z34y, z3x, z3y, z34c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f100 = fv1;
			else
				f100 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z34, f100); printf("\n");
			if (z3c != 0 && z35c != 0)
			{
				fv1 = frechet(z3, z35, z3x, z3y, z35x, z35y, z3c, z35c);
				fv2 = frechet(z35, z3, z35x, z35y, z3x, z3y, z35c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f101 = fv1;
			else
				f101 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z35, f101); printf("\n");
			if (z3c != 0 && z36c != 0)
			{
				fv1 = frechet(z3, z36, z3x, z3y, z36x, z36y, z3c, z36c);
				fv2 = frechet(z36, z3, z36x, z36y, z3x, z3y, z36c, z3c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f102 = fv1;
			else
				f102 = fv2;


			printf("Frechet distance between %d and %d is: %f", z3, z36, f102); printf("\n");


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


				f103 = fv1;
			else
				f103 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z5, f103); printf("\n");

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


				f104 = fv1;
			else
				f104 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z6, f104); printf("\n");

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


				f105 = fv1;
			else
				f105 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z7, f105); printf("\n");

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


				f106 = fv1;
			else
				f106 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z8, f106); printf("\n");

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


				f107 = fv1;
			else
				f107 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z9, f107); printf("\n");

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


				f108 = fv1;
			else
				f108 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z10, f108); printf("\n");

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


				f109 = fv1;
			else
				f109 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z11, f109); printf("\n");

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


				f110 = fv1;
			else
				f110 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z12, f110); printf("\n");

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


				f111 = fv1;
			else
				f111 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z13, f111); printf("\n");

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


				f112 = fv1;
			else
				f112 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z14, f112); printf("\n");

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


				f113 = fv1;
			else
				f113 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z15, f113); printf("\n");

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


				f114 = fv1;
			else
				f114 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z16, f114); printf("\n");

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


				f115 = fv1;
			else
				f115 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z17, f115); printf("\n");

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


				f116 = fv1;
			else
				f116 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z18, f116); printf("\n");

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


				f117 = fv1;
			else
				f117 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z19, f117); printf("\n");

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


				f118 = fv1;
			else
				f118 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z20, f118); printf("\n");

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


				f119 = fv1;
			else
				f119 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z21, f119); printf("\n");

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


				f120 = fv1;
			else
				f120 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z22, f120); printf("\n");

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


				f121 = fv1;
			else
				f121 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z23, f121); printf("\n");

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


				f122 = fv1;
			else
				f122 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z24, f122); printf("\n");

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


				f123 = fv1;
			else
				f123 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z25, f123); printf("\n");
			if (z26c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z26, z4x, z4y, z26x, z26y, z4c, z26c);
				fv2 = frechet(z26, z4, z26x, z26y, z4x, z4y, z26c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f124 = fv1;
			else
				f124 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z26, f124); printf("\n");
			if (z27c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z27, z4x, z4y, z27x, z27y, z4c, z27c);
				fv2 = frechet(z27, z4, z27x, z27y, z4x, z4y, z27c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f125 = fv1;
			else
				f125 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z27, f125); printf("\n");
			if (z28c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z28, z4x, z4y, z28x, z28y, z4c, z28c);
				fv2 = frechet(z28, z4, z28x, z28y, z4x, z4y, z28c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f126 = fv1;
			else
				f126 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z28, f126); printf("\n");
			if (z29c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z29, z4x, z4y, z29x, z29y, z4c, z29c);
				fv2 = frechet(z29, z4, z29x, z29y, z4x, z4y, z29c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f127 = fv1;
			else
				f127 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z29, f127); printf("\n");
			if (z30c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z30, z4x, z4y, z30x, z30y, z4c, z30c);
				fv2 = frechet(z30, z4, z30x, z30y, z4x, z4y, z30c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f128 = fv1;
			else
				f128 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z30, f128); printf("\n");
			if (z31c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z31, z4x, z4y, z31x, z31y, z4c, z31c);
				fv2 = frechet(z31, z4, z31x, z31y, z4x, z4y, z31c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f129 = fv1;
			else
				f129 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z31, f129); printf("\n");
			if (z32c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z32, z4x, z4y, z32x, z32y, z4c, z32c);
				fv2 = frechet(z32, z4, z32x, z32y, z4x, z4y, z32c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f130 = fv1;
			else
				f130 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z32, f130); printf("\n");
			if (z33c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z33, z4x, z4y, z33x, z33y, z4c, z33c);
				fv2 = frechet(z33, z4, z33x, z33y, z4x, z4y, z33c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f131 = fv1;
			else
				f131 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z33, f131); printf("\n");
			if (z34c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z34, z4x, z4y, z34x, z34y, z4c, z34c);
				fv2 = frechet(z34, z4, z34x, z34y, z4x, z4y, z34c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f132 = fv1;
			else
				f132 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z34, f132); printf("\n");
			if (z35c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z35, z4x, z4y, z35x, z35y, z4c, z35c);
				fv2 = frechet(z35, z4, z35x, z35y, z4x, z4y, z35c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f133 = fv1;
			else
				f133 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z35, f133); printf("\n");
			if (z36c != 0 && z4c != 0)
			{
				fv1 = frechet(z4, z36, z4x, z4y, z36x, z36y, z4c, z36c);
				fv2 = frechet(z36, z4, z36x, z36y, z4x, z4y, z36c, z4c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f134 = fv1;
			else
				f134 = fv2;


			printf("Frechet distance between %d and %d is: %f", z4, z36, f134); printf("\n");












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


				f135 = fv1;
			else
				f135 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z6, f135); printf("\n");
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


				f136 = fv1;
			else
				f136 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z7, f136); printf("\n");

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


				f137 = fv1;
			else
				f137 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z8, f137); printf("\n");
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


				f138 = fv1;
			else
				f138 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z9, f138); printf("\n");
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


				f139 = fv1;
			else
				f139 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z10, f139); printf("\n");
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


				f140 = fv1;
			else
				f140 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z11, f140); printf("\n");
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


				f141 = fv1;
			else
				f141 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z12, f141); printf("\n");
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


				f142 = fv1;
			else
				f142 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z13, f142); printf("\n");
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


				f143 = fv1;
			else
				f143 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z14, f143); printf("\n");
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


				f144 = fv1;
			else
				f144 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z15, f144); printf("\n");
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


				f145 = fv1;
			else
				f145 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z16, f145); printf("\n");
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


				f146 = fv1;
			else
				f146 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z17, f146); printf("\n");
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


				f147 = fv1;
			else
				f147 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z18, f147); printf("\n");
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


				f148 = fv1;
			else
				f148 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z19, f148); printf("\n");
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


				f149 = fv1;
			else
				f149 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z20, f149); printf("\n");
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


				f150 = fv1;
			else
				f150 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z21, f150); printf("\n");
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


				f151 = fv1;
			else
				f151 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z22, f151); printf("\n");
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


				f152 = fv1;
			else
				f152 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z23, f152); printf("\n");
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


				f153 = fv1;
			else
				f153 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z24, f153); printf("\n");
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


				f154 = fv1;
			else
				f154 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z25, f154); printf("\n");
			printf("\n");
			if (z5c != 0 && z26c != 0)
			{
				fv1 = frechet(z5, z26, z5x, z5y, z26x, z26y, z5c, z26c);
				fv2 = frechet(z26, z5, z26x, z26y, z5x, z5y, z26c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f155 = fv1;
			else
				f155 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z26, f155); printf("\n");
			printf("\n");
			if (z5c != 0 && z27c != 0)
			{
				fv1 = frechet(z5, z27, z5x, z5y, z27x, z27y, z5c, z27c);
				fv2 = frechet(z27, z5, z27x, z27y, z5x, z5y, z27c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f156 = fv1;
			else
				f156 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z27, f156); printf("\n");
			printf("\n");
			if (z5c != 0 && z28c != 0)
			{
				fv1 = frechet(z5, z28, z5x, z5y, z28x, z28y, z5c, z28c);
				fv2 = frechet(z28, z5, z28x, z28y, z5x, z5y, z28c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f157 = fv1;
			else
				f157 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z28, f157); printf("\n");
			printf("\n");
			if (z5c != 0 && z29c != 0)
			{
				fv1 = frechet(z5, z29, z5x, z5y, z29x, z29y, z5c, z29c);
				fv2 = frechet(z29, z5, z29x, z29y, z5x, z5y, z29c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f158 = fv1;
			else
				f158 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z29, f158); printf("\n");
			printf("\n");
			if (z5c != 0 && z30c != 0)
			{
				fv1 = frechet(z5, z30, z5x, z5y, z30x, z30y, z5c, z30c);
				fv2 = frechet(z30, z5, z30x, z30y, z5x, z5y, z30c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f159 = fv1;
			else
				f159 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z30, f159); printf("\n");
			printf("\n");
			if (z5c != 0 && z31c != 0)
			{
				fv1 = frechet(z5, z31, z5x, z5y, z31x, z31y, z5c, z31c);
				fv2 = frechet(z31, z5, z31x, z31y, z5x, z5y, z31c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f160 = fv1;
			else
				f160 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z31, f160); printf("\n");
			printf("\n");
			if (z5c != 0 && z32c != 0)
			{
				fv1 = frechet(z5, z32, z5x, z5y, z32x, z32y, z5c, z32c);
				fv2 = frechet(z32, z5, z32x, z32y, z5x, z5y, z32c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f161 = fv1;
			else
				f161 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z32, f161); printf("\n");
			printf("\n");
			if (z5c != 0 && z33c != 0)
			{
				fv1 = frechet(z5, z33, z5x, z5y, z33x, z33y, z5c, z33c);
				fv2 = frechet(z33, z5, z33x, z33y, z5x, z5y, z33c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f162 = fv1;
			else
				f162 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z33, f162); printf("\n");
			printf("\n");
			if (z5c != 0 && z34c != 0)
			{
				fv1 = frechet(z5, z34, z5x, z5y, z34x, z34y, z5c, z34c);
				fv2 = frechet(z34, z5, z34x, z34y, z5x, z5y, z34c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f163 = fv1;
			else
				f163 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z34, f163); printf("\n");
			printf("\n");
			if (z5c != 0 && z35c != 0)
			{
				fv1 = frechet(z5, z35, z5x, z5y, z35x, z35y, z5c, z35c);
				fv2 = frechet(z35, z5, z35x, z35y, z5x, z5y, z35c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f164 = fv1;
			else
				f164 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z35, f164); printf("\n");
			printf("\n");
			if (z5c != 0 && z36c != 0)
			{
				fv1 = frechet(z5, z36, z5x, z5y, z36x, z36y, z5c, z36c);
				fv2 = frechet(z36, z5, z36x, z36y, z5x, z5y, z36c, z5c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f165 = fv1;
			else
				f165 = fv2;


			printf("Frechet distance between %d and %d is: %f", z5, z36, f165); printf("\n");
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


				f166 = fv1;
			else
				f166 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z7, f166); printf("\n");
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


				f167 = fv1;
			else
				f167 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z8, f167); printf("\n");
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


				f168 = fv1;
			else
				f168 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z9, f168); printf("\n");
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


				f169 = fv1;
			else
				f169 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z10, f169); printf("\n");
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


				f170 = fv1;
			else
				f170 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z11, f170); printf("\n");
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


				f171 = fv1;
			else
				f171 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z12, f171); printf("\n");
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


				f172 = fv1;
			else
				f172 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z13, f172); printf("\n");
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


				f173 = fv1;
			else
				f173 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z14, f173); printf("\n");
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


				f174 = fv1;
			else
				f174 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z15, f174); printf("\n");
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


				f175 = fv1;
			else
				f175 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z16, f175); printf("\n");
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


				f176 = fv1;
			else
				f176 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z17, f176); printf("\n");
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


				f177 = fv1;
			else
				f177 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z18, f177); printf("\n");
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


				f178 = fv1;
			else
				f178 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z19, f178); printf("\n");
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


				f179 = fv1;
			else
				f179 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z20, f179); printf("\n");
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


				f180 = fv1;
			else
				f180 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z21, f180); printf("\n");
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


				f181 = fv1;
			else
				f181 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z22, f181); printf("\n");
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


				f182 = fv1;
			else
				f182 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z23, f182); printf("\n");
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


				f183 = fv1;
			else
				f183 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z24, f183); printf("\n");
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


				f184 = fv1;
			else
				f184 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z25, f184); printf("\n");
			if (z6c != 0 && z26 != 0)
			{
				fv1 = frechet(z6, z26, z6x, z6y, z26x, z26y, z6c, z26c);
				fv2 = frechet(z26, z6, z26x, z26y, z6x, z6y, z26c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f185 = fv1;
			else
				f185 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z26, f185); printf("\n");
			if (z6c != 0 && z27 != 0)
			{
				fv1 = frechet(z6, z27, z6x, z6y, z27x, z27y, z6c, z27c);
				fv2 = frechet(z27, z6, z27x, z27y, z6x, z6y, z27c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f186 = fv1;
			else
				f186 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z27, f186); printf("\n");
			if (z6c != 0 && z28 != 0)
			{
				fv1 = frechet(z6, z28, z6x, z6y, z28x, z28y, z6c, z28c);
				fv2 = frechet(z28, z6, z28x, z28y, z6x, z6y, z28c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f187 = fv1;
			else
				f187 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z28, f187); printf("\n");
			if (z6c != 0 && z29 != 0)
			{
				fv1 = frechet(z6, z29, z6x, z6y, z29x, z29y, z6c, z29c);
				fv2 = frechet(z29, z6, z29x, z29y, z6x, z6y, z29c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f188 = fv1;
			else
				f188 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z29, f188); printf("\n");
			if (z6c != 0 && z30 != 0)
			{
				fv1 = frechet(z6, z30, z6x, z6y, z30x, z30y, z6c, z30c);
				fv2 = frechet(z30, z6, z30x, z30y, z6x, z6y, z30c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f189 = fv1;
			else
				f189 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z30, f189); printf("\n");
			if (z6c != 0 && z31 != 0)
			{
				fv1 = frechet(z6, z31, z6x, z6y, z31x, z31y, z6c, z31c);
				fv2 = frechet(z31, z6, z31x, z31y, z6x, z6y, z31c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f190 = fv1;
			else
				f190 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z31, f190); printf("\n");
			if (z6c != 0 && z32 != 0)
			{
				fv1 = frechet(z6, z32, z6x, z6y, z32x, z32y, z6c, z32c);
				fv2 = frechet(z32, z6, z32x, z32y, z6x, z6y, z32c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f191 = fv1;
			else
				f191 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z32, f191); printf("\n");
			if (z6c != 0 && z33 != 0)
			{
				fv1 = frechet(z6, z33, z6x, z6y, z33x, z33y, z6c, z33c);
				fv2 = frechet(z33, z6, z33x, z33y, z6x, z6y, z33c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f192 = fv1;
			else
				f192 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z33, f192); printf("\n");
			if (z6c != 0 && z34 != 0)
			{
				fv1 = frechet(z6, z34, z6x, z6y, z34x, z34y, z6c, z34c);
				fv2 = frechet(z34, z6, z34x, z34y, z6x, z6y, z34c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f193 = fv1;
			else
				f193 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z34, f193); printf("\n");
			if (z6c != 0 && z35 != 0)
			{
				fv1 = frechet(z6, z35, z6x, z6y, z35x, z35y, z6c, z35c);
				fv2 = frechet(z35, z6, z35x, z35y, z6x, z6y, z35c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f194 = fv1;
			else
				f194 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z35, f194); printf("\n");
			if (z6c != 0 && z36 != 0)
			{
				fv1 = frechet(z6, z36, z6x, z6y, z36x, z36y, z6c, z36c);
				fv2 = frechet(z36, z6, z36x, z36y, z6x, z6y, z36c, z6c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f195 = fv1;
			else
				f195 = fv2;


			printf("Frechet distance between %d and %d is: %f", z6, z36, f195); printf("\n");

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


				f196 = fv1;
			else
				f196 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z8, f196); printf("\n");
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


				f197 = fv1;
			else
				f197 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z9, f197); printf("\n");
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


				f198 = fv1;
			else
				f198 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z10, f198); printf("\n");
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


				f199 = fv1;
			else
				f199 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z11, f199); printf("\n");
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


				f200 = fv1;
			else
				f200 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z12, f200); printf("\n");
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


				f201 = fv1;
			else
				f201 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z13, f201); printf("\n");
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


				f202 = fv1;
			else
				f202 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z14, f202); printf("\n");
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


				f203 = fv1;
			else
				f203 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z15, f203); printf("\n");
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


				f204 = fv1;
			else
				f204 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z16, f204); printf("\n");
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


				f205 = fv1;
			else
				f205 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z17, f205); printf("\n");
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


				f206 = fv1;
			else
				f206 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z18, f206); printf("\n");
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


				f207 = fv1;
			else
				f207 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z19, f207); printf("\n");
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


				f208 = fv1;
			else
				f208 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z20, f208); printf("\n");
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


				f209 = fv1;
			else
				f209 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z21, f209); printf("\n");
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


				f210 = fv1;
			else
				f210 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z22, f210); printf("\n");
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


				f211 = fv1;
			else
				f211 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z23, f211); printf("\n");
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


				f212 = fv1;
			else
				f212 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z24, f212); printf("\n");
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


				f213 = fv1;
			else
				f213 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z25, f213); printf("\n");
			if (z7c != 0 && z26c != 0)
			{
				fv1 = frechet(z7, z26, z7x, z7y, z26x, z26y, z7c, z26c);
				fv2 = frechet(z26, z7, z26x, z26y, z7x, z7y, z26c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f214 = fv1;
			else
				f214 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z26, f214); printf("\n");
			if (z7c != 0 && z27c != 0)
			{
				fv1 = frechet(z7, z27, z7x, z7y, z27x, z27y, z7c, z27c);
				fv2 = frechet(z27, z7, z27x, z27y, z7x, z7y, z27c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f215 = fv1;
			else
				f215 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z27, f215); printf("\n");
			if (z7c != 0 && z28c != 0)
			{
				fv1 = frechet(z7, z28, z7x, z7y, z28x, z28y, z7c, z28c);
				fv2 = frechet(z28, z7, z28x, z28y, z7x, z7y, z28c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f216 = fv1;
			else
				f216 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z28, f216); printf("\n");
			if (z7c != 0 && z29c != 0)
			{
				fv1 = frechet(z7, z29, z7x, z7y, z29x, z29y, z7c, z29c);
				fv2 = frechet(z29, z7, z29x, z29y, z7x, z7y, z29c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f217 = fv1;
			else
				f217 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z29, f217); printf("\n");
			if (z7c != 0 && z30c != 0)
			{
				fv1 = frechet(z7, z30, z7x, z7y, z30x, z30y, z7c, z30c);
				fv2 = frechet(z30, z7, z30x, z30y, z7x, z7y, z30c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f218 = fv1;
			else
				f218 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z30, f218); printf("\n");
			if (z7c != 0 && z31c != 0)
			{
				fv1 = frechet(z7, z31, z7x, z7y, z31x, z31y, z7c, z31c);
				fv2 = frechet(z31, z7, z31x, z31y, z7x, z7y, z31c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f219 = fv1;
			else
				f219 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z31, f219); printf("\n");
			if (z7c != 0 && z32c != 0)
			{
				fv1 = frechet(z7, z32, z7x, z7y, z32x, z32y, z7c, z32c);
				fv2 = frechet(z32, z7, z32x, z32y, z7x, z7y, z32c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f220 = fv1;
			else
				f220 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z32, f220); printf("\n");
			if (z7c != 0 && z33c != 0)
			{
				fv1 = frechet(z7, z33, z7x, z7y, z33x, z33y, z7c, z33c);
				fv2 = frechet(z33, z7, z33x, z33y, z7x, z7y, z33c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f221 = fv1;
			else
				f221 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z33, f221); printf("\n");
			if (z7c != 0 && z34c != 0)
			{
				fv1 = frechet(z7, z34, z7x, z7y, z34x, z34y, z7c, z34c);
				fv2 = frechet(z34, z7, z34x, z34y, z7x, z7y, z34c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f222 = fv1;
			else
				f222 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z34, f222); printf("\n");
			if (z7c != 0 && z35c != 0)
			{
				fv1 = frechet(z7, z35, z7x, z7y, z35x, z35y, z7c, z35c);
				fv2 = frechet(z35, z7, z35x, z35y, z7x, z7y, z35c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f223 = fv1;
			else
				f223 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z35, f223); printf("\n");
			if (z7c != 0 && z36c != 0)
			{
				fv1 = frechet(z7, z36, z7x, z7y, z36x, z36y, z7c, z36c);
				fv2 = frechet(z36, z7, z36x, z36y, z7x, z7y, z36c, z7c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f224 = fv1;
			else
				f224 = fv2;


			printf("Frechet distance between %d and %d is: %f", z7, z36, f224); printf("\n");

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


				f225 = fv1;
			else
				f225 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z9, f225); printf("\n");
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


				f226 = fv1;
			else
				f226 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z10, f226); printf("\n");
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


				f227 = fv1;
			else
				f227 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z11, f227); printf("\n");
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


				f228 = fv1;
			else
				f228 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z12, f228); printf("\n");
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


				f229 = fv1;
			else
				f229 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z13, f229); printf("\n");
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


				f230 = fv1;
			else
				f230 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z14, f230); printf("\n");
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


				f231 = fv1;
			else
				f231 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z15, f231); printf("\n");
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


				f232 = fv1;
			else
				f232 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z16, f232); printf("\n");
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


				f233 = fv1;
			else
				f233 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z17, f233); printf("\n");
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


				f234 = fv1;
			else
				f234 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z18, f234); printf("\n");
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


				f235 = fv1;
			else
				f235 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z19, f235); printf("\n");
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


				f236 = fv1;
			else
				f236 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z20, f236); printf("\n");
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


				f237 = fv1;
			else
				f237 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z21, f237); printf("\n");
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


				f238 = fv1;
			else
				f238 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z22, f238); printf("\n");
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


				f239 = fv1;
			else
				f239 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z23, f239); printf("\n");
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


				f240 = fv1;
			else
				f240 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z24, f240); printf("\n");
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


				f241 = fv1;
			else
				f241 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z25, f241); printf("\n");
			if (z26c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z26, z8x, z8y, z26x, z26y, z8c, z26c);
				fv2 = frechet(z26, z8, z26x, z26y, z8x, z8y, z26c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f242 = fv1;
			else
				f242 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z26, f242); printf("\n");
			if (z27c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z27, z8x, z8y, z27x, z27y, z8c, z27c);
				fv2 = frechet(z27, z8, z27x, z27y, z8x, z8y, z27c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f243 = fv1;
			else
				f243 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z27, f243); printf("\n");
			if (z28c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z28, z8x, z8y, z28x, z28y, z8c, z28c);
				fv2 = frechet(z28, z8, z28x, z28y, z8x, z8y, z28c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f244 = fv1;
			else
				f244 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z28, f244); printf("\n");
			if (z29c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z29, z8x, z8y, z29x, z29y, z8c, z29c);
				fv2 = frechet(z29, z8, z29x, z29y, z8x, z8y, z29c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f245 = fv1;
			else
				f245 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z29, f245); printf("\n");
			if (z30c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z30, z8x, z8y, z30x, z30y, z8c, z30c);
				fv2 = frechet(z30, z8, z30x, z30y, z8x, z8y, z30c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f246 = fv1;
			else
				f246 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z30, f246); printf("\n");
			if (z31c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z31, z8x, z8y, z31x, z31y, z8c, z31c);
				fv2 = frechet(z31, z8, z31x, z31y, z8x, z8y, z31c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f247 = fv1;
			else
				f247 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z31, f247); printf("\n");
			if (z32c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z32, z8x, z8y, z32x, z32y, z8c, z32c);
				fv2 = frechet(z32, z8, z32x, z32y, z8x, z8y, z32c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f248 = fv1;
			else
				f248 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z32, f248); printf("\n");
			if (z33c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z33, z8x, z8y, z33x, z33y, z8c, z33c);
				fv2 = frechet(z33, z8, z33x, z33y, z8x, z8y, z33c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f249 = fv1;
			else
				f249 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z33, f249); printf("\n");
			if (z34c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z34, z8x, z8y, z34x, z34y, z8c, z34c);
				fv2 = frechet(z34, z8, z34x, z34y, z8x, z8y, z34c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f250 = fv1;
			else
				f250 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z34, f250); printf("\n");
			if (z35c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z35, z8x, z8y, z35x, z35y, z8c, z35c);
				fv2 = frechet(z35, z8, z35x, z35y, z8x, z8y, z35c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f251 = fv1;
			else
				f251 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z35, f251); printf("\n");
			if (z36c != 0 && z8c != 0)
			{
				fv1 = frechet(z8, z36, z8x, z8y, z36x, z36y, z8c, z36c);
				fv2 = frechet(z36, z8, z36x, z36y, z8x, z8y, z36c, z8c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f252 = fv1;
			else
				f252 = fv2;


			printf("Frechet distance between %d and %d is: %f", z8, z36, f252); printf("\n");

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


				f253 = fv1;
			else
				f253 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z10, f253); printf("\n");
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


				f254 = fv1;
			else
				f254 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z11, f254); printf("\n");

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


				f255 = fv1;
			else
				f255 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z12, f255); printf("\n");

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


				f256 = fv1;
			else
				f256 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z13, f256); printf("\n");

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


				f257 = fv1;
			else
				f257 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z14, f257); printf("\n");

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


				f258 = fv1;
			else
				f258 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z15, f258); printf("\n");

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


				f259 = fv1;
			else
				f259 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z16, f259); printf("\n");

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


				f260 = fv1;
			else
				f260 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z17, f260); printf("\n");

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


				f261 = fv1;
			else
				f261 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z18, f261); printf("\n");

			if (z9c != 0 && z19c != 0)
			{
				fv1 = frechet(z9, z19, z9x, z9y, z19x, z19y, z9c, z19c);
				fv2 = frechet(z19, z9, z19x, z19y, z9x, z9y, z19c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f262 = fv1;
			else
				f262 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z19, f262); printf("\n");

			if (z9c != 0 && z20c != 0)
			{
				fv1 = frechet(z9, z20, z9x, z9y, z20x, z20y, z9c, z20c);
				fv2 = frechet(z20, z9, z20x, z20y, z9x, z9y, z20c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f263 = fv1;
			else
				f263 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z20, f263); printf("\n");

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


				f264 = fv1;
			else
				f264 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z21, f264); printf("\n");

			if (z9c != 0 && z22c != 0)
			{
				fv1 = frechet(z9, z22, z9x, z9y, z22x, z22y, z9c, z22c);
				fv2 = frechet(z22, z9, z22x, z22y, z9x, z9y, z22c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f265 = fv1;
			else
				f265 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z22, f265); printf("\n");

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


				f266 = fv1;
			else
				f266 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z23, f266); printf("\n");

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


				f267 = fv1;
			else
				f267 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z24, f267); printf("\n");

			if (z9c != 0 && z25c != 0)
			{
				fv1 = frechet(z9, z25, z9x, z9y, z25x, z25y, z9c, z25c);
				fv2 = frechet(z25, z9, z25x, z25y, z9x, z9y, z25c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f268 = fv1;
			else
				f268 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z25, f268); printf("\n");
			if (z9c != 0 && z26c != 0)
			{
				fv1 = frechet(z9, z26, z9x, z9y, z26x, z26y, z9c, z26c);
				fv2 = frechet(z26, z9, z26x, z26y, z9x, z9y, z26c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f269 = fv1;
			else
				f269 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z26, f269); printf("\n");
			if (z9c != 0 && z27c != 0)
			{
				fv1 = frechet(z9, z27, z9x, z9y, z27x, z27y, z9c, z27c);
				fv2 = frechet(z27, z9, z27x, z27y, z9x, z9y, z27c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f270 = fv1;
			else
				f270 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z27, f270); printf("\n");
			if (z9c != 0 && z28c != 0)
			{
				fv1 = frechet(z9, z28, z9x, z9y, z28x, z28y, z9c, z28c);
				fv2 = frechet(z28, z9, z28x, z28y, z9x, z9y, z28c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f271 = fv1;
			else
				f271 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z28, f271); printf("\n");
			if (z9c != 0 && z29c != 0)
			{
				fv1 = frechet(z9, z29, z9x, z9y, z29x, z29y, z9c, z29c);
				fv2 = frechet(z29, z9, z29x, z29y, z9x, z9y, z29c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f272 = fv1;
			else
				f272 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z29, f272); printf("\n");
			if (z9c != 0 && z30c != 0)
			{
				fv1 = frechet(z9, z30, z9x, z9y, z30x, z30y, z9c, z30c);
				fv2 = frechet(z30, z9, z30x, z30y, z9x, z9y, z30c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f273 = fv1;
			else
				f273 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z30, f273); printf("\n");
			if (z9c != 0 && z31c != 0)
			{
				fv1 = frechet(z9, z31, z9x, z9y, z31x, z31y, z9c, z31c);
				fv2 = frechet(z31, z9, z31x, z31y, z9x, z9y, z31c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f274 = fv1;
			else
				f274 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z31, f274); printf("\n");
			if (z9c != 0 && z32c != 0)
			{
				fv1 = frechet(z9, z32, z9x, z9y, z32x, z32y, z9c, z32c);
				fv2 = frechet(z32, z9, z32x, z32y, z9x, z9y, z32c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f275 = fv1;
			else
				f275 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z32, f275); printf("\n");
			if (z9c != 0 && z33c != 0)
			{
				fv1 = frechet(z9, z33, z9x, z9y, z33x, z33y, z9c, z33c);
				fv2 = frechet(z33, z9, z33x, z33y, z9x, z9y, z33c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f276 = fv1;
			else
				f276 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z33, f276); printf("\n");
			if (z9c != 0 && z34c != 0)
			{
				fv1 = frechet(z9, z34, z9x, z9y, z34x, z34y, z9c, z34c);
				fv2 = frechet(z34, z9, z34x, z34y, z9x, z9y, z34c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f277 = fv1;
			else
				f277 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z34, f277); printf("\n");
			if (z9c != 0 && z35c != 0)
			{
				fv1 = frechet(z9, z35, z9x, z9y, z35x, z35y, z9c, z35c);
				fv2 = frechet(z35, z9, z35x, z35y, z9x, z9y, z35c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f278 = fv1;
			else
				f278 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z35, f278); printf("\n");
			if (z9c != 0 && z36 != 0)
			{
				fv1 = frechet(z9, z36, z9x, z9y, z36x, z36y, z9c, z36c);
				fv2 = frechet(z36, z9, z36x, z36y, z9x, z9y, z36c, z9c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f279 = fv1;
			else
				f279 = fv2;


			printf("Frechet distance between %d and %d is: %f", z9, z36, f279); printf("\n");




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


				f280 = fv1;
			else
				f280 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z11, f280); printf("\n");

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


				f281 = fv1;
			else
				f281 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z12, f281); printf("\n");

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


				f282 = fv1;
			else
				f282 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z13, f282); printf("\n");

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


				f283 = fv1;
			else
				f283 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z14, f283); printf("\n");

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


				f284 = fv1;
			else
				f284 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z15, f284); printf("\n");

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


				f285 = fv1;
			else
				f285 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z16, f285); printf("\n");

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


				f286 = fv1;
			else
				f286 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z17, f286); printf("\n");

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


				f287 = fv1;
			else
				f287 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z18, f287); printf("\n");

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


				f288 = fv1;
			else
				f288 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z19, f288); printf("\n");

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


				f289 = fv1;
			else
				f289 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z20, f289); printf("\n");

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


				f290 = fv1;
			else
				f290 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z21, f290); printf("\n");

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


				f291 = fv1;
			else
				f291 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z22, f291); printf("\n");

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


				f292 = fv1;
			else
				f292 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z23, f292); printf("\n");

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


				f293 = fv1;
			else
				f293 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z24, f293); printf("\n");

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


				f294 = fv1;
			else
				f294 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z25, f294); printf("\n");
			if (z10c != 0 && z26c != 0)
			{
				fv1 = frechet(z10, z26, z10x, z10y, z26x, z26y, z10c, z26c);
				fv2 = frechet(z26, z10, z26x, z26y, z10x, z10y, z26c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f295 = fv1;
			else
				f295 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z26, f295); printf("\n");
			if (z10c != 0 && z27c != 0)
			{
				fv1 = frechet(z10, z27, z10x, z10y, z27x, z27y, z10c, z27c);
				fv2 = frechet(z27, z10, z27x, z27y, z10x, z10y, z27c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f296 = fv1;
			else
				f296 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z27, f296); printf("\n");
			if (z10c != 0 && z28c != 0)
			{
				fv1 = frechet(z10, z28, z10x, z10y, z28x, z28y, z10c, z28c);
				fv2 = frechet(z28, z10, z28x, z28y, z10x, z10y, z28c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f297 = fv1;
			else
				f297 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z28, f297); printf("\n");
			if (z10c != 0 && z29c != 0)
			{
				fv1 = frechet(z10, z29, z10x, z10y, z29x, z29y, z10c, z29c);
				fv2 = frechet(z29, z10, z29x, z29y, z10x, z10y, z29c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f298 = fv1;
			else
				f298 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z29, f298); printf("\n");
			if (z10c != 0 && z30c != 0)
			{
				fv1 = frechet(z10, z30, z10x, z10y, z30x, z30y, z10c, z30c);
				fv2 = frechet(z30, z10, z30x, z30y, z10x, z10y, z30c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f299 = fv1;
			else
				f299 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z30, f299); printf("\n");
			if (z10c != 0 && z31c != 0)
			{
				fv1 = frechet(z10, z31, z10x, z10y, z31x, z31y, z10c, z31c);
				fv2 = frechet(z31, z10, z31x, z31y, z10x, z10y, z31c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f300 = fv1;
			else
				f300 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z31, f300); printf("\n");
			if (z10c != 0 && z32c != 0)
			{
				fv1 = frechet(z10, z32, z10x, z10y, z32x, z32y, z10c, z32c);
				fv2 = frechet(z32, z10, z32x, z32y, z10x, z10y, z32c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f301 = fv1;
			else
				f301 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z32, f301); printf("\n");
			if (z10c != 0 && z33c != 0)
			{
				fv1 = frechet(z10, z33, z10x, z10y, z33x, z33y, z10c, z33c);
				fv2 = frechet(z33, z10, z33x, z33y, z10x, z10y, z33c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f302 = fv1;
			else
				f302 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z33, f302); printf("\n");
			if (z10c != 0 && z34c != 0)
			{
				fv1 = frechet(z10, z34, z10x, z10y, z34x, z34y, z10c, z34c);
				fv2 = frechet(z34, z10, z34x, z34y, z10x, z10y, z34c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f303 = fv1;
			else
				f303 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z34, f303); printf("\n");
			if (z10c != 0 && z35c != 0)
			{
				fv1 = frechet(z10, z35, z10x, z10y, z35x, z35y, z10c, z35c);
				fv2 = frechet(z35, z10, z35x, z35y, z10x, z10y, z35c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f304 = fv1;
			else
				f304 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z35, f304); printf("\n");
			if (z10c != 0 && z36c != 0)
			{
				fv1 = frechet(z10, z36, z10x, z10y, z36x, z36y, z10c, z36c);
				fv2 = frechet(z36, z10, z36x, z36y, z10x, z10y, z36c, z10c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f305 = fv1;
			else
				f305 = fv2;


			printf("Frechet distance between %d and %d is: %f", z10, z36, f305); printf("\n");




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


				f306 = fv1;
			else
				f306 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z12, f306); printf("\n");

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


				f307 = fv1;
			else
				f307 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z13, f307); printf("\n");

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


				f308 = fv1;
			else
				f308 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z14, f308); printf("\n");

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


				f309 = fv1;
			else
				f309 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z15, f309); printf("\n");

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


				f310 = fv1;
			else
				f310 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z16, f310); printf("\n");

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


				f311 = fv1;
			else
				f311 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z17, f311); printf("\n");

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


				f312 = fv1;
			else
				f312 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z18, f312); printf("\n");

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


				f313 = fv1;
			else
				f313 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z19, f313); printf("\n");

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


				f314 = fv1;
			else
				f314 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z20, f314); printf("\n");

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


				f315 = fv1;
			else
				f315 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z21, f315); printf("\n");

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


				f316 = fv1;
			else
				f316 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z22, f316); printf("\n");

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


				f317 = fv1;
			else
				f317 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z23, f317); printf("\n");

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


				f318 = fv1;
			else
				f318 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z24, f318); printf("\n");

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


				f319 = fv1;
			else
				f319 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z25, f319); printf("\n");
			if (z11c != 0 && z26c != 0)
			{
				fv1 = frechet(z11, z26, z11x, z11y, z26x, z26y, z11c, z26c);
				fv2 = frechet(z26, z11, z26x, z26y, z11x, z11y, z26c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f320 = fv1;
			else
				f320 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z26, f320); printf("\n");
			if (z11c != 0 && z27c != 0)
			{
				fv1 = frechet(z11, z27, z11x, z11y, z27x, z27y, z11c, z27c);
				fv2 = frechet(z27, z11, z27x, z27y, z11x, z11y, z27c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f321 = fv1;
			else
				f321 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z27, f321); printf("\n");
			if (z11c != 0 && z28c != 0)
			{
				fv1 = frechet(z11, z28, z11x, z11y, z28x, z28y, z11c, z28c);
				fv2 = frechet(z28, z11, z28x, z28y, z11x, z11y, z28c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f322 = fv1;
			else
				f322 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z28, f322); printf("\n");
			if (z11c != 0 && z29c != 0)
			{
				fv1 = frechet(z11, z29, z11x, z11y, z29x, z29y, z11c, z29c);
				fv2 = frechet(z29, z11, z29x, z29y, z11x, z11y, z29c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f323 = fv1;
			else
				f323 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z29, f323); printf("\n");
			if (z11c != 0 && z30c != 0)
			{
				fv1 = frechet(z11, z30, z11x, z11y, z30x, z30y, z11c, z30c);
				fv2 = frechet(z30, z11, z30x, z30y, z11x, z11y, z30c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f324 = fv1;
			else
				f324 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z30, f324); printf("\n");
			if (z11c != 0 && z31c != 0)
			{
				fv1 = frechet(z11, z31, z11x, z11y, z31x, z31y, z11c, z31c);
				fv2 = frechet(z31, z11, z31x, z31y, z11x, z11y, z31c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f325 = fv1;
			else
				f325 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z31, f325); printf("\n");
			if (z11c != 0 && z32c != 0)
			{
				fv1 = frechet(z11, z32, z11x, z11y, z32x, z32y, z11c, z32c);
				fv2 = frechet(z32, z11, z32x, z32y, z11x, z11y, z32c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f326 = fv1;
			else
				f326 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z32, f326); printf("\n");
			if (z11c != 0 && z33c != 0)
			{
				fv1 = frechet(z11, z33, z11x, z11y, z33x, z33y, z11c, z33c);
				fv2 = frechet(z33, z11, z33x, z33y, z11x, z11y, z33c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f327 = fv1;
			else
				f327 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z33, f327); printf("\n");
			if (z11c != 0 && z34c != 0)
			{
				fv1 = frechet(z11, z34, z11x, z11y, z34x, z34y, z11c, z34c);
				fv2 = frechet(z34, z11, z34x, z34y, z11x, z11y, z34c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f328 = fv1;
			else
				f328 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z34, f328); printf("\n");
			if (z11c != 0 && z35c != 0)
			{
				fv1 = frechet(z11, z35, z11x, z11y, z35x, z35y, z11c, z35c);
				fv2 = frechet(z35, z11, z35x, z35y, z11x, z11y, z35c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f329 = fv1;
			else
				f329 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z35, f329); printf("\n");
			if (z11c != 0 && z36c != 0)
			{
				fv1 = frechet(z11, z36, z11x, z11y, z36x, z36y, z11c, z36c);
				fv2 = frechet(z36, z11, z36x, z36y, z11x, z11y, z36c, z11c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}

			if (fv1 <= fv2)


				f330 = fv1;
			else
				f330 = fv2;


			printf("Frechet distance between %d and %d is: %f", z11, z36, f330); printf("\n");
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
				f331 = fv1;
			else
				f331 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z13, f331);

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
				f332 = fv1;
			else
				f332 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z14, f332);

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
				f333 = fv1;
			else
				f333 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z15, f333);

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
				f334 = fv1;
			else
				f334 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z16, f334);

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
				f335 = fv1;
			else
				f335 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z17, f335);

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
				f336 = fv1;
			else
				f336 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z18, f336);

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
				f337 = fv1;
			else
				f337 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z19, f337);

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
				f338 = fv1;
			else
				f338 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z20, f338);

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
				f339 = fv1;
			else
				f339 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z21, f339);

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
				f340 = fv1;
			else
				f340 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z22, f340);

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
				f341 = fv1;
			else
				f341 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z23, f341);

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
				f342 = fv1;
			else
				f342 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z24, f342);

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
				f343 = fv1;
			else
				f343 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z25, f343);

			if (z12c != 0 && z26c != 0)
			{
				fv1 = frechet(z12, z26, z12x, z12y, z26x, z26y, z12c, z26c);
				fv2 = frechet(z26, z12, z26x, z26y, z12x, z12y, z26c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f344 = fv1;
			else
				f344 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z26, f344);

			if (z12c != 0 && z27c != 0)
			{
				fv1 = frechet(z12, z27, z12x, z12y, z27x, z27y, z12c, z27c);
				fv2 = frechet(z27, z12, z27x, z27y, z12x, z12y, z27c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f345 = fv1;
			else
				f345 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z27, f345);

			if (z12c != 0 && z28c != 0)
			{
				fv1 = frechet(z12, z28, z12x, z12y, z28x, z28y, z12c, z28c);
				fv2 = frechet(z28, z12, z28x, z28y, z12x, z12y, z28c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f346 = fv1;
			else
				f346 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z28, f346);

			if (z12c != 0 && z29c != 0)
			{
				fv1 = frechet(z12, z29, z12x, z12y, z29x, z29y, z12c, z29c);
				fv2 = frechet(z29, z12, z29x, z29y, z12x, z12y, z29c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f347 = fv1;
			else
				f347 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z29, f347);

			if (z12c != 0 && z30c != 0)
			{
				fv1 = frechet(z12, z30, z12x, z12y, z30x, z30y, z12c, z30c);
				fv2 = frechet(z30, z12, z30x, z30y, z12x, z12y, z30c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f348 = fv1;
			else
				f348 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z30, f348);

			if (z12c != 0 && z31c != 0)
			{
				fv1 = frechet(z12, z31, z12x, z12y, z31x, z31y, z12c, z31c);
				fv2 = frechet(z31, z12, z31x, z31y, z12x, z12y, z31c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f349 = fv1;
			else
				f349 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z31, f349);

			if (z12c != 0 && z32c != 0)
			{
				fv1 = frechet(z12, z32, z12x, z12y, z32x, z32y, z12c, z32c);
				fv2 = frechet(z32, z12, z32x, z32y, z12x, z12y, z32c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f350 = fv1;
			else
				f350 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z32, f350);

			if (z12c != 0 && z33c != 0)
			{
				fv1 = frechet(z12, z33, z12x, z12y, z33x, z33y, z12c, z33c);
				fv2 = frechet(z33, z12, z33x, z33y, z12x, z12y, z33c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f351 = fv1;
			else
				f351 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z33, f351);

			if (z12c != 0 && z34c != 0)
			{
				fv1 = frechet(z12, z34, z12x, z12y, z34x, z34y, z12c, z34c);
				fv2 = frechet(z34, z12, z34x, z34y, z12x, z12y, z34c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f352 = fv1;
			else
				f352 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z34, f352);

			if (z12c != 0 && z35c != 0)
			{
				fv1 = frechet(z12, z35, z12x, z12y, z35x, z35y, z12c, z35c);
				fv2 = frechet(z35, z12, z35x, z35y, z12x, z12y, z35c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f353 = fv1;
			else
				f353 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z35, f353);

			if (z12c != 0 && z36c != 0)
			{
				fv1 = frechet(z12, z36, z12x, z12y, z36x, z36y, z12c, z36c);
				fv2 = frechet(z36, z12, z36x, z36y, z12x, z12y, z36c, z12c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f354 = fv1;
			else
				f354 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z12, z36, f354);

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
				f355 = fv1;
			else
				f355 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z14, f355);

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
				f356 = fv1;
			else
				f356 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z15, f356);

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
				f357 = fv1;
			else
				f357 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z16, f357);

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
				f358 = fv1;
			else
				f358 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z17, f358);

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
				f359 = fv1;
			else
				f359 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z18, f359);

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
				f360 = fv1;
			else
				f360 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z19, f360);

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
				f361 = fv1;
			else
				f361 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z20, f361);

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
				f362 = fv1;
			else
				f362 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z21, f362);

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
				f363 = fv1;
			else
				f363 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z22, f363);

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
				f364 = fv1;
			else
				f364 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z23, f364);

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
				f365 = fv1;
			else
				f365 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z24, f365);

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
				f366 = fv1;
			else
				f366 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z25, f366);

			if (z13c != 0 && z26c != 0)
			{
				fv1 = frechet(z13, z26, z13x, z13y, z26x, z26y, z13c, z26c);
				fv2 = frechet(z26, z13, z26x, z26y, z13x, z13y, z26c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f367 = fv1;
			else
				f367 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z26, f367);

			if (z13c != 0 && z27c != 0)
			{
				fv1 = frechet(z13, z27, z13x, z13y, z27x, z27y, z13c, z27c);
				fv2 = frechet(z27, z13, z27x, z27y, z13x, z13y, z27c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f368 = fv1;
			else
				f368 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z27, f368);

			if (z13c != 0 && z28c != 0)
			{
				fv1 = frechet(z13, z28, z13x, z13y, z28x, z28y, z13c, z28c);
				fv2 = frechet(z28, z13, z28x, z28y, z13x, z13y, z28c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f369 = fv1;
			else
				f369 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z28, f369);

			if (z13c != 0 && z29c != 0)
			{
				fv1 = frechet(z13, z29, z13x, z13y, z29x, z29y, z13c, z29c);
				fv2 = frechet(z29, z13, z29x, z29y, z13x, z13y, z29c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f370 = fv1;
			else
				f370 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z29, f370);

			if (z13c != 0 && z30c != 0)
			{
				fv1 = frechet(z13, z30, z13x, z13y, z30x, z30y, z13c, z30c);
				fv2 = frechet(z30, z13, z30x, z30y, z13x, z13y, z30c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f371 = fv1;
			else
				f371 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z30, f371);

			if (z13c != 0 && z31c != 0)
			{
				fv1 = frechet(z13, z31, z13x, z13y, z31x, z31y, z13c, z31c);
				fv2 = frechet(z31, z13, z31x, z31y, z13x, z13y, z31c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f372 = fv1;
			else
				f372 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z31, f372);

			if (z13c != 0 && z32c != 0)
			{
				fv1 = frechet(z13, z32, z13x, z13y, z32x, z32y, z13c, z32c);
				fv2 = frechet(z32, z13, z32x, z32y, z13x, z13y, z32c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f373 = fv1;
			else
				f373 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z32, f373);

			if (z13c != 0 && z33c != 0)
			{
				fv1 = frechet(z13, z33, z13x, z13y, z33x, z33y, z13c, z33c);
				fv2 = frechet(z33, z13, z33x, z33y, z13x, z13y, z33c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f374 = fv1;
			else
				f374 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z33, f374);

			if (z13c != 0 && z34c != 0)
			{
				fv1 = frechet(z13, z34, z13x, z13y, z34x, z34y, z13c, z34c);
				fv2 = frechet(z34, z13, z34x, z34y, z13x, z13y, z34c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f375 = fv1;
			else
				f375 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z34, f375);

			if (z13c != 0 && z35c != 0)
			{
				fv1 = frechet(z13, z35, z13x, z13y, z35x, z35y, z13c, z35c);
				fv2 = frechet(z35, z13, z35x, z35y, z13x, z13y, z35c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f376 = fv1;
			else
				f376 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z35, f376);

			if (z13c != 0 && z36c != 0)
			{
				fv1 = frechet(z13, z36, z13x, z13y, z36x, z36y, z13c, z36c);
				fv2 = frechet(z36, z13, z36x, z36y, z13x, z13y, z36c, z13c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f377 = fv1;
			else
				f377 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z13, z36, f377);

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
				f378 = fv1;
			else
				f378 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z15, f378);

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
				f379 = fv1;
			else
				f379 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z16, f379);

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
				f380 = fv1;
			else
				f380 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z17, f380);

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
				f381 = fv1;
			else
				f381 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z18, f381);

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
				f382 = fv1;
			else
				f382 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z19, f382);

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
				f383 = fv1;
			else
				f383 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z20, f383);

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
				f384 = fv1;
			else
				f384 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z21, f384);

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
				f385 = fv1;
			else
				f385 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z22, f385);

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
				f386 = fv1;
			else
				f386 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z23, f386);

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
				f387 = fv1;
			else
				f387 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z24, f387);

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
				f388 = fv1;
			else
				f388 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z25, f388);

			if (z14c != 0 && z26c != 0)
			{
				fv1 = frechet(z14, z26, z14x, z14y, z26x, z26y, z14c, z26c);
				fv2 = frechet(z26, z14, z26x, z26y, z14x, z14y, z26c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f389 = fv1;
			else
				f389 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z26, f389);

			if (z14c != 0 && z27c != 0)
			{
				fv1 = frechet(z14, z27, z14x, z14y, z27x, z27y, z14c, z27c);
				fv2 = frechet(z27, z14, z27x, z27y, z14x, z14y, z27c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f390 = fv1;
			else
				f390 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z27, f390);

			if (z14c != 0 && z28c != 0)
			{
				fv1 = frechet(z14, z28, z14x, z14y, z28x, z28y, z14c, z28c);
				fv2 = frechet(z28, z14, z28x, z28y, z14x, z14y, z28c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f391 = fv1;
			else
				f391 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z28, f391);

			if (z14c != 0 && z29c != 0)
			{
				fv1 = frechet(z14, z29, z14x, z14y, z29x, z29y, z14c, z29c);
				fv2 = frechet(z29, z14, z29x, z29y, z14x, z14y, z29c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f392 = fv1;
			else
				f392 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z29, f392);

			if (z14c != 0 && z30c != 0)
			{
				fv1 = frechet(z14, z30, z14x, z14y, z30x, z30y, z14c, z30c);
				fv2 = frechet(z30, z14, z30x, z30y, z14x, z14y, z30c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f393 = fv1;
			else
				f393 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z30, f393);

			if (z14c != 0 && z31c != 0)
			{
				fv1 = frechet(z14, z31, z14x, z14y, z31x, z31y, z14c, z31c);
				fv2 = frechet(z31, z14, z31x, z31y, z14x, z14y, z31c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f394 = fv1;
			else
				f394 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z31, f394);

			if (z14c != 0 && z32c != 0)
			{
				fv1 = frechet(z14, z32, z14x, z14y, z32x, z32y, z14c, z32c);
				fv2 = frechet(z32, z14, z32x, z32y, z14x, z14y, z32c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f395 = fv1;
			else
				f395 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z32, f395);

			if (z14c != 0 && z33c != 0)
			{
				fv1 = frechet(z14, z33, z14x, z14y, z33x, z33y, z14c, z33c);
				fv2 = frechet(z33, z14, z33x, z33y, z14x, z14y, z33c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f396 = fv1;
			else
				f396 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z33, f396);

			if (z14c != 0 && z34c != 0)
			{
				fv1 = frechet(z14, z34, z14x, z14y, z34x, z34y, z14c, z34c);
				fv2 = frechet(z34, z14, z34x, z34y, z14x, z14y, z34c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f397 = fv1;
			else
				f397 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z34, f397);

			if (z14c != 0 && z35c != 0)
			{
				fv1 = frechet(z14, z35, z14x, z14y, z35x, z35y, z14c, z35c);
				fv2 = frechet(z35, z14, z35x, z35y, z14x, z14y, z35c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f398 = fv1;
			else
				f398 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z35, f398);

			if (z14c != 0 && z36c != 0)
			{
				fv1 = frechet(z14, z36, z14x, z14y, z36x, z36y, z14c, z36c);
				fv2 = frechet(z36, z14, z36x, z36y, z14x, z14y, z36c, z14c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f399 = fv1;
			else
				f399 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z14, z36, f399);

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
				f400 = fv1;
			else
				f400 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z16, f400);

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
				f401 = fv1;
			else
				f401 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z17, f401);

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
				f402 = fv1;
			else
				f402 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z18, f402);

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
				f403 = fv1;
			else
				f403 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z19, f403);

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
				f404 = fv1;
			else
				f404 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z20, f404);

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
				f405 = fv1;
			else
				f405 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z21, f405);

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
				f406 = fv1;
			else
				f406 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z22, f406);

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
				f407 = fv1;
			else
				f407 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z23, f407);

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
				f408 = fv1;
			else
				f408 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z24, f408);

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
				f409 = fv1;
			else
				f409 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z25, f409);

			if (z15c != 0 && z26c != 0)
			{
				fv1 = frechet(z15, z26, z15x, z15y, z26x, z26y, z15c, z26c);
				fv2 = frechet(z26, z15, z26x, z26y, z15x, z15y, z26c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f410 = fv1;
			else
				f410 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z26, f410);

			if (z15c != 0 && z27c != 0)
			{
				fv1 = frechet(z15, z27, z15x, z15y, z27x, z27y, z15c, z27c);
				fv2 = frechet(z27, z15, z27x, z27y, z15x, z15y, z27c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f411 = fv1;
			else
				f411 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z27, f411);

			if (z15c != 0 && z28c != 0)
			{
				fv1 = frechet(z15, z28, z15x, z15y, z28x, z28y, z15c, z28c);
				fv2 = frechet(z28, z15, z28x, z28y, z15x, z15y, z28c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f412 = fv1;
			else
				f412 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z28, f412);

			if (z15c != 0 && z29c != 0)
			{
				fv1 = frechet(z15, z29, z15x, z15y, z29x, z29y, z15c, z29c);
				fv2 = frechet(z29, z15, z29x, z29y, z15x, z15y, z29c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f413 = fv1;
			else
				f413 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z29, f413);

			if (z15c != 0 && z30c != 0)
			{
				fv1 = frechet(z15, z30, z15x, z15y, z30x, z30y, z15c, z30c);
				fv2 = frechet(z30, z15, z30x, z30y, z15x, z15y, z30c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f414 = fv1;
			else
				f414 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z30, f414);

			if (z15c != 0 && z31c != 0)
			{
				fv1 = frechet(z15, z31, z15x, z15y, z31x, z31y, z15c, z31c);
				fv2 = frechet(z31, z15, z31x, z31y, z15x, z15y, z31c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f415 = fv1;
			else
				f415 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z31, f415);

			if (z15c != 0 && z32c != 0)
			{
				fv1 = frechet(z15, z32, z15x, z15y, z32x, z32y, z15c, z32c);
				fv2 = frechet(z32, z15, z32x, z32y, z15x, z15y, z32c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f416 = fv1;
			else
				f416 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z32, f416);

			if (z15c != 0 && z33c != 0)
			{
				fv1 = frechet(z15, z33, z15x, z15y, z33x, z33y, z15c, z33c);
				fv2 = frechet(z33, z15, z33x, z33y, z15x, z15y, z33c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f417 = fv1;
			else
				f417 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z33, f417);

			if (z15c != 0 && z34c != 0)
			{
				fv1 = frechet(z15, z34, z15x, z15y, z34x, z34y, z15c, z34c);
				fv2 = frechet(z34, z15, z34x, z34y, z15x, z15y, z34c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f418 = fv1;
			else
				f418 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z34, f418);

			if (z15c != 0 && z35c != 0)
			{
				fv1 = frechet(z15, z35, z15x, z15y, z35x, z35y, z15c, z35c);
				fv2 = frechet(z35, z15, z35x, z35y, z15x, z15y, z35c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f419 = fv1;
			else
				f419 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z35, f419);

			if (z15c != 0 && z36c != 0)
			{
				fv1 = frechet(z15, z36, z15x, z15y, z36x, z36y, z15c, z36c);
				fv2 = frechet(z36, z15, z36x, z36y, z15x, z15y, z36c, z15c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f420 = fv1;
			else
				f420 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z15, z36, f420);

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
				f421 = fv1;
			else
				f421 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z17, f421);

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
				f422 = fv1;
			else
				f422 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z18, f422);

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
				f423 = fv1;
			else
				f423 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z19, f423);

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
				f424 = fv1;
			else
				f424 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z20, f424);

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
				f425 = fv1;
			else
				f425 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z21, f425);

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
				f426 = fv1;
			else
				f426 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z22, f426);

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
				f427 = fv1;
			else
				f427 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z23, f427);

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
				f428 = fv1;
			else
				f428 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z24, f428);

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
				f429 = fv1;
			else
				f429 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z25, f429);

			if (z16c != 0 && z26c != 0)
			{
				fv1 = frechet(z16, z26, z16x, z16y, z26x, z26y, z16c, z26c);
				fv2 = frechet(z26, z16, z26x, z26y, z16x, z16y, z26c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f430 = fv1;
			else
				f430 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z26, f430);

			if (z16c != 0 && z27c != 0)
			{
				fv1 = frechet(z16, z27, z16x, z16y, z27x, z27y, z16c, z27c);
				fv2 = frechet(z27, z16, z27x, z27y, z16x, z16y, z27c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f431 = fv1;
			else
				f431 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z27, f431);

			if (z16c != 0 && z28c != 0)
			{
				fv1 = frechet(z16, z28, z16x, z16y, z28x, z28y, z16c, z28c);
				fv2 = frechet(z28, z16, z28x, z28y, z16x, z16y, z28c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f432 = fv1;
			else
				f432 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z28, f432);

			if (z16c != 0 && z29c != 0)
			{
				fv1 = frechet(z16, z29, z16x, z16y, z29x, z29y, z16c, z29c);
				fv2 = frechet(z29, z16, z29x, z29y, z16x, z16y, z29c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f433 = fv1;
			else
				f433 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z29, f433);

			if (z16c != 0 && z30c != 0)
			{
				fv1 = frechet(z16, z30, z16x, z16y, z30x, z30y, z16c, z30c);
				fv2 = frechet(z30, z16, z30x, z30y, z16x, z16y, z30c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f434 = fv1;
			else
				f434 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z30, f434);

			if (z16c != 0 && z31c != 0)
			{
				fv1 = frechet(z16, z31, z16x, z16y, z31x, z31y, z16c, z31c);
				fv2 = frechet(z31, z16, z31x, z31y, z16x, z16y, z31c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f435 = fv1;
			else
				f435 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z31, f435);

			if (z16c != 0 && z32c != 0)
			{
				fv1 = frechet(z16, z32, z16x, z16y, z32x, z32y, z16c, z32c);
				fv2 = frechet(z32, z16, z32x, z32y, z16x, z16y, z32c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f436 = fv1;
			else
				f436 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z32, f436);

			if (z16c != 0 && z33c != 0)
			{
				fv1 = frechet(z16, z33, z16x, z16y, z33x, z33y, z16c, z33c);
				fv2 = frechet(z33, z16, z33x, z33y, z16x, z16y, z33c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f437 = fv1;
			else
				f437 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z33, f437);

			if (z16c != 0 && z34c != 0)
			{
				fv1 = frechet(z16, z34, z16x, z16y, z34x, z34y, z16c, z34c);
				fv2 = frechet(z34, z16, z34x, z34y, z16x, z16y, z34c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f438 = fv1;
			else
				f438 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z34, f438);

			if (z16c != 0 && z35c != 0)
			{
				fv1 = frechet(z16, z35, z16x, z16y, z35x, z35y, z16c, z35c);
				fv2 = frechet(z35, z16, z35x, z35y, z16x, z16y, z35c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f439 = fv1;
			else
				f439 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z35, f439);

			if (z16c != 0 && z36c != 0)
			{
				fv1 = frechet(z16, z36, z16x, z16y, z36x, z36y, z16c, z36c);
				fv2 = frechet(z36, z16, z36x, z36y, z16x, z16y, z36c, z16c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f440 = fv1;
			else
				f440 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z16, z36, f440);

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
				f441 = fv1;
			else
				f441 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z18, f441);

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
				f442 = fv1;
			else
				f442 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z19, f442);

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
				f443 = fv1;
			else
				f443 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z20, f443);

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
				f444 = fv1;
			else
				f444 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z21, f444);

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
				f445 = fv1;
			else
				f445 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z22, f445);

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
				f446 = fv1;
			else
				f446 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z23, f446);

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
				f447 = fv1;
			else
				f447 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z24, f447);

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
				f448 = fv1;
			else
				f448 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z25, f448);

			if (z17c != 0 && z26c != 0)
			{
				fv1 = frechet(z17, z26, z17x, z17y, z26x, z26y, z17c, z26c);
				fv2 = frechet(z26, z17, z26x, z26y, z17x, z17y, z26c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f449 = fv1;
			else
				f449 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z26, f449);

			if (z17c != 0 && z27c != 0)
			{
				fv1 = frechet(z17, z27, z17x, z17y, z27x, z27y, z17c, z27c);
				fv2 = frechet(z27, z17, z27x, z27y, z17x, z17y, z27c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f450 = fv1;
			else
				f450 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z27, f450);

			if (z17c != 0 && z28c != 0)
			{
				fv1 = frechet(z17, z28, z17x, z17y, z28x, z28y, z17c, z28c);
				fv2 = frechet(z28, z17, z28x, z28y, z17x, z17y, z28c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f451 = fv1;
			else
				f451 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z28, f451);

			if (z17c != 0 && z29c != 0)
			{
				fv1 = frechet(z17, z29, z17x, z17y, z29x, z29y, z17c, z29c);
				fv2 = frechet(z29, z17, z29x, z29y, z17x, z17y, z29c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f452 = fv1;
			else
				f452 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z29, f452);

			if (z17c != 0 && z30c != 0)
			{
				fv1 = frechet(z17, z30, z17x, z17y, z30x, z30y, z17c, z30c);
				fv2 = frechet(z30, z17, z30x, z30y, z17x, z17y, z30c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f453 = fv1;
			else
				f453 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z30, f453);

			if (z17c != 0 && z31c != 0)
			{
				fv1 = frechet(z17, z31, z17x, z17y, z31x, z31y, z17c, z31c);
				fv2 = frechet(z31, z17, z31x, z31y, z17x, z17y, z31c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f454 = fv1;
			else
				f454 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z31, f454);

			if (z17c != 0 && z32c != 0)
			{
				fv1 = frechet(z17, z32, z17x, z17y, z32x, z32y, z17c, z32c);
				fv2 = frechet(z32, z17, z32x, z32y, z17x, z17y, z32c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f455 = fv1;
			else
				f455 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z32, f455);

			if (z17c != 0 && z33c != 0)
			{
				fv1 = frechet(z17, z33, z17x, z17y, z33x, z33y, z17c, z33c);
				fv2 = frechet(z33, z17, z33x, z33y, z17x, z17y, z33c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f456 = fv1;
			else
				f456 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z33, f456);

			if (z17c != 0 && z34c != 0)
			{
				fv1 = frechet(z17, z34, z17x, z17y, z34x, z34y, z17c, z34c);
				fv2 = frechet(z34, z17, z34x, z34y, z17x, z17y, z34c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f457 = fv1;
			else
				f457 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z34, f457);

			if (z17c != 0 && z35c != 0)
			{
				fv1 = frechet(z17, z35, z17x, z17y, z35x, z35y, z17c, z35c);
				fv2 = frechet(z35, z17, z35x, z35y, z17x, z17y, z35c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f458 = fv1;
			else
				f458 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z35, f458);

			if (z17c != 0 && z36c != 0)
			{
				fv1 = frechet(z17, z36, z17x, z17y, z36x, z36y, z17c, z36c);
				fv2 = frechet(z36, z17, z36x, z36y, z17x, z17y, z36c, z17c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f459 = fv1;
			else
				f459 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z17, z36, f459);

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
				f460 = fv1;
			else
				f460 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z19, f460);

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
				f461 = fv1;
			else
				f461 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z20, f461);

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
				f462 = fv1;
			else
				f462 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z21, f462);

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
				f463 = fv1;
			else
				f463 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z22, f463);

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
				f464 = fv1;
			else
				f464 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z23, f464);

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
				f465 = fv1;
			else
				f465 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z24, f465);

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
				f466 = fv1;
			else
				f466 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z25, f466);

			if (z18c != 0 && z26c != 0)
			{
				fv1 = frechet(z18, z26, z18x, z18y, z26x, z26y, z18c, z26c);
				fv2 = frechet(z26, z18, z26x, z26y, z18x, z18y, z26c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f467 = fv1;
			else
				f467 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z26, f467);

			if (z18c != 0 && z27c != 0)
			{
				fv1 = frechet(z18, z27, z18x, z18y, z27x, z27y, z18c, z27c);
				fv2 = frechet(z27, z18, z27x, z27y, z18x, z18y, z27c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f468 = fv1;
			else
				f468 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z27, f468);

			if (z18c != 0 && z28c != 0)
			{
				fv1 = frechet(z18, z28, z18x, z18y, z28x, z28y, z18c, z28c);
				fv2 = frechet(z28, z18, z28x, z28y, z18x, z18y, z28c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f469 = fv1;
			else
				f469 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z28, f469);

			if (z18c != 0 && z29c != 0)
			{
				fv1 = frechet(z18, z29, z18x, z18y, z29x, z29y, z18c, z29c);
				fv2 = frechet(z29, z18, z29x, z29y, z18x, z18y, z29c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f470 = fv1;
			else
				f470 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z29, f470);

			if (z18c != 0 && z30c != 0)
			{
				fv1 = frechet(z18, z30, z18x, z18y, z30x, z30y, z18c, z30c);
				fv2 = frechet(z30, z18, z30x, z30y, z18x, z18y, z30c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f471 = fv1;
			else
				f471 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z30, f471);

			if (z18c != 0 && z31c != 0)
			{
				fv1 = frechet(z18, z31, z18x, z18y, z31x, z31y, z18c, z31c);
				fv2 = frechet(z31, z18, z31x, z31y, z18x, z18y, z31c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f472 = fv1;
			else
				f472 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z31, f472);

			if (z18c != 0 && z32c != 0)
			{
				fv1 = frechet(z18, z32, z18x, z18y, z32x, z32y, z18c, z32c);
				fv2 = frechet(z32, z18, z32x, z32y, z18x, z18y, z32c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f473 = fv1;
			else
				f473 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z32, f473);

			if (z18c != 0 && z33c != 0)
			{
				fv1 = frechet(z18, z33, z18x, z18y, z33x, z33y, z18c, z33c);
				fv2 = frechet(z33, z18, z33x, z33y, z18x, z18y, z33c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f474 = fv1;
			else
				f474 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z33, f474);

			if (z18c != 0 && z34c != 0)
			{
				fv1 = frechet(z18, z34, z18x, z18y, z34x, z34y, z18c, z34c);
				fv2 = frechet(z34, z18, z34x, z34y, z18x, z18y, z34c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f475 = fv1;
			else
				f475 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z34, f475);

			if (z18c != 0 && z35c != 0)
			{
				fv1 = frechet(z18, z35, z18x, z18y, z35x, z35y, z18c, z35c);
				fv2 = frechet(z35, z18, z35x, z35y, z18x, z18y, z35c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f476 = fv1;
			else
				f476 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z35, f476);

			if (z18c != 0 && z36c != 0)
			{
				fv1 = frechet(z18, z36, z18x, z18y, z36x, z36y, z18c, z36c);
				fv2 = frechet(z36, z18, z36x, z36y, z18x, z18y, z36c, z18c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f477 = fv1;
			else
				f477 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z18, z36, f477);

			if (z19c != 0 && z20c != 0)
			{
				fv1 = frechet(z19, z20, z19x, z19y, z20x, z20y, z19c, z20c);
				fv2 = frechet(z20, z19, z20x, z20y, z19x, z19y, z20c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f478 = fv1;
			else
				f478 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z20, f478);

			if (z19c != 0 && z21c != 0)
			{
				fv1 = frechet(z19, z21, z19x, z19y, z21x, z21y, z19c, z21c);
				fv2 = frechet(z21, z19, z21x, z21y, z19x, z19y, z21c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f479 = fv1;
			else
				f479 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z21, f479);

			if (z19c != 0 && z22c != 0)
			{
				fv1 = frechet(z19, z22, z19x, z19y, z22x, z22y, z19c, z22c);
				fv2 = frechet(z22, z19, z22x, z22y, z19x, z19y, z22c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f480 = fv1;
			else
				f480 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z22, f480);

			if (z19c != 0 && z23c != 0)
			{
				fv1 = frechet(z19, z23, z19x, z19y, z23x, z23y, z19c, z23c);
				fv2 = frechet(z23, z19, z23x, z23y, z19x, z19y, z23c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f481 = fv1;
			else
				f481 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z23, f481);

			if (z19c != 0 && z24c != 0)
			{
				fv1 = frechet(z19, z24, z19x, z19y, z24x, z24y, z19c, z24c);
				fv2 = frechet(z24, z19, z24x, z24y, z19x, z19y, z24c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f482 = fv1;
			else
				f482 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z24, f482);

			if (z19c != 0 && z25c != 0)
			{
				fv1 = frechet(z19, z25, z19x, z19y, z25x, z25y, z19c, z25c);
				fv2 = frechet(z25, z19, z25x, z25y, z19x, z19y, z25c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f483 = fv1;
			else
				f483 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z25, f483);

			if (z19c != 0 && z26c != 0)
			{
				fv1 = frechet(z19, z26, z19x, z19y, z26x, z26y, z19c, z26c);
				fv2 = frechet(z26, z19, z26x, z26y, z19x, z19y, z26c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f484 = fv1;
			else
				f484 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z26, f484);

			if (z19c != 0 && z27c != 0)
			{
				fv1 = frechet(z19, z27, z19x, z19y, z27x, z27y, z19c, z27c);
				fv2 = frechet(z27, z19, z27x, z27y, z19x, z19y, z27c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f485 = fv1;
			else
				f485 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z27, f485);

			if (z19c != 0 && z28c != 0)
			{
				fv1 = frechet(z19, z28, z19x, z19y, z28x, z28y, z19c, z28c);
				fv2 = frechet(z28, z19, z28x, z28y, z19x, z19y, z28c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f486 = fv1;
			else
				f486 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z28, f486);

			if (z19c != 0 && z29c != 0)
			{
				fv1 = frechet(z19, z29, z19x, z19y, z29x, z29y, z19c, z29c);
				fv2 = frechet(z29, z19, z29x, z29y, z19x, z19y, z29c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f487 = fv1;
			else
				f487 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z29, f487);

			if (z19c != 0 && z30c != 0)
			{
				fv1 = frechet(z19, z30, z19x, z19y, z30x, z30y, z19c, z30c);
				fv2 = frechet(z30, z19, z30x, z30y, z19x, z19y, z30c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f488 = fv1;
			else
				f488 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z30, f488);

			if (z19c != 0 && z31c != 0)
			{
				fv1 = frechet(z19, z31, z19x, z19y, z31x, z31y, z19c, z31c);
				fv2 = frechet(z31, z19, z31x, z31y, z19x, z19y, z31c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f489 = fv1;
			else
				f489 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z31, f489);

			if (z19c != 0 && z32c != 0)
			{
				fv1 = frechet(z19, z32, z19x, z19y, z32x, z32y, z19c, z32c);
				fv2 = frechet(z32, z19, z32x, z32y, z19x, z19y, z32c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f490 = fv1;
			else
				f490 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z32, f490);

			if (z19c != 0 && z33c != 0)
			{
				fv1 = frechet(z19, z33, z19x, z19y, z33x, z33y, z19c, z33c);
				fv2 = frechet(z33, z19, z33x, z33y, z19x, z19y, z33c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f491 = fv1;
			else
				f491 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z33, f491);

			if (z19c != 0 && z34c != 0)
			{
				fv1 = frechet(z19, z34, z19x, z19y, z34x, z34y, z19c, z34c);
				fv2 = frechet(z34, z19, z34x, z34y, z19x, z19y, z34c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f492 = fv1;
			else
				f492 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z34, f492);

			if (z19c != 0 && z35c != 0)
			{
				fv1 = frechet(z19, z35, z19x, z19y, z35x, z35y, z19c, z35c);
				fv2 = frechet(z35, z19, z35x, z35y, z19x, z19y, z35c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f493 = fv1;
			else
				f493 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z35, f493);

			if (z19c != 0 && z36c != 0)
			{
				fv1 = frechet(z19, z36, z19x, z19y, z36x, z36y, z19c, z36c);
				fv2 = frechet(z36, z19, z36x, z36y, z19x, z19y, z36c, z19c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f494 = fv1;
			else
				f494 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z19, z36, f494);

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
				f495 = fv1;
			else
				f495 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z21, f495);

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
				f496 = fv1;
			else
				f496 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z22, f496);

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
				f497 = fv1;
			else
				f497 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z23, f497);

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
				f498 = fv1;
			else
				f498 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z24, f498);

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
				f499 = fv1;
			else
				f499 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z25, f499);

			if (z20c != 0 && z26c != 0)
			{
				fv1 = frechet(z20, z26, z20x, z20y, z26x, z26y, z20c, z26c);
				fv2 = frechet(z26, z20, z26x, z26y, z20x, z20y, z26c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f500 = fv1;
			else
				f500 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z26, f500);

			if (z20c != 0 && z27c != 0)
			{
				fv1 = frechet(z20, z27, z20x, z20y, z27x, z27y, z20c, z27c);
				fv2 = frechet(z27, z20, z27x, z27y, z20x, z20y, z27c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f501 = fv1;
			else
				f501 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z27, f501);

			if (z20c != 0 && z28c != 0)
			{
				fv1 = frechet(z20, z28, z20x, z20y, z28x, z28y, z20c, z28c);
				fv2 = frechet(z28, z20, z28x, z28y, z20x, z20y, z28c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f502 = fv1;
			else
				f502 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z28, f502);

			if (z20c != 0 && z29c != 0)
			{
				fv1 = frechet(z20, z29, z20x, z20y, z29x, z29y, z20c, z29c);
				fv2 = frechet(z29, z20, z29x, z29y, z20x, z20y, z29c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f503 = fv1;
			else
				f503 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z29, f503);

			if (z20c != 0 && z30c != 0)
			{
				fv1 = frechet(z20, z30, z20x, z20y, z30x, z30y, z20c, z30c);
				fv2 = frechet(z30, z20, z30x, z30y, z20x, z20y, z30c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f504 = fv1;
			else
				f504 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z30, f504);

			if (z20c != 0 && z31c != 0)
			{
				fv1 = frechet(z20, z31, z20x, z20y, z31x, z31y, z20c, z31c);
				fv2 = frechet(z31, z20, z31x, z31y, z20x, z20y, z31c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f505 = fv1;
			else
				f505 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z31, f505);

			if (z20c != 0 && z32c != 0)
			{
				fv1 = frechet(z20, z32, z20x, z20y, z32x, z32y, z20c, z32c);
				fv2 = frechet(z32, z20, z32x, z32y, z20x, z20y, z32c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f506 = fv1;
			else
				f506 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z32, f506);

			if (z20c != 0 && z33c != 0)
			{
				fv1 = frechet(z20, z33, z20x, z20y, z33x, z33y, z20c, z33c);
				fv2 = frechet(z33, z20, z33x, z33y, z20x, z20y, z33c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f507 = fv1;
			else
				f507 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z33, f507);

			if (z20c != 0 && z34c != 0)
			{
				fv1 = frechet(z20, z34, z20x, z20y, z34x, z34y, z20c, z34c);
				fv2 = frechet(z34, z20, z34x, z34y, z20x, z20y, z34c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f508 = fv1;
			else
				f508 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z34, f508);

			if (z20c != 0 && z35c != 0)
			{
				fv1 = frechet(z20, z35, z20x, z20y, z35x, z35y, z20c, z35c);
				fv2 = frechet(z35, z20, z35x, z35y, z20x, z20y, z35c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f509 = fv1;
			else
				f509 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z35, f509);

			if (z20c != 0 && z36c != 0)
			{
				fv1 = frechet(z20, z36, z20x, z20y, z36x, z36y, z20c, z36c);
				fv2 = frechet(z36, z20, z36x, z36y, z20x, z20y, z36c, z20c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f510 = fv1;
			else
				f510 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z20, z36, f510);

			if (z21c != 0 && z22c != 0)
			{
				fv1 = frechet(z21, z22, z21x, z21y, z22x, z22y, z21c, z22c);
				fv2 = frechet(z22, z21, z22x, z22y, z21x, z21y, z22c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f511 = fv1;
			else
				f511 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z22, f511);

			if (z21c != 0 && z23c != 0)
			{
				fv1 = frechet(z21, z23, z21x, z21y, z23x, z23y, z21c, z23c);
				fv2 = frechet(z23, z21, z23x, z23y, z21x, z21y, z23c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f512 = fv1;
			else
				f512 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z23, f512);

			if (z21c != 0 && z24c != 0)
			{
				fv1 = frechet(z21, z24, z21x, z21y, z24x, z24y, z21c, z24c);
				fv2 = frechet(z24, z21, z24x, z24y, z21x, z21y, z24c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f513 = fv1;
			else
				f513 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z24, f513);

			if (z21c != 0 && z25c != 0)
			{
				fv1 = frechet(z21, z25, z21x, z21y, z25x, z25y, z21c, z25c);
				fv2 = frechet(z25, z21, z25x, z25y, z21x, z21y, z25c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f514 = fv1;
			else
				f514 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z25, f514);

			if (z21c != 0 && z26c != 0)
			{
				fv1 = frechet(z21, z26, z21x, z21y, z26x, z26y, z21c, z26c);
				fv2 = frechet(z26, z21, z26x, z26y, z21x, z21y, z26c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f515 = fv1;
			else
				f515 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z26, f515);

			if (z21c != 0 && z27c != 0)
			{
				fv1 = frechet(z21, z27, z21x, z21y, z27x, z27y, z21c, z27c);
				fv2 = frechet(z27, z21, z27x, z27y, z21x, z21y, z27c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f516 = fv1;
			else
				f516 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z27, f516);

			if (z21c != 0 && z28c != 0)
			{
				fv1 = frechet(z21, z28, z21x, z21y, z28x, z28y, z21c, z28c);
				fv2 = frechet(z28, z21, z28x, z28y, z21x, z21y, z28c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f517 = fv1;
			else
				f517 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z28, f517);

			if (z21c != 0 && z29c != 0)
			{
				fv1 = frechet(z21, z29, z21x, z21y, z29x, z29y, z21c, z29c);
				fv2 = frechet(z29, z21, z29x, z29y, z21x, z21y, z29c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f518 = fv1;
			else
				f518 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z29, f518);

			if (z21c != 0 && z30c != 0)
			{
				fv1 = frechet(z21, z30, z21x, z21y, z30x, z30y, z21c, z30c);
				fv2 = frechet(z30, z21, z30x, z30y, z21x, z21y, z30c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f519 = fv1;
			else
				f519 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z30, f519);

			if (z21c != 0 && z31c != 0)
			{
				fv1 = frechet(z21, z31, z21x, z21y, z31x, z31y, z21c, z31c);
				fv2 = frechet(z31, z21, z31x, z31y, z21x, z21y, z31c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f520 = fv1;
			else
				f520 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z31, f520);

			if (z21c != 0 && z32c != 0)
			{
				fv1 = frechet(z21, z32, z21x, z21y, z32x, z32y, z21c, z32c);
				fv2 = frechet(z32, z21, z32x, z32y, z21x, z21y, z32c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f521 = fv1;
			else
				f521 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z32, f521);

			if (z21c != 0 && z33c != 0)
			{
				fv1 = frechet(z21, z33, z21x, z21y, z33x, z33y, z21c, z33c);
				fv2 = frechet(z33, z21, z33x, z33y, z21x, z21y, z33c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f522 = fv1;
			else
				f522 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z33, f522);

			if (z21c != 0 && z34c != 0)
			{
				fv1 = frechet(z21, z34, z21x, z21y, z34x, z34y, z21c, z34c);
				fv2 = frechet(z34, z21, z34x, z34y, z21x, z21y, z34c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f523 = fv1;
			else
				f523 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z34, f523);

			if (z21c != 0 && z35c != 0)
			{
				fv1 = frechet(z21, z35, z21x, z21y, z35x, z35y, z21c, z35c);
				fv2 = frechet(z35, z21, z35x, z35y, z21x, z21y, z35c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f524 = fv1;
			else
				f524 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z35, f524);

			if (z21c != 0 && z36c != 0)
			{
				fv1 = frechet(z21, z36, z21x, z21y, z36x, z36y, z21c, z36c);
				fv2 = frechet(z36, z21, z36x, z36y, z21x, z21y, z36c, z21c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f525 = fv1;
			else
				f525 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z21, z36, f525);

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
				f526 = fv1;
			else
				f526 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z23, f526);

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
				f527 = fv1;
			else
				f527 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z24, f527);

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
				f528 = fv1;
			else
				f528 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z25, f528);

			if (z22c != 0 && z26c != 0)
			{
				fv1 = frechet(z22, z26, z22x, z22y, z26x, z26y, z22c, z26c);
				fv2 = frechet(z26, z22, z26x, z26y, z22x, z22y, z26c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f529 = fv1;
			else
				f529 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z26, f529);

			if (z22c != 0 && z27c != 0)
			{
				fv1 = frechet(z22, z27, z22x, z22y, z27x, z27y, z22c, z27c);
				fv2 = frechet(z27, z22, z27x, z27y, z22x, z22y, z27c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f530 = fv1;
			else
				f530 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z27, f530);

			if (z22c != 0 && z28c != 0)
			{
				fv1 = frechet(z22, z28, z22x, z22y, z28x, z28y, z22c, z28c);
				fv2 = frechet(z28, z22, z28x, z28y, z22x, z22y, z28c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f531 = fv1;
			else
				f531 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z28, f531);

			if (z22c != 0 && z29c != 0)
			{
				fv1 = frechet(z22, z29, z22x, z22y, z29x, z29y, z22c, z29c);
				fv2 = frechet(z29, z22, z29x, z29y, z22x, z22y, z29c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f532 = fv1;
			else
				f532 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z29, f532);

			if (z22c != 0 && z30c != 0)
			{
				fv1 = frechet(z22, z30, z22x, z22y, z30x, z30y, z22c, z30c);
				fv2 = frechet(z30, z22, z30x, z30y, z22x, z22y, z30c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f533 = fv1;
			else
				f533 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z30, f533);

			if (z22c != 0 && z31c != 0)
			{
				fv1 = frechet(z22, z31, z22x, z22y, z31x, z31y, z22c, z31c);
				fv2 = frechet(z31, z22, z31x, z31y, z22x, z22y, z31c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f534 = fv1;
			else
				f534 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z31, f534);

			if (z22c != 0 && z32c != 0)
			{
				fv1 = frechet(z22, z32, z22x, z22y, z32x, z32y, z22c, z32c);
				fv2 = frechet(z32, z22, z32x, z32y, z22x, z22y, z32c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f535 = fv1;
			else
				f535 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z32, f535);

			if (z22c != 0 && z33c != 0)
			{
				fv1 = frechet(z22, z33, z22x, z22y, z33x, z33y, z22c, z33c);
				fv2 = frechet(z33, z22, z33x, z33y, z22x, z22y, z33c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f536 = fv1;
			else
				f536 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z33, f536);

			if (z22c != 0 && z34c != 0)
			{
				fv1 = frechet(z22, z34, z22x, z22y, z34x, z34y, z22c, z34c);
				fv2 = frechet(z34, z22, z34x, z34y, z22x, z22y, z34c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f537 = fv1;
			else
				f537 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z34, f537);

			if (z22c != 0 && z35c != 0)
			{
				fv1 = frechet(z22, z35, z22x, z22y, z35x, z35y, z22c, z35c);
				fv2 = frechet(z35, z22, z35x, z35y, z22x, z22y, z35c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f538 = fv1;
			else
				f538 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z35, f538);

			if (z22c != 0 && z36c != 0)
			{
				fv1 = frechet(z22, z36, z22x, z22y, z36x, z36y, z22c, z36c);
				fv2 = frechet(z36, z22, z36x, z36y, z22x, z22y, z36c, z22c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f539 = fv1;
			else
				f539 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z22, z36, f539);

			if (z23c != 0 && z24c != 0)
			{
				fv1 = frechet(z23, z24, z23x, z23y, z24x, z24y, z23c, z24c);
				fv2 = frechet(z24, z23, z24x, z24y, z23x, z23y, z24c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f540 = fv1;
			else
				f540 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z24, f540);

			if (z23c != 0 && z25c != 0)
			{
				fv1 = frechet(z23, z25, z23x, z23y, z25x, z25y, z23c, z25c);
				fv2 = frechet(z25, z23, z25x, z25y, z23x, z23y, z25c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f541 = fv1;
			else
				f541 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z25, f541);

			if (z23c != 0 && z26c != 0)
			{
				fv1 = frechet(z23, z26, z23x, z23y, z26x, z26y, z23c, z26c);
				fv2 = frechet(z26, z23, z26x, z26y, z23x, z23y, z26c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f542 = fv1;
			else
				f542 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z26, f542);

			if (z23c != 0 && z27c != 0)
			{
				fv1 = frechet(z23, z27, z23x, z23y, z27x, z27y, z23c, z27c);
				fv2 = frechet(z27, z23, z27x, z27y, z23x, z23y, z27c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f543 = fv1;
			else
				f543 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z27, f543);

			if (z23c != 0 && z28c != 0)
			{
				fv1 = frechet(z23, z28, z23x, z23y, z28x, z28y, z23c, z28c);
				fv2 = frechet(z28, z23, z28x, z28y, z23x, z23y, z28c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f544 = fv1;
			else
				f544 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z28, f544);

			if (z23c != 0 && z29c != 0)
			{
				fv1 = frechet(z23, z29, z23x, z23y, z29x, z29y, z23c, z29c);
				fv2 = frechet(z29, z23, z29x, z29y, z23x, z23y, z29c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f545 = fv1;
			else
				f545 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z29, f545);

			if (z23c != 0 && z30c != 0)
			{
				fv1 = frechet(z23, z30, z23x, z23y, z30x, z30y, z23c, z30c);
				fv2 = frechet(z30, z23, z30x, z30y, z23x, z23y, z30c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f546 = fv1;
			else
				f546 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z30, f546);

			if (z23c != 0 && z31c != 0)
			{
				fv1 = frechet(z23, z31, z23x, z23y, z31x, z31y, z23c, z31c);
				fv2 = frechet(z31, z23, z31x, z31y, z23x, z23y, z31c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f547 = fv1;
			else
				f547 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z31, f547);

			if (z23c != 0 && z32c != 0)
			{
				fv1 = frechet(z23, z32, z23x, z23y, z32x, z32y, z23c, z32c);
				fv2 = frechet(z32, z23, z32x, z32y, z23x, z23y, z32c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f548 = fv1;
			else
				f548 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z32, f548);

			if (z23c != 0 && z33c != 0)
			{
				fv1 = frechet(z23, z33, z23x, z23y, z33x, z33y, z23c, z33c);
				fv2 = frechet(z33, z23, z33x, z33y, z23x, z23y, z33c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f549 = fv1;
			else
				f549 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z33, f549);

			if (z23c != 0 && z34c != 0)
			{
				fv1 = frechet(z23, z34, z23x, z23y, z34x, z34y, z23c, z34c);
				fv2 = frechet(z34, z23, z34x, z34y, z23x, z23y, z34c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f550 = fv1;
			else
				f550 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z34, f550);

			if (z23c != 0 && z35c != 0)
			{
				fv1 = frechet(z23, z35, z23x, z23y, z35x, z35y, z23c, z35c);
				fv2 = frechet(z35, z23, z35x, z35y, z23x, z23y, z35c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f551 = fv1;
			else
				f551 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z35, f551);

			if (z23c != 0 && z36c != 0)
			{
				fv1 = frechet(z23, z36, z23x, z23y, z36x, z36y, z23c, z36c);
				fv2 = frechet(z36, z23, z36x, z36y, z23x, z23y, z36c, z23c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f552 = fv1;
			else
				f552 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z23, z36, f552);

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
				f553 = fv1;
			else
				f553 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z25, f553);

			if (z24c != 0 && z26c != 0)
			{
				fv1 = frechet(z24, z26, z24x, z24y, z26x, z26y, z24c, z26c);
				fv2 = frechet(z26, z24, z26x, z26y, z24x, z24y, z26c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f554 = fv1;
			else
				f554 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z26, f554);

			if (z24c != 0 && z27c != 0)
			{
				fv1 = frechet(z24, z27, z24x, z24y, z27x, z27y, z24c, z27c);
				fv2 = frechet(z27, z24, z27x, z27y, z24x, z24y, z27c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f555 = fv1;
			else
				f555 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z27, f555);

			if (z24c != 0 && z28c != 0)
			{
				fv1 = frechet(z24, z28, z24x, z24y, z28x, z28y, z24c, z28c);
				fv2 = frechet(z28, z24, z28x, z28y, z24x, z24y, z28c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f556 = fv1;
			else
				f556 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z28, f556);

			if (z24c != 0 && z29c != 0)
			{
				fv1 = frechet(z24, z29, z24x, z24y, z29x, z29y, z24c, z29c);
				fv2 = frechet(z29, z24, z29x, z29y, z24x, z24y, z29c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f557 = fv1;
			else
				f557 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z29, f557);

			if (z24c != 0 && z30c != 0)
			{
				fv1 = frechet(z24, z30, z24x, z24y, z30x, z30y, z24c, z30c);
				fv2 = frechet(z30, z24, z30x, z30y, z24x, z24y, z30c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f558 = fv1;
			else
				f558 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z30, f558);

			if (z24c != 0 && z31c != 0)
			{
				fv1 = frechet(z24, z31, z24x, z24y, z31x, z31y, z24c, z31c);
				fv2 = frechet(z31, z24, z31x, z31y, z24x, z24y, z31c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f559 = fv1;
			else
				f559 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z31, f559);

			if (z24c != 0 && z32c != 0)
			{
				fv1 = frechet(z24, z32, z24x, z24y, z32x, z32y, z24c, z32c);
				fv2 = frechet(z32, z24, z32x, z32y, z24x, z24y, z32c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f560 = fv1;
			else
				f560 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z32, f560);

			if (z24c != 0 && z33c != 0)
			{
				fv1 = frechet(z24, z33, z24x, z24y, z33x, z33y, z24c, z33c);
				fv2 = frechet(z33, z24, z33x, z33y, z24x, z24y, z33c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f561 = fv1;
			else
				f561 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z33, f561);

			if (z24c != 0 && z34c != 0)
			{
				fv1 = frechet(z24, z34, z24x, z24y, z34x, z34y, z24c, z34c);
				fv2 = frechet(z34, z24, z34x, z34y, z24x, z24y, z34c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f562 = fv1;
			else
				f562 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z34, f562);

			if (z24c != 0 && z35c != 0)
			{
				fv1 = frechet(z24, z35, z24x, z24y, z35x, z35y, z24c, z35c);
				fv2 = frechet(z35, z24, z35x, z35y, z24x, z24y, z35c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f563 = fv1;
			else
				f563 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z35, f563);

			if (z24c != 0 && z36c != 0)
			{
				fv1 = frechet(z24, z36, z24x, z24y, z36x, z36y, z24c, z36c);
				fv2 = frechet(z36, z24, z36x, z36y, z24x, z24y, z36c, z24c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f564 = fv1;
			else
				f564 = fv2;
			printf("Frechet distance between %d and %d is: %f\n", z24, z36, f564);

			if (z25c != 0 && z26c != 0)
			{
				fv1 = frechet(z25, z26, z25x, z25y, z26x, z26y, z25c, z26c);
				fv2 = frechet(z26, z25, z26x, z26y, z25x, z25y, z26c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f565 = fv1;
			else
				f565 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z26, f565); printf("\n");
			if (z25c != 0 && z27c != 0)
			{
				fv1 = frechet(z25, z27, z25x, z25y, z27x, z27y, z25c, z27c);
				fv2 = frechet(z27, z25, z27x, z27y, z25x, z25y, z27c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f566 = fv1;
			else
				f566 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z27, f566); printf("\n");

			if (z25c != 0 && z28c != 0)
			{
				fv1 = frechet(z25, z28, z25x, z25y, z28x, z28y, z25c, z28c);
				fv2 = frechet(z28, z25, z28x, z28y, z25x, z25y, z28c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f567 = fv1;
			else
				f567 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z28, f567); printf("\n");

			if (z25c != 0 && z29c != 0)
			{
				fv1 = frechet(z25, z29, z25x, z25y, z29x, z29y, z25c, z29c);
				fv2 = frechet(z29, z25, z29x, z29y, z25x, z25y, z29c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f568 = fv1;
			else
				f568 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z29, f568); printf("\n");

			if (z25c != 0 && z30c != 0)
			{
				fv1 = frechet(z25, z30, z25x, z25y, z30x, z30y, z25c, z30c);
				fv2 = frechet(z30, z25, z30x, z30y, z25x, z25y, z30c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f569 = fv1;
			else
				f569 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z30, f569); printf("\n");

			if (z25c != 0 && z31c != 0)
			{
				fv1 = frechet(z25, z31, z25x, z25y, z31x, z31y, z25c, z31c);
				fv2 = frechet(z31, z25, z31x, z31y, z25x, z25y, z31c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f570 = fv1;
			else
				f570 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z31, f570); printf("\n");

			if (z25c != 0 && z32c != 0)
			{
				fv1 = frechet(z25, z32, z25x, z25y, z32x, z32y, z25c, z32c);
				fv2 = frechet(z32, z25, z32x, z32y, z25x, z25y, z32c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f571 = fv1;
			else
				f571 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z32, f571); printf("\n");

			if (z25c != 0 && z33c != 0)
			{
				fv1 = frechet(z25, z33, z25x, z25y, z33x, z33y, z25c, z33c);
				fv2 = frechet(z33, z25, z33x, z33y, z25x, z25y, z33c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f572 = fv1;
			else
				f572 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z33, f572); printf("\n");

			if (z25c != 0 && z34c != 0)
			{
				fv1 = frechet(z25, z34, z25x, z25y, z34x, z34y, z25c, z34c);
				fv2 = frechet(z34, z25, z34x, z34y, z25x, z25y, z34c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f573 = fv1;
			else
				f573 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z34, f573); printf("\n");

			if (z25c != 0 && z35c != 0)
			{
				fv1 = frechet(z25, z35, z25x, z25y, z35x, z35y, z25c, z35c);
				fv2 = frechet(z35, z25, z35x, z35y, z25x, z25y, z35c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f574 = fv1;
			else
				f574 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z35, f574); printf("\n");

			if (z25c != 0 && z36c != 0)
			{
				fv1 = frechet(z25, z36, z25x, z25y, z36x, z36y, z25c, z36c);
				fv2 = frechet(z36, z25, z36x, z36y, z25x, z25y, z36c, z25c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f575 = fv1;
			else
				f575 = fv2;
			printf("Frechet distance between %d and %d is: %f", z25, z36, f575); printf("\n");

			if (z26c != 0 && z27c != 0)
			{
				fv1 = frechet(z26, z27, z26x, z26y, z27x, z27y, z26c, z27c);
				fv2 = frechet(z27, z26, z27x, z27y, z26x, z26y, z27c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f576 = fv1;
			else
				f576 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z27, f576); printf("\n");

			if (z26c != 0 && z28c != 0)
			{
				fv1 = frechet(z26, z28, z26x, z26y, z28x, z28y, z26c, z28c);
				fv2 = frechet(z28, z26, z28x, z28y, z26x, z26y, z28c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f577 = fv1;
			else
				f577 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z28, f577); printf("\n");
			if (z26c != 0 && z29c != 0)
			{
				fv1 = frechet(z26, z29, z26x, z26y, z29x, z29y, z26c, z29c);
				fv2 = frechet(z29, z26, z29x, z29y, z26x, z26y, z29c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f578 = fv1;
			else
				f578 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z29, f578); printf("\n");
			if (z26c != 0 && z30c != 0)
			{
				fv1 = frechet(z26, z30, z26x, z26y, z30x, z30y, z26c, z30c);
				fv2 = frechet(z30, z26, z30x, z30y, z26x, z26y, z30c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f579 = fv1;
			else
				f579 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z30, f579); printf("\n");
			if (z26c != 0 && z31c != 0)
			{
				fv1 = frechet(z26, z31, z26x, z26y, z31x, z31y, z26c, z31c);
				fv2 = frechet(z31, z26, z31x, z31y, z26x, z26y, z31c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f580 = fv1;
			else
				f580 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z31, f580); printf("\n");
			if (z26c != 0 && z32c != 0)
			{
				fv1 = frechet(z26, z32, z26x, z26y, z32x, z32y, z26c, z32c);
				fv2 = frechet(z32, z26, z32x, z32y, z26x, z26y, z32c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f581 = fv1;
			else
				f581 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z32, f581); printf("\n");
			if (z26c != 0 && z33c != 0)
			{
				fv1 = frechet(z26, z33, z26x, z26y, z33x, z33y, z26c, z33c);
				fv2 = frechet(z33, z26, z33x, z33y, z26x, z26y, z33c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f582 = fv1;
			else
				f582 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z33, f582); printf("\n");
			if (z26c != 0 && z34c != 0)
			{
				fv1 = frechet(z26, z34, z26x, z26y, z34x, z34y, z26c, z34c);
				fv2 = frechet(z34, z26, z34x, z34y, z26x, z26y, z34c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f583 = fv1;
			else
				f583 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z34, f583); printf("\n");
			if (z26c != 0 && z35c != 0)
			{
				fv1 = frechet(z26, z35, z26x, z26y, z35x, z35y, z26c, z35c);
				fv2 = frechet(z35, z26, z35x, z35y, z26x, z26y, z35c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f584 = fv1;
			else
				f584 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z35, f584); printf("\n");
			if (z26c != 0 && z36c != 0)
			{
				fv1 = frechet(z26, z36, z26x, z26y, z36x, z36y, z26c, z36c);
				fv2 = frechet(z36, z26, z36x, z36y, z26x, z26y, z36c, z26c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f585 = fv1;
			else
				f585 = fv2;
			printf("Frechet distance between %d and %d is: %f", z26, z36, f585); printf("\n");

			if (z27c != 0 && z28c != 0)
			{
				fv1 = frechet(z27, z28, z27x, z27y, z28x, z28y, z27c, z28c);
				fv2 = frechet(z28, z27, z28x, z28y, z27x, z27y, z28c, z27c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f586 = fv1;
			else
				f586 = fv2;
			printf("Frechet distance between %d and %d is: %f", z27, z28, f586); printf("\n");

			if (z27c != 0 && z29c != 0)
			{
				fv1 = frechet(z27, z29, z27x, z27y, z29x, z29y, z27c, z29c);
				fv2 = frechet(z29, z27, z29x, z29y, z27x, z27y, z29c, z27c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f587 = fv1;
			else
				f587 = fv2;
			printf("Frechet distance between %d and %d is: %f", z27, z29, f587); printf("\n");

			if (z27c != 0 && z30c != 0)
			{
				fv1 = frechet(z27, z30, z27x, z27y, z30x, z30y, z27c, z30c);
				fv2 = frechet(z30, z27, z30x, z30y, z27x, z27y, z30c, z27c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f588 = fv1;
			else
				f588 = fv2;
			printf("Frechet distance between %d and %d is: %f", z27, z30, f588); printf("\n");

			if (z27c != 0 && z31c != 0)
			{
				fv1 = frechet(z27, z31, z27x, z27y, z31x, z31y, z27c, z31c);
				fv2 = frechet(z31, z27, z31x, z31y, z27x, z27y, z31c, z27c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f589 = fv1;
			else
				f589 = fv2;
			printf("Frechet distance between %d and %d is: %f", z27, z31, f589); printf("\n");

			if (z27c != 0 && z32c != 0)
			{
				fv1 = frechet(z27, z32, z27x, z27y, z32x, z32y, z27c, z32c);
				fv2 = frechet(z32, z27, z28x, z32y, z27x, z27y, z32c, z27c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f590 = fv1;
			else
				f590 = fv2;
			printf("Frechet distance between %d and %d is: %f", z27, z32, f590); printf("\n");

			if (z27c != 0 && z33c != 0)
			{
				fv1 = frechet(z27, z33, z27x, z27y, z33x, z33y, z27c, z33c);
				fv2 = frechet(z33, z27, z33x, z33y, z27x, z27y, z33c, z27c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f591 = fv1;
			else
				f591 = fv2;
			printf("Frechet distance between %d and %d is: %f", z27, z33, f591); printf("\n");

			if (z27c != 0 && z34c != 0)
			{
				fv1 = frechet(z27, z34, z27x, z27y, z34x, z34y, z27c, z34c);
				fv2 = frechet(z34, z27, z34x, z34y, z27x, z27y, z34c, z27c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f592 = fv1;
			else
				f592 = fv2;
			printf("Frechet distance between %d and %d is: %f", z27, z34, f592); printf("\n");

			if (z27c != 0 && z35c != 0)
			{
				fv1 = frechet(z27, z35, z27x, z27y, z35x, z35y, z27c, z35c);
				fv2 = frechet(z35, z27, z35x, z35y, z27x, z27y, z35c, z27c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f593 = fv1;
			else
				f593 = fv2;
			printf("Frechet distance between %d and %d is: %f", z27, z35, f593); printf("\n");

			if (z27c != 0 && z36c != 0)
			{
				fv1 = frechet(z27, z36, z27x, z27y, z36x, z36y, z27c, z36c);
				fv2 = frechet(z36, z27, z36x, z36y, z27x, z27y, z36c, z27c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f594 = fv1;
			else
				f594 = fv2;
			printf("Frechet distance between %d and %d is: %f", z27, z36, f594); printf("\n");

			if (z28c != 0 && z29c != 0)
			{
				fv1 = frechet(z28, z29, z28x, z28y, z29x, z29y, z28c, z29c);
				fv2 = frechet(z29, z28, z29x, z29y, z28x, z28y, z29c, z28c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f595 = fv1;
			else
				f595 = fv2;
			printf("Frechet distance between %d and %d is: %f", z28, z29, f595); printf("\n");

			if (z28c != 0 && z30c != 0)
			{
				fv1 = frechet(z28, z30, z28x, z28y, z30x, z30y, z28c, z30c);
				fv2 = frechet(z30, z28, z30x, z30y, z28x, z28y, z30c, z28c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f596 = fv1;
			else
				f596 = fv2;
			printf("Frechet distance between %d and %d is: %f", z28, z30, f596); printf("\n");

			if (z28c != 0 && z31c != 0)
			{
				fv1 = frechet(z28, z31, z28x, z28y, z31x, z31y, z28c, z31c);
				fv2 = frechet(z31, z28, z31x, z31y, z28x, z28y, z31c, z28c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f597 = fv1;
			else
				f597 = fv2;
			printf("Frechet distance between %d and %d is: %f", z28, z31, f597); printf("\n");

			if (z28c != 0 && z32c != 0)
			{
				fv1 = frechet(z28, z32, z28x, z28y, z32x, z32y, z28c, z32c);
				fv2 = frechet(z32, z28, z32x, z32y, z28x, z28y, z32c, z28c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f598 = fv1;
			else
				f598 = fv2;
			printf("Frechet distance between %d and %d is: %f", z28, z32, f598); printf("\n");

			if (z28c != 0 && z33c != 0)
			{
				fv1 = frechet(z28, z33, z28x, z28y, z33x, z33y, z28c, z33c);
				fv2 = frechet(z33, z28, z33x, z33y, z28x, z28y, z33c, z28c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f599 = fv1;
			else
				f599 = fv2;
			printf("Frechet distance between %d and %d is: %f", z28, z33, f599); printf("\n");

			if (z28c != 0 && z34c != 0)
			{
				fv1 = frechet(z28, z34, z28x, z28y, z34x, z34y, z28c, z34c);
				fv2 = frechet(z34, z28, z34x, z34y, z28x, z28y, z34c, z28c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f600 = fv1;
			else
				f600 = fv2;
			printf("Frechet distance between %d and %d is: %f", z28, z34, f600); printf("\n");

			if (z28c != 0 && z35c != 0)
			{
				fv1 = frechet(z28, z35, z28x, z28y, z35x, z35y, z28c, z35c);
				fv2 = frechet(z35, z28, z35x, z35y, z28x, z28y, z35c, z28c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f601 = fv1;
			else
				f601 = fv2;
			printf("Frechet distance between %d and %d is: %f", z28, z35, f601); printf("\n");

			if (z28c != 0 && z36c != 0)
			{
				fv1 = frechet(z28, z36, z28x, z28y, z36x, z36y, z28c, z36c);
				fv2 = frechet(z36, z28, z36x, z36y, z28x, z28y, z36c, z28c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f602 = fv1;
			else
				f602 = fv2;
			printf("Frechet distance between %d and %d is: %f", z28, z36, f602); printf("\n");

			if (z29c != 0 && z30c != 0)
			{
				fv1 = frechet(z29, z30, z29x, z29y, z30x, z30y, z29c, z30c);
				fv2 = frechet(z30, z29, z30x, z30y, z29x, z29y, z30c, z29c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f603 = fv1;
			else
				f603 = fv2;
			printf("Frechet distance between %d and %d is: %f", z29, z30, f603); printf("\n");

			if (z29c != 0 && z31c != 0)
			{
				fv1 = frechet(z29, z31, z29x, z29y, z31x, z31y, z29c, z31c);
				fv2 = frechet(z31, z29, z31x, z31y, z29x, z29y, z31c, z29c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f604 = fv1;
			else
				f604 = fv2;
			printf("Frechet distance between %d and %d is: %f", z29, z31, f604); printf("\n");

			if (z29c != 0 && z32c != 0)
			{
				fv1 = frechet(z29, z32, z29x, z29y, z32x, z32y, z29c, z32c);
				fv2 = frechet(z32, z29, z32x, z32y, z29x, z29y, z32c, z29c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f605 = fv1;
			else
				f605 = fv2;
			printf("Frechet distance between %d and %d is: %f", z29, z32, f605); printf("\n");

			if (z29c != 0 && z33c != 0)
			{
				fv1 = frechet(z29, z33, z29x, z29y, z33x, z33y, z29c, z33c);
				fv2 = frechet(z33, z29, z33x, z33y, z29x, z29y, z33c, z29c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f606 = fv1;
			else
				f606 = fv2;
			printf("Frechet distance between %d and %d is: %f", z29, z33, f606); printf("\n");

			if (z29c != 0 && z34c != 0)
			{
				fv1 = frechet(z29, z34, z29x, z29y, z34x, z34y, z29c, z34c);
				fv2 = frechet(z34, z29, z34x, z34y, z29x, z29y, z34c, z29c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f607 = fv1;
			else
				f607 = fv2;
			printf("Frechet distance between %d and %d is: %f", z29, z34, f607); printf("\n");

			if (z29c != 0 && z35c != 0)
			{
				fv1 = frechet(z29, z35, z29x, z29y, z35x, z35y, z29c, z35c);
				fv2 = frechet(z35, z29, z35x, z35y, z29x, z29y, z35c, z29c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f608 = fv1;
			else
				f608 = fv2;
			printf("Frechet distance between %d and %d is: %f", z29, z35, f608); printf("\n");

			if (z29c != 0 && z36c != 0)
			{
				fv1 = frechet(z29, z36, z29x, z29y, z36x, z36y, z29c, z36c);
				fv2 = frechet(z36, z29, z36x, z36y, z29x, z29y, z36c, z29c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f609 = fv1;
			else
				f609 = fv2;
			printf("Frechet distance between %d and %d is: %f", z29, z36, f609); printf("\n");

			if (z30c != 0 && z31c != 0)
			{
				fv1 = frechet(z30, z31, z30x, z30y, z31x, z31y, z30c, z31c);
				fv2 = frechet(z31, z30, z31x, z31y, z30x, z30y, z31c, z30c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f610 = fv1;
			else
				f610 = fv2;
			printf("Frechet distance between %d and %d is: %f", z30, z31, f610); printf("\n");

			if (z30c != 0 && z32c != 0)
			{
				fv1 = frechet(z30, z32, z30x, z30y, z32x, z32y, z30c, z32c);
				fv2 = frechet(z32, z30, z32x, z32y, z30x, z30y, z32c, z30c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f611 = fv1;
			else
				f611 = fv2;
			printf("Frechet distance between %d and %d is: %f", z30, z32, f611); printf("\n");

			if (z30c != 0 && z33c != 0)
			{
				fv1 = frechet(z30, z33, z30x, z30y, z33x, z33y, z30c, z33c);
				fv2 = frechet(z33, z30, z33x, z33y, z30x, z30y, z33c, z30c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f612 = fv1;
			else
				f612 = fv2;
			printf("Frechet distance between %d and %d is: %f", z30, z33, f612); printf("\n");

			if (z30c != 0 && z34c != 0)
			{
				fv1 = frechet(z30, z34, z30x, z30y, z34x, z34y, z30c, z34c);
				fv2 = frechet(z34, z30, z34x, z34y, z30x, z30y, z34c, z30c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f613 = fv1;
			else
				f613 = fv2;
			printf("Frechet distance between %d and %d is: %f", z30, z34, f613); printf("\n");

			if (z30c != 0 && z35c != 0)
			{
				fv1 = frechet(z30, z35, z30x, z30y, z35x, z35y, z30c, z35c);
				fv2 = frechet(z35, z30, z35x, z35y, z30x, z30y, z35c, z30c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f614 = fv1;
			else
				f614 = fv2;
			printf("Frechet distance between %d and %d is: %f", z30, z35, f614); printf("\n");

			if (z30c != 0 && z36c != 0)
			{
				fv1 = frechet(z30, z36, z30x, z30y, z36x, z36y, z30c, z36c);
				fv2 = frechet(z36, z30, z36x, z36y, z30x, z30y, z36c, z30c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f615 = fv1;
			else
				f615 = fv2;
			printf("Frechet distance between %d and %d is: %f", z30, z36, f615); printf("\n");

			if (z31c != 0 && z32c != 0)
			{
				fv1 = frechet(z31, z32, z31x, z31y, z32x, z32y, z31c, z32c);
				fv2 = frechet(z32, z31, z32x, z32y, z31x, z31y, z32c, z31c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f616 = fv1;
			else
				f616 = fv2;
			printf("Frechet distance between %d and %d is: %f", z31, z32, f616); printf("\n");

			if (z31c != 0 && z33c != 0)
			{
				fv1 = frechet(z31, z33, z31x, z31y, z33x, z33y, z31c, z33c);
				fv2 = frechet(z33, z31, z33x, z33y, z31x, z31y, z33c, z31c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f617 = fv1;
			else
				f617 = fv2;
			printf("Frechet distance between %d and %d is: %f", z31, z33, f617); printf("\n");

			if (z31c != 0 && z34c != 0)
			{
				fv1 = frechet(z31, z34, z31x, z31y, z34x, z34y, z31c, z34c);
				fv2 = frechet(z34, z31, z34x, z34y, z31x, z31y, z34c, z31c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f618 = fv1;
			else
				f618 = fv2;
			printf("Frechet distance between %d and %d is: %f", z31, z34, f618); printf("\n");

			if (z31c != 0 && z35c != 0)
			{
				fv1 = frechet(z31, z35, z31x, z31y, z35x, z35y, z31c, z35c);
				fv2 = frechet(z35, z31, z35x, z35y, z31x, z31y, z35c, z31c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f619 = fv1;
			else
				f619 = fv2;
			printf("Frechet distance between %d and %d is: %f", z31, z35, f619); printf("\n");

			if (z31c != 0 && z36c != 0)
			{
				fv1 = frechet(z31, z36, z31x, z31y, z36x, z36y, z31c, z36c);
				fv2 = frechet(z36, z31, z36x, z36y, z31x, z31y, z36c, z31c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f620 = fv1;
			else
				f620 = fv2;
			printf("Frechet distance between %d and %d is: %f", z31, z36, f620); printf("\n");

			if (z32c != 0 && z33c != 0)
			{
				fv1 = frechet(z32, z33, z32x, z32y, z33x, z33y, z32c, z33c);
				fv2 = frechet(z33, z32, z33x, z33y, z32x, z32y, z33c, z32c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f621 = fv1;
			else
				f621 = fv2;
			printf("Frechet distance between %d and %d is: %f", z32, z33, f621); printf("\n");

			if (z32c != 0 && z34c != 0)
			{
				fv1 = frechet(z32, z34, z32x, z32y, z34x, z34y, z32c, z34c);
				fv2 = frechet(z34, z32, z34x, z34y, z32x, z32y, z34c, z32c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f622 = fv1;
			else
				f622 = fv2;
			printf("Frechet distance between %d and %d is: %f", z32, z34, f622); printf("\n");


			if (z32c != 0 && z35c != 0)
			{
				fv1 = frechet(z32, z35, z32x, z32y, z35x, z35y, z32c, z35c);
				fv2 = frechet(z35, z32, z35x, z35y, z32x, z32y, z35c, z32c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f623 = fv1;
			else
				f623 = fv2;
			printf("Frechet distance between %d and %d is: %f", z32, z35, f623); printf("\n");


			if (z32c != 0 && z36c != 0)
			{
				fv1 = frechet(z32, z36, z32x, z32y, z36x, z36y, z32c, z36c);
				fv2 = frechet(z36, z32, z36x, z36y, z32x, z32y, z36c, z32c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f624 = fv1;
			else
				f624 = fv2;
			printf("Frechet distance between %d and %d is: %f", z32, z36, f624); printf("\n");


			if (z33c != 0 && z34c != 0)
			{
				fv1 = frechet(z33, z34, z33x, z33y, z34x, z34y, z33c, z34c);
				fv2 = frechet(z34, z33, z34x, z34y, z33x, z33y, z34c, z33c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f625 = fv1;
			else
				f625 = fv2;
			printf("Frechet distance between %d and %d is: %f", z33, z34, f625); printf("\n");

			if (z33c != 0 && z35c != 0)
			{
				fv1 = frechet(z33, z35, z33x, z33y, z35x, z35y, z33c, z35c);
				fv2 = frechet(z35, z33, z35x, z35y, z33x, z33y, z35c, z33c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f626 = fv1;
			else
				f626 = fv2;
			printf("Frechet distance between %d and %d is: %f", z33, z35, f626); printf("\n");

			if (z33c != 0 && z36c != 0)
			{
				fv1 = frechet(z33, z36, z33x, z33y, z36x, z36y, z33c, z36c);
				fv2 = frechet(z36, z33, z36x, z36y, z33x, z33y, z36c, z33c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f627 = fv1;
			else
				f627 = fv2;
			printf("Frechet distance between %d and %d is: %f", z33, z36, f627); printf("\n");

			if (z34c != 0 && z35c != 0)
			{
				fv1 = frechet(z34, z35, z34x, z34y, z35x, z35y, z34c, z35c);
				fv2 = frechet(z35, z34, z35x, z35y, z34x, z34y, z35c, z34c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f628 = fv1;
			else
				f628 = fv2;
			printf("Frechet distance between %d and %d is: %f", z34, z35, f628); printf("\n");

			if (z34c != 0 && z36c != 0)
			{
				fv1 = frechet(z34, z36, z34x, z34y, z36x, z36y, z34c, z36c);
				fv2 = frechet(z36, z34, z36x, z36y, z34x, z34y, z36c, z34c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f629 = fv1;
			else
				f629 = fv2;
			printf("Frechet distance between %d and %d is: %f", z34, z36, f629); printf("\n");
			if (z35c != 0 && z36c != 0)
			{
				fv1 = frechet(z35, z36, z35x, z35y, z36x, z36y, z35c, z36c);
				fv2 = frechet(z36, z35, z36x, z36y, z35x, z35y, z36c, z35c);
			}
			else
			{
				fv1 = 0; fv2 = 0;
			}
			if (fv1 <= fv2)
				f630 = fv1;
			else
				f630 = fv2;
			printf("Frechet distance between %d and %d is: %f", z35, z36, f630); printf("\n");

			FILE* ptr;
			ptr = fopen("D:\\SPS Sir Project\\Frechet\\FRECHETDAT\\frechetCheck36.dat", "a");
			fprintf(ptr, "\n%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,YA", g, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40, f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60, f61, f62, f63, f64, f65, f66, f67, f68, f69, f70, f71, f72, f73, f74, f75, f76, f77, f78, f79, f80, f81, f82, f83, f84, f85, f86, f87, f88, f89, f90, f91, f92, f93, f94, f95, f96, f97, f98, f99, f100, f101, f102, f103, f104, f105, f106, f107, f108, f109, f110, f111, f112, f113, f114, f115, f116, f117, f118, f119, f120, f121, f122, f123, f124, f125, f126, f127, f128, f129, f130, f131, f132, f133, f134, f135, f136, f137, f138, f139, f140, f141, f142, f143, f144, f145, f146, f147, f148, f149, f150, f151, f152, f153, f154, f155, f156, f157, f158, f159, f160, f161, f162, f163, f164, f165, f166, f167, f168, f169, f170, f171, f172, f173, f174, f175, f176, f177, f178, f179, f180, f181, f182, f183, f184, f185, f186, f187, f188, f189, f190, f191, f192, f193, f194, f195, f196, f197, f198, f199, f200, f201, f202, f203, f204, f205, f206, f207, f208, f209, f210, f211, f212, f213, f214, f215, f216, f217, f218, f219, f220, f221, f222, f223, f224, f225, f226, f227, f228, f229, f230, f231, f232, f233, f234, f235, f236, f237, f238, f239, f240, f241, f242, f243, f244, f245, f246, f247, f248, f249, f250, f251, f252, f253, f254, f255, f256, f257, f258, f259, f260, f261, f262, f263, f264, f265, f266, f267, f268, f269, f270, f271, f272, f273, f274, f275, f276, f277, f278, f279, f280, f281, f282, f283, f284, f285, f286, f287, f288, f289, f290, f291, f292, f293, f294, f295, f296, f297, f298, f299, f300, f301, f302, f303, f304, f305, f306, f307, f308, f309, f310, f311, f312, f313, f314, f315, f316, f317, f318, f319, f320, f321, f322, f323, f324, f325, f326, f327, f328, f329, f330, f331, f332, f333, f334, f335, f336, f337, f338, f339, f340, f341, f342, f343, f344, f345, f346, f347, f348, f349, f350, f351, f352, f353, f354, f355, f356, f357, f358, f359, f360, f361, f362, f363, f364, f365, f366, f367, f368, f369, f370, f371, f372, f373, f374, f375, f376, f377, f378, f379, f380, f381, f382, f383, f384, f385, f386, f387, f388, f389, f390, f391, f392, f393, f394, f395, f396, f397, f398, f399, f400, f401, f402, f403, f404, f405, f406, f407, f408, f409, f410, f411, f412, f413, f414, f415, f416, f417, f418, f419, f420, f421, f422, f423, f424, f425, f426, f427, f428, f429, f430, f431, f432, f433, f434, f435, f436, f437, f438, f439, f440, f441, f442, f443, f444, f445, f446, f447, f448, f449, f450, f451, f452, f453, f454, f455, f456, f457, f458, f459, f460, f461, f462, f463, f464, f465, f466, f467, f468, f469, f470, f471, f472, f473, f474, f475, f476, f477, f478, f479, f480, f481, f482, f483, f484, f485, f486, f487, f488, f489, f490, f491, f492, f493, f494, f495, f496, f497, f498, f499, f500, f501, f502, f503, f504, f505, f506, f507, f508, f509, f510, f511, f512, f513, f514, f515, f516, f517, f518, f519, f520, f521, f522, f523, f524, f525, f526, f527, f528, f529, f530, f531, f532, f533, f534, f535, f536, f537, f538, f539, f540, f541, f542, f543, f544, f545, f546, f547, f548, f549, f550, f551, f552, f553, f554, f555, f556, f557, f558, f559, f560, f561, f562, f563, f564, f565, f566, f567, f568, f569, f570, f571, f572, f573, f574, f575, f576, f577, f578, f579, f580, f581, f582, f583, f584, f585, f586, f587, f588, f589, f590, f591, f592, f593, f594, f595, f596, f597, f598, f599, f600, f601, f602, f603, f604, f605, f606, f607, f608, f609, f610, f611, f612, f613, f614, f615, f616, f617, f618, f619, f620, f621, f622, f623, f624, f625, f626, f627, f628, f629, f630);

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
		printf("MAX %d. = %f\n", i + 1, max);
	}
	//printf("\n");
	min = temp[0];
	for (i = 1; i < n1; i++)
	{
		if (temp[i] < min)
			min = temp[i];
	}
	printf("FRECHET  DISTANCE OF ZONE-%d WITH  RESPECT TO ZONE-%d IS %f UNITS.\n", z1, z2, min);
	//getch();
	return (min);
}
