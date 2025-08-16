#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int data[n][3];
    
    for(int i = 0; i < n ; i++){
        scanf("%d %d %d", &data[i][0],&data[i][1],&data[i][2]);
    }
    
    
    float maxRatio = -1;
    int bestYear = -1;
    
    for(int i = 0 ; i < n ; i++){
        float ratio = (float)data[i][1] / (float)data[i][0];
        if(ratio > maxRatio){
            maxRatio = ratio;
            bestYear = data[i][2];
        }
        
    }
    
    printf("Best Year: %d\n",bestYear);
    
    return 0;
}
