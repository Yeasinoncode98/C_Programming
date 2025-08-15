#include<stdio.h>
int main(){
    
    int x = 10;
    int *p ;
    
    p = &x;
    
    *p = 12;
    
    printf("X er value: %d\n",x);
    printf("X er address: %p\n",&x);
    printf("p er value(x er adress): %p\n",p);
    printf("p er address  e je  value ache: %d\n",*p);

    
    
    
    
    return 0;
}
