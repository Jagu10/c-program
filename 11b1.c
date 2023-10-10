#include<stdio.h>
void main(){
	int a=0,b=1,c,n,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=1;i<=n;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}

}
