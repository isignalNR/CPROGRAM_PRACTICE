#include <stdio.h>
#define ROW 2
#define COL 3


int main(){

int i = 4, j = 6;
int arr[ROW][COL]; // OK
int new_arr[i][j]; // ERROR
return 0;

}


