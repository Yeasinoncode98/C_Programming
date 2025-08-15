
#include <stdio.h>


int factorial(int n){
    if(n == 0){
        return 1;
    }
    
    else{
        return n * factorial(n-1);
    }
}



 int main() {

 int num;
 scanf("%d",&num);

 int result = factorial(num);
 printf("%d",result);

    return 0;
 }





