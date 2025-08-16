#include<stdio.h>
int main() {

	int temp[7];

	for(int i = 0 ; i < 7 ; i++) {
		scanf("%d",&temp[i]);
	}

	int count = 0;
	int maxCount = 0;


	for(int i = 0 ; i < 7 ; i++) {
		if(temp[i] > 35 ) {
			count++;
			if(count > maxCount) {
				maxCount = count;
			}
		}
		else {
			count =0;
		}
	}

if (maxCount > 3) {
        printf("Heat-wave Burning\n");
    } else {
        printf("No more heat wave\n");
    }



	return 0;
}
