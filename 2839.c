#include <stdio.h>

int main(){
	int N, best=0;
	scanf("%d", &N);
	for (int t=0; t*3<=N; t++){
		for (int f=0; f*5<=N; f++){
			if ((f*5)+(t*3) == N){
				if (best == 0){
					best = t+f;
				}
				else{
					if (best > t+f){
						best = t+f;
					}
				}
			}
		}
	}
	if (best == 0)
		printf("-1");
	else 
		printf("%d", best);
}