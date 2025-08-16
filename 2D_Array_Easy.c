#include<stdio.h>

int main(){
    
//2D Array

int row;
int col;

int matrix[100][100];

printf("Enter the number of rows: ");
scanf("%d",&row);

printf("Enter the number of columns: ");
scanf("%d",&col);

//input the elements of the matrix

for(int i = 0 ; i < row ; i++){
    for(int j = 0 ; j < col ; j++){
        printf("Enter element at row %d, columun %d: ", i+1, j+1);
        scanf("%d",&matrix[i][j]);
    }
}

printf("\nThe Matrix is : \n");

for(int i = 0 ; i < row ; i++){
    for(int j = 0 ; j < col ; j++){
        printf("%d\t",matrix[i][j]);
    }
    
    printf("\n");
}






 return 0;
}
