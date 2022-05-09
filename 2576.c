#include <stdio.h>

int main(){
	int a, b;
	int count = 7, total = 0;
	while (count>0){
		scanf("%d", &a);
		if (a%2==1){
			total += a;
			count--;
			if (count == 6){
				b = a;
			}
			if (count < 6 && a < b && a%2==1){
				b = a;
			}
			
		}
		if (a%2==0){
			count--;
		}
	}
	if (total == 0){
		printf("-1");
	}
	else {
		printf("%d\n%d", total, b);
	}
}