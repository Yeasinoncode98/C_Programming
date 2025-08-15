
#include <stdio.h>


int factorial(int n){
    if(n >= 1){
         return n * factorial(n-1);
    }
    
    else{
        return 1;
       
    }
}



 int main() {

 int num;
 scanf("%d",&num);

 int result = factorial(num);
 printf("%d",result);

    return 0;
 }





