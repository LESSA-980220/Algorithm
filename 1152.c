#include <stdio.h>
#include <string.h>

int main(){
	int i,j,word,count;
	count = 0;
	word = 0;
	char a[1000000];
	scanf("%[^\n]", a);
	for (i=0; i<strlen(a); i++){
		if (a[i] != 32){
			word = 1;
		}
		if (word == 1 && a[i] == 32){
			count ++;
			word = 0;
		}
	}
	count ++;
	if (a[strlen(a)-1] == 32){
		count --;
	}
	printf("%d", count);
}