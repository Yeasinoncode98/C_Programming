#include <stdio.h>

int main() {

int x,y,z, arr[10][10][10];


printf("Enter array size[x][y][z]:  ");
scanf("%d %d %d", &x,&y,&z);


for(int i =0;i <x;i++) {
    for(int j=0;j<y;j++) {
        for(int k=0;k<z;k++) {
            printf("Array[%d][%d][%d] : ",i,j,k);
            scanf("%d", &arr[i][j][k]);
        }
    }
}




for(int i =0;i <x;i++) {
    for(int j=0;j<y;j++) {
        for(int k=0;k<z;k++) {
            printf("Array[%d][%d][%d] : %d\n",i,j,k,arr[i][j][k]);

        }
    }
}

    return 0;
}
