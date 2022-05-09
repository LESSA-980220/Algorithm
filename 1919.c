#include <stdio.h>
#include <string.h>

int main(){
	int i,j,count;
	count = 0;
	char a[1000], b[1000];
	scanf("%s %s", a, b);
	for (i=0; i<strlen(a); i++){
		for (j=0; j<strlen(b); j++){
			if (a[i] == b[j]){
				count++;
				b[j] = 'A';
				break;
			}
		}
	}
	printf("%d", strlen(a)+strlen(b)-2*count);
}