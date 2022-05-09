#include <stdio.h>

int main(){
  int array[5][4];
  int total[5];
  int sum = 0;
  int k = 0;
  for(int i = 0; i < 5; i++){
    scanf("%d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3]);
    total[i] = array[i][0] + array[i][1] + array[i][2] + array[i][3];
    if(total[i] > sum){
      sum = total[i];
      k = i + 1;
    }
  }
  printf("%d %d",k, sum);
}