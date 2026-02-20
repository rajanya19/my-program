#include<stdio.h>
int main(){
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>=18){
		printf("you are eligible for voting");
	}else{
		printf("you are not eligible for voting");
	}
	return 0;
}
// enter your age: 20
//you are eligible for voting
//enter your age: 10
//you are not eligible for voting

