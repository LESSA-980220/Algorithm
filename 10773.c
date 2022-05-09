#include <stdio.h>

int main(){
	int K, arr[100001], stack[100001], top=0;
	scanf("%d", &K);
	for (int i=0; i<K; i++){
		scanf("%d", &arr[i]);
		if (arr[i] == 0){
			top--;
			stack[top] = '\0';
		}
		else {
			stack[top] = arr[i];
			top++;
		}
	}
	int sum=0;
	for (int i=0; i<top; i++){
		sum += stack[i];
	}
	printf("%d\n", sum);
}