#include<stdio.h>
int main(){
	int n, i;
	printf("Enter a number= ");
	scanf("%d", &n);
	
	for(i=1; i<=10; i=i+1){
		printf("%d x %d = %d\n", n, i, n*1);
	}
	return 0;
}
