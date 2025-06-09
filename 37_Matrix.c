#include<stdio.h>
int main()

{

 int row,col,matrix[100][100],mat1[100][100],mat2[100][100];

 printf("Enter row: ");
 scanf("%d", &row);


 printf("Enter col: ");
 scanf("%d", &col);

 for(int i =0; i < row; i++) {
        for(int j =0; j< col; j++) {
            printf("1st matrix %d %d : ",i,j);
            scanf("%d", & mat1[i][j]);
        }
 }


 for(int i =0; i < row; i++) {
        for(int j =0; j< col; j++) {
            printf("2nd matrix %d %d : ",i,j);
            scanf("%d", & mat2[i][j]);
        }
 }


 for(int i = 0;i< row; i++) {
    for(int j = 0;  j< col;j++) {
        matrix[i][j] = mat1[i][j] + mat2[i][j];
    }
 }




 for(int i =0; i< row; i++) {
    for(int j = 0; j<col; j++) {
        printf("  %d  ",matrix[i][j]);

        if(j == col-1){
            printf("\n\n");
        }
    }
 }



    return 0;
}
