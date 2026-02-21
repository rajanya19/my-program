#include<stdio.h>
int main(){
	int i,a;
	while(1){
	printf("enter the number for multiplication:\n");
	scanf("%d",&a);
	if(a==0){
		printf("program closed\n");
		break;
	}
	for(i=1;i<=10;i++){
		printf("the multiplication table is:");
		printf("%d*%d=%d\n",a,i,a*i);
	}
	}
	return 0;
}
