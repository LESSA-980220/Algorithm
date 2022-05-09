#include <stdio.h>

int main(){
	int c, arr, a, b;
	scanf("%d", &c);
	for (int i=0; i<c; i++){
		scanf("%d %d", &a, &b);
		arr = a+b;
		printf("%d\n", arr);
	}
}