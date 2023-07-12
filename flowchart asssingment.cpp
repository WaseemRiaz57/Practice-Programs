1#include <stdio.h>
2 int main(void)
3 {
4 	int x, i, j;
5 	// prompt user for input
6 	printf("%s", "Enter an integer in the range 1-20:");
7 	scanf("%d", &x); // read values for x
8 	for (i = 1; i <= x; i++) { // count from 1 to x
9		for (j = 1; j <= x; j++) { // count from 1 to x
 		if (j==i)
11 				printf("%c", '@'); // output @
12	 		else
13 				printf("-");
14 		} 	// end inner for
15 		printf("\n");
16 	} // end outer for
17 } // end of main

