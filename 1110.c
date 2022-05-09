#include <stdio.h>

int main(){
	int a, num, sum, ten, one, count=0;
	do {
		scanf("%d", &a);
	} while (a<0 || a>99);
	num = a;
	while(1){
		if (num<10){
			ten = 0; one = num;
			sum = ten+one;
			num = (one*10) + (sum%10);
			count++;
		}
		else{
			ten = num/10; one = num%10;
			sum = ten+one;
			num = (one*10) + (sum%10);
			count++;
		}
		if (a==num)
			break;
	}
	printf("%d\n", count);
}