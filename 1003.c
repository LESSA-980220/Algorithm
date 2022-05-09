#include <stdio.h>

int count0 = 0;
int count1 = 0;

int fibonacci(int n){
    if (n == 0){
        printf("0");
        count0++;
        return 0;
    } else if (n == 1){
        printf("1");
        count1++;
        return 1;
    } else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int T, N;
    int *array;

    scanf("%d", &T);

    for (int i=0; i<T; i++){
        scanf("%d", &N);
        printf("\n\n%d**\n", N);
        getchar();
       
        if (N > 40 || N < 0)
            return 0;

        fibonacci(N);
        
        *(array + 2*i) = count0;
        *(array + 2*i + 1) = count1;

        printf("1`1111111\n");

        count0 = 0;
        count1 = 0;
    }

    for (int i=0; i<T; i++){
        printf("%d %d\n", array[2*i], array[2*i + 1]);
    }

    return 0;
}