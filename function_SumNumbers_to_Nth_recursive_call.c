
#include <stdio.h>

int sumNumbers(int n){
    if(n != 0){
         return n + sumNumbers(n-1);
    }
    
    else{
     
        return n;
    }
}





 int main() {

int num;
scanf("%d",&num);

int result = sumNumbers(num);

printf("Sum is : %d\n",result);


    return 0;
 }





