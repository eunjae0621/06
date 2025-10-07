#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b) {
	return (a+b);
}

int square(int n) {
	return (n*n);
}

int get_max(int x, int y) {
	if(x > y) 
		return x;
	else
		return y;
}

int main(int argc, char *argv[]) {
	printf("sum two result is %i\n", sumTwo(2, 3));
	
	printf("square result is %i\n", square(5));
	
	printf("getmax result is %i\n", get_max(10, 13));
	
	return 0;
}
