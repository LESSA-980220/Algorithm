#include <stdio.h>

int main(){
	int x,i,temp,sum,res;
	int a[1000]={0};
	sum = 0;
	res = 0;
	scanf("%d", &x);
	for (i=0; i<x; i++){
		scanf("%d", &a[i]);
	}
	for (i=0; i<x; i++){
		if(a[i]<a[i+1]){
			temp = a[i+1]-a[i];
			sum = sum + temp;
		}
		else if (res < sum){
			res = sum;
			sum = 0;
		}
		else if (res >= sum){
			sum = 0;
		}
	}
	printf("%d", res);
}