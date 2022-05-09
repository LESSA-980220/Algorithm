#include <stdio.h>

int main(){
	int n;
	long long arr[200];
	scanf("%d", &n);
	arr[0] = 1; arr[1] = 1; arr[2] = 1;
	for (int i=3; i<n; i++){
		arr[i] = arr[i-1] + arr[i-3];
	}
	printf("%lld\n", arr[n-1]);
}