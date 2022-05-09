#include <stdio.h>

int main(){
	int x, y, sum=0;
	char day[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	scanf("%d %d", &x, &y);
	for (int i=1; i<x; i++){
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			sum += 31;
		else if (i==4 || i==6 || i==9 ||  i==11)
			sum += 30;
		else if (i==2)
			sum += 28;
	}
	sum += y;
	printf("%s", day[sum%7]);
}