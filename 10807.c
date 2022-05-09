#include <stdio.h>

int main(){
	int N, V, num=0, arr[1000];
	scanf("%d", &N);
	for (int i=0; i<N; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &V);
	for (int i=0; i<N; i++){
		if (arr[i] == V)
			num += 1;
	}
	printf("%d\n", num);
}