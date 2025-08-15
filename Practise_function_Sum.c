// Taking scanf from the client worked inside function
#include <stdio.h>

int addNumbers(){
    
    int a ,b;
    printf("Enter a number: ");
    scanf("%d %d", &a,&b);
    
    int sum = a + b;
    
    return sum;
    
}


int main() {

int sum = addNumbers();

printf("sum is : %d\n",sum);



    return 0;
}
