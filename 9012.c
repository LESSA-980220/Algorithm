#include <stdio.h>
#include <string.h>

int main(){
	int T, top=0;
	scanf("%d", &T);
	getchar();
	for (int q=0; q<T; q++){
		char str[52], stack[52];
		fgets(str, sizeof(str), stdin);
		str[strlen(str)-1] = '\0';
		for (int i=0; i<strlen(str); i++){
			if (str[i] == '('){
				stack[top] = '(';
				top++;
			}
			else if (str[i] == ')'){
				if (top == 0){
					top = -1;
					break;
				}
				top--;
				stack[top] = '\0';
			}
		}
		if (top != 0)
			printf("NO\n");
		else
			printf("YES\n");
		top = 0;
	}
}