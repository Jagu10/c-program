#include<stdio.h>
void main(){
int n,i=1,ans=1;
printf("Enter the num:");
scanf("%d",&n);
for(i=1;i<=n;i++){
	ans=ans*i;
}
printf("%d",ans);
}
