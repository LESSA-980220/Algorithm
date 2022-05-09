#include <stdio.h>

long long factorial(int n){
	long long sum=1;
	for (int i=1; i<=n; i++){
		sum *= i;
	}
	return sum;
}

long long new_func(int a, int b){
	long long sum=1;
	for (int i=b-a+1; i<=b; i++){
		sum *= i;
	}
	return sum;
}

int main(){
	int T, n, m;
	scanf("%d", &T);
	for (int i=0; i<T; i++){
		scanf("%d", &n);
		scanf("%d", &m);
		if (n>m-n)
			n = m-n;
		long long num = new_func(n,m)/factorial(n);
		printf("%lld\n", num);
	}
}