#include <stdio.h>

int main(){
	int n;
	long long a1=1, a0=0;
	long long fibnum=0;
	scanf("%d", &n);
	if (n == 0 || n == 1)
		printf("%d\n", n);
	else {
		for (int i=0; i<n-1; i++){
			fibnum = a1+a0;
			a0 = a1;
			a1 = fibnum;
		}
		printf("%lld\n", fibnum);
	}
}
