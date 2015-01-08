/*
 *  matrix shit
 *  
 * 	by khaled
 */

#include <stdio.h>
#include <stdlib.h>

int color(int n);
void print_line();

int main() {
	int i = 0, j;
	while(1) {
		print_line();
		i++;
		if( i % 15 == 0) printf("\n\033[F\033[J");
		if( i % 15000 == 0) {
		for(j = 0 ; j < 15 ; j++) print_line();
			printf("\n");
		}
	}
return 0;
}

int color(int n) {
	int colors[] = {92 , 98};
	if( n % 2 == 0 ) return colors[0];
	return colors[1];
}

void print_line() {
	int r;
	char c ;
	r = rand() % 100;
	c = r;
	if( (r >= 65 && r <= 90) || ( r >= 97 && r<= 122) || (r >= 33 && r >= 47) ) 
		printf("\033[%dm %c%-4s\033[0m",color(r),c," ");
	else
		printf("\033[%dm %d%-4s\033[0m",color(r),r%10," ");
}
