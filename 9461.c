#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for (int x=0; x<T; x++){
		int N;
		long long arr[101];
		arr[0] = 1; arr[1] = 1; arr[2] = 1;
		scanf("%d", &N);
		for (int i=3; i<N; i++){
			arr[i] = arr[i-2] + arr[i-3];
		}
		printf("%lld\n", arr[N-1]);
	}
}