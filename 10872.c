#include "stdio.h"

int main(){

	int N,i,fact=1;

	scanf("%d",&N);

	for(i=0;i<N;i++){

		fact *= (N-i);

	}

	printf("%d\n",fact);

	return 0;

}