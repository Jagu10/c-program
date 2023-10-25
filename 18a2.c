#include<stdio.h>
int a,b;
 int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
	int min(int a ,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
void main(){
	int a,b;
	printf("Enter a value a and b:");
	scanf("%d %d",&a,&b);
	int Max=max(a,b);
	int Min=min(a,b);
	printf("max=%d",Max);
	printf("min=%d",Min);
}
