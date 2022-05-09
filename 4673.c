#include "stdio.h"

int sum(int num){

	int sum=num;

	while(num!=0){

		sum += num%10;

		num /= 10;

	}

	return sum;

}

int main(){

	int a[10035]={0},i;

	for(i=0;i<10000;i++){

		a[sum(i)]=1;

	}

	for(i=0;i<10000;i++){

		if(a[i]==0){

			printf("%d\n",i);

		}

	}

	return 0;

}