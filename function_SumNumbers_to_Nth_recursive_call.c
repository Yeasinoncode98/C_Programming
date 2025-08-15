
#include <stdio.h>

int sumNumbers(int n){
    if(n == 0){
        return 0;
    }
    
    else{
        return n + sumNumbers(n-1);
    }
}





 int main() {

int num;
scanf("%d",&num);

int result = sumNumbers(num);

printf("Sum is : %d\n",result);


    return 0;
 }





