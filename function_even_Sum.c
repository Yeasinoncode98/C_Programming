#include <stdio.h>

int evenNumbers(int n); 

int main(){

printf("Sum is : %d\n", evenNumbers(10));
// printf("Sum is : %d\n", evenNumbers(20));
// printf("Sum is : %d\n", evenNumbers(30));


    return 0;
}


int evenNumbers(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(i %2 == 0){
        sum = sum + i;
        }
    }
        return sum;
}
