#include <stdio.h>

int main(){
	int val = 1, cir = 0;
	char a[100];
	scanf("%s", a);
	while (val != 0){
		for (int i=0; i<10; i++){
			if (a[10*cir + i] == '\0'){
				val = 0;
				break;
			}
			printf("%c", a[10*cir + i]);
		}
			printf("\n");
			cir += 1;
	}
}	