#include <stdio.h>

int getnum(int N){
	int num=0, a1=0, a2=0, a3=0;
	for (int i=1; i<N+1; i++){
		if (i<100)
			num += 1;
		else{
			a1 = i/100;
			a2 = (i-(a1*100))/10;
			a3 = (i-(a1*100+a2*10));
			if (a1-a2 == a2-a3)
				num += 1;
			a1 = 0, a2 = 0, a3 = 0;
		}
	}
	return printf("%d\n", num);
}

int main(){
	int N;
	scanf("%d", &N);
	getnum(N);
}