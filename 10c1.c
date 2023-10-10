#include <stdio.h>
void main(){
	int n,rem,a,count=0;
	prinf("ENter num n:");
	scanf("%d",&n);
	a=count;
	while(n>0){
		n=n/10;
		count++;
		printf("%d",count);
	}
	while(n>=0){

		rem=n%10;
		rem+=rem*rem*rem;
		n=n/10;
	
	}
	if(rem==n){
		printf("num is amstorng ");
	}
	else{
		printf("num is not amstorng");
	}

}



