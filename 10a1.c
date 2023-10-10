#include<stdio.h>
void main(){
	int a,b,sum, ans=0;
	printf("Enter a:");
	scanf("%d",&a);
	ans=ans+(a%10);
	while (a!=0){
		b=a%10;
		sum=sum*10+a;
		a=a/10;
		
	}
	ans=ans+(sum%10);
	printf("%d",ans);
	
}
