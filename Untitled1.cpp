#include<stdio.h>
int main(){
	int n,i;
	long long fact=1;
	printf("enter the number for factorial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact =fact*i;
		printf("the result of %d is:%lld\n",n,fact);
	}
	return 0;
}
