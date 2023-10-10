#include<stdio.h>
void main(){
	int i,n,fac=1;
	float e=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fac=fac*i;
	}
	e=e+(1.0/fac);
	printf("%f",e);
}
