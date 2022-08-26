#include <stdio.h>
#include <stdlib.h>
#include "1901022277_MK_P9_Q2_2Darraydevider.h"

void write_ar(int rowx, int colx, float array[rowx][colx]){
	int i, j;
	
	for(i=0; i<rowx; i++){
		for(j=0; j<colx; j++){
			printf("%f \t", array[i][j]);
		}
		printf("\n");
	}
}

void bolme(int row, int col, float *array){
	int i,j;
	for(i=0; i<row*col; i++){
		*array= (*array)/2;
		array++;
	}
}

