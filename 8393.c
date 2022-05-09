#include <stdio.h>

int main(){
	int a, sum=0;
	scanf("%d", &a);
	for (int i=0; i<a+1; i++){
		sum += i;
	}
	printf("%d", sum);
}