#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char a[100];
	scanf("%s", a);
	for (i=0; i<strlen(a); i++){
		if (65<=a[i] && a[i]<=90){
			a[i] += 32;
		}
		else if (97<=a[i] && a[i]<=122){
			a[i] -= 32;
		}
	}
	printf("%s", a);
}