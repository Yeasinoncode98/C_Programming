#include<stdio.h>

int main(){
    
//2D Array Sum of the elements

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


//calculate the sum 

int sum = 0;
for(int i = 0 ; i < row ; i++){
    for(int j = 0; j < col ; j++){
        sum = sum + matrix[i][j];
    }
}


//printing the 2d_Matrix_

printf("\nThe Matrix is : \n");

for(int i = 0 ; i < row ; i++){
    for(int j = 0 ; j < col ; j++){
        printf("%d\t",matrix[i][j]);
    }
    
    printf("\n");
}


//Printing The Sum of The Elements of Matrix_

printf("The sum of the elements of the matrix is :%d\n",sum);




 return 0;
}
