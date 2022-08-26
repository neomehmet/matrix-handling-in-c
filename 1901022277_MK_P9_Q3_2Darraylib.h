#ifndef my_lib
#define my_lib
#define max 15



void add_array(int *row, int *col, int *array);
void write_array(int row, int col, int *array);
void write_row_col(int row, int col, int *array, int rowx, int colx);
void search_x_in_array(int row, int col, int *array, int x);
void find_non_repeat(int row, int col, int *array);
void find_min_element(int row, int col, int *array);
void find_max_row_col(int row, int col, int *array);
void sort_array(int row, int col, int *array);
void transpoze(int row, int col, int *array, int *rowt, int *colt, int *tranpoze);
void product_array(int row, int col,int *array, int row2, int col2, int *array2, int *rowR, int *colR, int *arrayR);
void check_identity(int row, int col, int *array);
void check_symmetric(int row, int col, int *array);


#endif
