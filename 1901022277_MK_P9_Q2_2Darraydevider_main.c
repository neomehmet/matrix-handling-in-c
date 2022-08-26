#include <stdio.h>
#include <stdlib.h>
#define max_length 15
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j, row, col;
	printf("row after column enter");
	scanf("%d %d",&row, &col);
	float array[row][col];
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("gir");
			scanf("%f",&array[i][j]);
		}
	}	
	
	printf("array\n");
	write_ar(row, col, array);
	bolme(row, col,array);
	printf("bolum\n");
	write_ar(row, col, array);
	return 0;
}
