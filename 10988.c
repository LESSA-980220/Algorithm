#include <stdio.h>
#include <string.h>

int main(){
	int i,count;
	count = 0;
	char a[100];
	scanf("%s", a);
	for (i=0; i<strlen(a)/2; i++){
		if (a[i] != a[strlen(a)-1-i]){
			printf("0");
			count += 1;
			break;
		}
	}	
	if (count == 0){
		printf("1");
	}
}