#include<stdio.h>
void main(){
	int n,i=2,count=0;
	printf("Enter num n:");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
		count++;
	}
	i++;
}
	
		if(count==1){
		printf("num is prime");
		}
     	else{
		printf("num is not prime");
		
	}
}

