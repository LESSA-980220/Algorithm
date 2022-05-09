#include <stdio.h>

int main(){
	int C, N, arr[100][100];
	float sub=0, total=0;
	scanf("%d", &C);
	for (int i=0; i<C; i++){
		scanf("%d", &N);
		for (int j=0; j<N; j++){
			scanf("%d", &arr[i][j]);
			total += arr[i][j];
		}
		for (int j=0; j<N; j++){
			if (arr[i][j] > total/N)
				sub += 1;
		}
		printf("%.3f%%\n", sub/N*100);
		total = 0; sub = 0;
	}
}