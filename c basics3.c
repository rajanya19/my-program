#include<stdio.h>
int main(){
	int a,b,temp;
	printf("enter two values:\n");
	scanf("%d %d",&a ,&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swap:\n");
	printf("a=%d ,b=%d", a,b);
	
	return 0;
}
//enter two values: 3 5
//after swap:
//a=5 b=3

