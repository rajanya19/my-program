#include<stdio.h>

float add(float a,float b){
	return (a+b);
}
float sub(float a,float b){
	return(a-b);
}
float multi(float a,float b){
	return(a*b);
}
float div(float a,float b){
	return(a/b);
}
int mod(int a,int b){
	return(a%b);
}
int main(){
	float a,b;int choice;
	while(1){
	printf("\n---calculator menu---\n");
	printf("1.add\n 2.sub\n 3.multi\n 4.div\n 5.mod\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	if(choice==0){
		printf("calculator closed\n");
		return 0;
	}
	printf("enter numbers:\n");
	scanf("%f %f",&a,&b);
	switch(choice){
	case 1:printf("the result is:%f\n",add(a,b));
		break;
	case 2:printf("the result is:%f\n",sub(a,b));
		break;
	case 3:printf("the result is:%f\n",multi(a,b));
		break;
	case 4:if(b==0)
		printf("can not be calculated");
		else
		printf("the result is:%f\n",div(a,b));
		break;
	case 5:if((int) b==0)
		printf("can not be calculated\n");
		else
		printf("the result is:%d\n",mod((int) a,(int) b));
		break;
	default :
		printf("invalid choice");
}
	}
	return 0;
}
