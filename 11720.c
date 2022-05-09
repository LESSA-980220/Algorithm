#include <stdio.h>

int main(){
	int N, sub, sum=0;
	scanf("%d", &N);
	for (int i=0; i<N; i++){
		scanf("%1d", &sub);
		sum += sub;
	}
	printf("%d\n", sum);
}