#include<stdio.h>
int add(int x,int y){
	int ans=x+y;
	return ans;
}
void main(){
	int a,b;
	printf("Enter a any value a & b:");
	scanf("%d %d",&a,&b);
	int ans=add(a,b);
	printf("%d",ans);
}
