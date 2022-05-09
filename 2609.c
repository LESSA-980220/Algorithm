#include <stdio.h>

int maxf(int a, int b){
	int num=1;
	for (int count=1; count<=(a>b?b:a); count++){
		if (a%count==0 && b%count==0){
			num = count;
		}
	}
	return num;
}

int minf(int a, int b){
	int a1, b1, num;
	a1 = a/maxf(a,b);
	b1 = b/maxf(a,b);
	num = maxf(a,b)*a1*b1;
	return num;
}

int main(){
	int a, b;
	while(a>10000 || b>10000 || a<=0 || b<=0){
		scanf("%d %d", &a, &b);
	}
	printf("%d\n%d", maxf(a,b), minf(a,b));
}