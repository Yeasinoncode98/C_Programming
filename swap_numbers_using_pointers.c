#include<stdio.h>
int main(){

int x = 5, y = 10;

int temp;
int *p1;
int *p2;

p1 = &x;
p2 = &y;


printf("Before Swap : x = %d, y = %d\n",x,y);

temp = *p1;
*p1 = *p2;
*p2 = temp;

printf("After swap : x= %d, y = %d\n",x,y);
    
    
return 0;    
}
