#include<stdio.h>
#include<string.h>

int main(){
    
    char str[100];
    int i,j,isPalindrome = 1;
    
    scanf("%s",str);
    
    
    int len = strlen(str);
     j = len - 1;
    
    
    for(i = 0 ;i < j; i++, j--){
        if(str[i] != str[j]){
            isPalindrome = 0;
            break;
        }
    }
    
    
    if(isPalindrome){
        printf("Is a Palindrome\n");
    }
    
    else{
        printf("Not Palindrome\n");
    }
    
    
    
    
    
    
    return 0;
}
