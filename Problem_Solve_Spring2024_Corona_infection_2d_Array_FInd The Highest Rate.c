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

int max = -1;

for(int i = 0 ; i < row ; i++){
    for(int j = 0 ; j < col; j++){
        if(matrix[i][j] > max){
            max = matrix[i][j];
        }
    }
}

printf("\n");

printf("The Highest Infection Rate is : %d\n",max);




 return 0;
}
