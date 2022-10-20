#include<math.h>
#include<stdlib.h>
#include <stdio.h>
int main()
{
	double res, x, chast, fac, sign;
	int k, n;
	//amount of elements in range
	n = 13;
	
	//11 times program counts cosx
	for (int j=0; j < 11; j++) {
		x = rand() % 15; res = 1.0; chast = 1; fac = 0.0; sign = -1.0;
		for (k = 0; k < n; k++) {
			//fac is changing factorial
			//chast is a multiplier for every next element of range
			//res is a result
			//sign is a sign for elements of range
			fac++;
			chast *= (x * x) / ((fac) * (fac + 1.0)) * (-1);
			res += chast;
			fac++;

		}//writing out 3 first and last results
		if ((j < 3) | (j > k - 4)) {
			printf("%s", "argument x is equal to : "); printf("%lf", x); printf("\n");
			printf("%s", "got sum of range : "); printf("%1.7e", res); printf("\n");
			printf("%s", "cos(x) is really equal to : "); printf("%1.7e", cos(x)); printf("\n");
			printf("Difference : ");
			printf("%0.7e", cos(x) - res); printf("\n\n\n");
		}

	}
}