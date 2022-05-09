#include <stdio.h>

int main(){
	int R, C, ZR, ZC;
	scanf("%d %d %d %d", &R, &C, &ZR, &ZC);
	char art[51][51]={0};
	for(int i=0; i<R; i++){
		scanf("%s", art[i]);
	}
	for(int i=0; i<R; i++){
		for(int ii=0; ii<ZR; ii++){
			for(int j=0; j<C; j++){
				for(int jj=0; jj<ZC; jj++){
					printf("%c", art[i][j]);
				}
			}
			printf("\n");
		}
	}
}