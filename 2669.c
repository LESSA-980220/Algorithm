#include <stdio.h>

int main(){
	int map[102][102]={};
	int x1,y1,x2,y2;
	for(int t=0; t<4; t++){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for(int i=x1; i<x2; i++){
			for(int j=y1; j<y2; j++){
				map[i][j] ++;
			}
		}
	}
	int count = 0;
	for(int i=0; i<102; i++){
		for(int j=0; j<102; j++){
			if(map[i][j] > 0) count++;
		}
	}
	printf("%d\n", count);
}