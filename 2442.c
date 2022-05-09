#include <stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	for (int i=0; i<k; i++){
		for (int j=k-i; j>1; j--){
			printf(" ");
		}
		for (int j=0; j<2*i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}