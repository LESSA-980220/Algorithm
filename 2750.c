#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, arr[10000];
	scanf("%d", &a);
	while (a<1 || a>1000){
		printf("다시 입력하세요\n");
		scanf("%d", &a);
	}
	for(int count=0; count<a; count++){
		scanf("%d", &arr[count]);
		while(abs(arr[count])>1001){
			printf("다시 입력하세요\n");
			scanf("%d", &arr[count]);
		}
	}
	for (int count=0; count<a-1; count++){
		for (int count2=count+1; count2<a; count2++){
			if (arr[count]>arr[count2]){
				int sub = arr[count];
				arr[count] = arr[count2];
				arr[count2] = sub;
			}
		}
	}
	for(int count=0; count<a; count++){
		printf("%d\n", arr[count]);
	}
}