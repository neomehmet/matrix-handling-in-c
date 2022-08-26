#include <stdio.h>
#include <stdlib.h>
#include "1901022277_MK_P9_Q3_2Darraylib.h"
#define max 15

void add_array(int *row, int *col, int *array){
	int i,j,rowx,colx,data;
	printf("please enter row length after column length");
	scanf("%d %d",&rowx,&colx);
	*row=rowx;
	*col=colx;
	if(*row>max){
		*row=max;
	}
	if(*col>max){
		*col=max;
	}
	for(i=0; i<rowx; i++){
		for(j=0; j<colx; j++){
			printf("please enter an element for array<<--");
			scanf("%d",&data);
			*array=data;
			array++;
		}
		printf("\n");
	}	
}

void write_array(int row, int col, int *array){	
	int i,j;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d\t",*array);
			array++;
		}
		printf("\n");
	}
}

void write_row_col(int row, int col, int *array, int rowx, int colx){ //rowx and colx values must be index value
	int i,j,index;
	if(rowx<=row && colx<=col){
		index=(rowx*col) +colx;
		printf("[%d][%d] index element is--->%d\n",rowx,colx, *(array+index) );
	}else{ 
		printf("values is bigger than array indexes which given from programmer,\nthey must be fixed and try again\n");
	}
	
}

void search_x_in_array(int row, int col, int *array, int x){
	int i,j,repeat=0;
	for(i=0; i<(row*col); i++){
		if(x == *array){
			repeat++;
		}
		array++;
	}
	printf("array include this value %d, %d times\n",x,repeat);
}

void find_non_repeat(int row, int col, int *array){
	int i,j,repeat_flag=0,non_repeat=0;
	int *temp,*array1,k,h;
	temp=array;
	array1=array;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			for(k=0; k<row; k++){
				for(h=0; h<col; h++){
					if( *temp==*array ){
						repeat_flag++;	
						}
					array++;
				}
			}if(repeat_flag==1){
				non_repeat++;
				repeat_flag=0;
			}
			*temp++;
			array=array1;
			repeat_flag=0;
		}
	}
	printf("non repeat element number is--->%d\n",non_repeat);
}

void find_min_element(int row, int col, int *array){
	int i,j,min;
	min=*array;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(min>*array)
				min=*array;
			array++;
		}
	}
	printf("The minumum element in array --->%d\n",min);
}

void find_max_row_col(int row, int col, int *array){
	int i,j,k;
	int *temp, maxi;
	temp=array;

	for(i=0; i<row; i++){// max eleman buluyor satýrlarda
		maxi=*array;
		for(j=0; j<col; j++){
			if(maxi<*array){
				maxi=*array;
			}
			array++;
		}
		printf("max element--> %d     in %d. row \n",maxi,(i+1));
		
	} 
	
	for(i=0; i<col; i++){//max elemaný buluyor sutunlarda
		array=temp;
		maxi=*array;
		for(j=0; j<row; j++){
			if(maxi<*array){
				maxi=*array;
			}
			array+=col;
		}
		printf("max elemenst--> %d    in %d. column  \n",maxi,(i+1));
		temp++;	
	}
}

void sort_array(int row, int col, int *array){
	int i,j,k;
	int temp, *temp1;
	temp1=array;
	printf("sorting is processing\n");
	for(k=0; k<row; k++){
		array=temp1;
		array+=(k*col);//arrayý satýr baslarýndaký satýr sayýsýna gore o satýrdaký ilk elemana getiriyor
		for(i=0; i<(col-1); i++){//bubble sort 
			for(j=0; j<(col-i-1); j++){
				if(*(array+j)>*(array+j+1)){
					temp=*(array+j+1);
					*(array+j+1)=*(array+j);
					*(array+j)=temp;
				}			
			}
		}
	}
}

void transpoze(int row, int col, int *array, int *rowt, int *colt, int *trans){
	*rowt =col;
	*colt=row;
	int i,j,*temp;
	temp=array;
	printf("Transpoze is processing \n");
	for(i=0; i<col; i++){
		array=temp;
		for(j=0; j<row; j++){
			*trans=*array;
			trans++; //transpoze dizisi icin 1 sonraki elemana gecme
			array+=col; //arrayda sutun satýsý kadar kaydýrýp ilk dongude transpozeun hangi sutunundaysa o elemana denk gelecek
		}
		temp++;
	}
}

void product_array(int row, int col,int *array, int row2, int col2, int *array2, int *rowR, int *colR, int *result){
	// colR rowR arrayR variables for result matrix
	int i,j,k;
	int *temp,*temp1;
	*rowR=row;
	*colR=col2;
	
	int *resulttemp;
	resulttemp=result;
	
	for(i=0; i<row*col2; i++){
		*result=0;
		result++;
	}
	result=resulttemp;
	
	printf("product is processing\n");
	temp=array2;
	temp1=array2;
	
	
	if(row==col2 && col==row2){ // matrix carpmasi icin carpým kurallarýný kontrol ediyor
		for(k=0; k<row; k++){// bu for satýr sayabilmek icin 
			for(i=0; i<col2; i++){ // bu for satýrda diðer eleman carpýmýna gecmek icin
				array2=temp;
				for(j=0; j<row2; j++){ // bu forda ýse array ýcýn satýr elemanlarini almak  ayný zamanda ikinci arrayin sutunundaki elemanlarý alabilmek için
					int index = 0 ;
					index = j*col2 ;	
					*result += (*(array+j) * (*(array2+index)));
				}
				result++;
				temp++;
				
			}
			temp = temp1;
			array += col; // ilk girilen arrayi alt satýra geçirmek için
			
		}
	}
	
}

void check_identity(int row, int col, int *array){
	int i,j;
	int sum=0;
	int *temp;
	temp=array;
	for(i=0; i<row; i++){
		array=(temp+(i*col)); //arrayda satir degisimi icin
		for(j=0; j<col; j++){
			if(i==j && *array==1)
				sum++;
			else if(i!=j && *array==0)
				sum++;
			else{}
			array++;// arrayin satirindaki elemanlari almak icin
			}
	}
	if(sum==(col*row))// eger matrix pivotlar 1 ve harici elemanlar sýfýr degil ise sum deðiskeni artmamistir ve eleman sayisina esit cikmayacaktir
			printf("this matrix is identity matrix\n");
	else
			printf("this is not a identity matris\n");
}

void check_symmetric(int row, int col, int *array){
	int trans[col][row];
	int flag=0,i,j;
	int *temp, *sabit;
	temp=array;
	sabit=array;
	for(i=0; i<col; i++){
		array=temp;
		for(j=0; j<row; j++){
			trans[i][j]=*array;
			array+=col; //arrayda sutun satýsý kadar kaydýrýp ilk dongude transpozeun hangi sutunundaysa o elemana denk gelecek
		}
		temp++;
	}
	array=sabit;
	int *temptrans;
	temptrans=trans;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(*temptrans==*array)
				flag++;
			array++;
			temptrans++;

			
		}
	}
	
	if(flag==row*col){
		printf("this matris is a symmetric matrix\n");
	}else{
		printf("this is not a symmetric matrix\n");
	}
}



