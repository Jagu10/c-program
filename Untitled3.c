#include<stdio.h>
void main(){
	int a,b;
	char c;
	float d;
	printf("Enter a:");
	scanf("%d",&a);
    printf("Enter b:");
	scanf("%d",&b);
    printf("enter +,-,*,/:");
	scanf(" %c",&c);
	switch(c){
		case '+':d=a+b;
		       printf("%f",d);
		       break;
		case '-':d=a-b;
		       printf("%f",d);
		       break;
		case '*':d=a*b;
		       printf("%f",d);
		       break;
	    case '/':d=a/b;
		       printf("%f",d);
		       break;
	     default:printf("invalid input");
                 break;
	}
}
