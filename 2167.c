#include "stdio.h"

int main(){

	int N,M,a[1000][1000]={0},i,j,x,y,K,t,u,sum=0,c;

	scanf("%d%d",&N,&M);

	for(t=0;t<N;t++){

		for(u=0;u<M;u++){

			scanf("%d",&a[t][u]);

		}

	}

	scanf("%d",&K);

	for(c=0;c<K;c++){

		scanf("%d%d%d%d",&i,&j,&x,&y);

		for(t=i;t<=x;t++){

			for(u=j;u<=y;u++){

				sum += a[t-1][u-1];

			}

		}

		printf("%d\n",sum);

		sum = 0;

	}

	return 0;

}