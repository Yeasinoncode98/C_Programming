#include<stdio.h>
int main()
{

    int row,col, matrix[100][100];

    printf("Enter Row: ");
    scanf("%d", &row);

    printf("Enter col: ");
    scanf("%d", &col);

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("Matrix:%d %d: ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("  %d  ",matrix[i][j]);
            if(j == col -1 )
            {
                printf("\n\n");
            }

        }
    }






    return 0;
}
