#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c)
		printf("%d is larger",a);
	}else if (c>a){
		printf("%d is larger",c);
	}else if (b>a){
		printf("%d is larger",b);
	}
	else{
		printf("invalid");
	}
	return 0;
}
//enter three numbers: 3 5 8
//8 is larger

