#include<stdio.h>
int main(){
    
    int temp ;
    scanf("%d",&temp);
    
    if(temp >= 40){
        printf("Baire Agun\n");
    }
    
    else if (temp >= 30 && temp <= 40 ){
        printf("Sabdhane Jao\n");
    }
    
    else{
        printf("Baire Jaoa Jabe\n");
    }
    

    return 0;
}
