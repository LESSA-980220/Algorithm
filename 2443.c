#include <stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	for (int i=0; i<k; i++){
		for (int j=0; j<i; j++){
			printf(" ");
		}
		for (int j=2*(k-i)-1; j>0; j--){
			printf("*");
		}
		printf("\n");
	}
}