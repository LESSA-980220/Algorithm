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

int empty(int array[]){
	if (size(array) == 0)
		return 1;
	else
		return 0;
}

void push_front(int array[], int X){
	if (size(array) == 0)
		array[0] = X;
	else {
		for (int i=size(array); i>0; i--){
			array[i] = array[i-1];
		}
		array[0] = X;
	}
}

void push_back(int array[], int X){
	for (int i=0; ; i++){
		if (array[i] == 0){
			array[i] = X;
			break;
		}
	}
}

int pop_front(int array[]){
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

int pop_back(int array[]){
	for (int i=0; ; i++){
		if (size(array) == 0)
			return -1;
		if (array[i] == 0){
			int a = array[i-1];
			array[i-1] = 0;
			return a;
		}
	}
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
	char s[100];
	scanf("%d", &N);
	for (int i=0; i<N; i++){
		scanf("%s", &s);
		if (strcmp(s, "push_front")==0){
			scanf("%d", &push_num);
			push_front(arr, push_num);
		}
		else if (strcmp(s, "push_back")==0){
			scanf("%d", &push_num);
			push_back(arr, push_num);
		}
		else if(strcmp(s, "pop_front")==0)
			printf("%d\n", pop_front(arr));
		else if(strcmp(s, "pop_back")==0)
			printf("%d\n", pop_back(arr));
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