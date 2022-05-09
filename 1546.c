#include <stdio.h>

int main(){
	int N, max=0;
	float arr[1000], total=0; 
	scanf("%d", &N);
	for (int i=0; i<N; i++){
		scanf("%f", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}
	for (int j=0; j<N; j++){
		total += arr[j]/max*100;
	}
	printf("%.2f\n", total/N);
}