#include <stdio.h>
#include <stdlib.h>
#define maxlength 15

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* hocam merhaba sort fonksiyonu çarpmadan önce olduðu için çarpma yanlýþ çýkýyor gibi görünüyordu dikkatinize 
bende transpozu daha sonra cagýrarak kullandým sort olmus halini transpoze edip carptým saygýlarýmla*/
int main(int argc, char *argv[]) {
	int row, column, array[maxlength][maxlength];
	int rowt, columnt, trans[maxlength][maxlength];
	int rowR, columnR, result[maxlength][maxlength];
	int searchx=5;
	add_array(&row, &column, array);
	write_array(row,column,array);
	write_row_col(row,column,array,0,1);
	search_x_in_array(row,column,array,searchx);
	find_non_repeat(row, column, array);
	find_min_element(row, column, array);
	find_max_row_col(row,column,array);
	sort_array(row,column,array);  
	transpoze(row, column, array, &rowt, &columnt, trans);
	write_array(rowt,columnt,trans);
	product_array(row,column,array, rowt, columnt, trans, &rowR, &columnR, result);
	write_array(rowR,columnR,result);
	
	check_identity(row, column, array);
	check_symmetric(row,column,array);
	return 0;
}
