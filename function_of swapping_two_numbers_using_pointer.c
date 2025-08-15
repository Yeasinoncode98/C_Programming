
#include <stdio.h>

int swapNumbers(int *x ,int *y){

int temp;

temp = *x;
*x = *y;
*y = temp;
    
}



int main() {
    
  int a ,b;
  scanf("%d %d",&a,&b);
   
  int result = swapNumbers(&a,&b);
  printf("swap a = %d, swap b = %d\n",a,b);
  
    return 0;
}
