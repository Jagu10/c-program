#include<stdio.h>
void main(){
	int n,i=1,sum=0;
	printf("ENter n:");
	scanf("%d",&n);
	
	while(i<n){
		if(n%i==0){
	      sum=sum+i;
		}
		i++;
    }
    printf("%d",sum);
    if(sum==n){
    	printf("perfect num");
	}
	else{
		printf("not perfect");
	}
}
