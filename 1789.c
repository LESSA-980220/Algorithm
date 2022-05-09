#include <stdio.h>

int main(){
	long long S, sum=0;
	int count=0, add=1;
	scanf("%lld", &S);
	while(sum != S){
		sum += add;
		if (sum > S){
			sum -= add;
			add += sum-S;
			sum += add;
			break;
		}
		add++;
		count++;
	}
	printf("%d\n", count);
}