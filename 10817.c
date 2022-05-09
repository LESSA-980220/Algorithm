#include <stdio.h>

int main(){
	int a,b,c, fir, sec;
	scanf("%d %d %d", &a, &b, &c);
	fir = a;
	if (fir>=b && fir>=c){
		if (b>=c)
			sec = b;
		else if (c>b)
			sec = c;
	}
	else if (fir<=b && fir<=c){
		if (b>=c)
			sec = c;
		else if (c>b)
			sec = b;
	}
	else
		sec = fir;
	printf("%d", sec);
}