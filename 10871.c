#include <stdio.h>

int main(){
	int N, X, Save;
	scanf("%d %d", &N, &X);
	for (int i=0; i<N; i++){
		scanf("%d", &Save);
		if (Save < X)
			printf("%d ", Save);
	}
}