#include <stdio.h>

int main(){
	int N;
	char mirror[101][101]={};
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", mirror[i]);
	}
	int K;
	scanf("%d", &K);
	if(K==1){
		for(int i=0; i<N; i++){
			printf("%s\n", mirror[i]);
		}
	}
	else if(K==2){
		for(int i=0; i<N; i++){
			for(int j=N-1; j>=0; j--){
				printf("%c", mirror[i][j]);
			}
			printf("\n");
		}
	}
	else if(K==3){
		for(int i=N-1; i>=0; i--){
			printf("%s\n", mirror[i]);
		}
	}
}