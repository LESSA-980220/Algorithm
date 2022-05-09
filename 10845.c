#include <stdio.h>
#include <string.h>

int size(int array[]){
	int count=0;
	for (int i=0; ;i++){
		if (array[i] == 0)
			return count;
		count++;
	}
}

void push(int array[], int x){
	for (int i=0; ; i++){
		if (array[i] == 0){
			array[i] = x;
			break;
		}
	}
}

int pop(int array[]){
	if (array[0] == 0)
		return -1;
	int a = array[0];
	for (int i=0; i<size(array); i++){
		array[i] = array[i+1];
		if (array[i+1] == 0){
			array[i] = 0;
			break;
		}
	}
	return a;
}

int empty(int array[]){
	if (size(array) == 0)
		return 1;
	else
		return 0;
}

int front(int array[]){
	if (size(array) == 0)
		return -1;
	else
		return array[0];
}

int back(int array[]){
	if (size(array) == 0)
		return -1;
	for (int i=0; ; i++){
		if (array[i] == 0){
			return array[i-1];
		}
	}
}

int main(){
	int N, arr[10001], push_num;
	char s[10];
	scanf("%d", &N);
	for (int i=0; i<N; i++){
		scanf("%s", &s);
		if (strcmp(s, "push")==0){
			scanf("%d", &push_num);
			push(arr, push_num);
		}
		else if(strcmp(s, "pop")==0)
			printf("%d\n", pop(arr));
		else if(strcmp(s, "size")==0)
			printf("%d\n", size(arr));
		else if(strcmp(s, "empty")==0)
			printf("%d\n", empty(arr));
		else if(strcmp(s, "front")==0)
			printf("%d\n", front(arr));
		else if(strcmp(s, "back")==0)
			printf("%d\n", back(arr));
	}
}