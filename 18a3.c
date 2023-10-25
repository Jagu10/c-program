#include<stdio.h>
float si(int p,int r,int t){
	float SI=(p*r*t)/100;
	return SI;
}
void main(){
	int p,r,t;
	printf("Enter a value p,r and t:");
	scanf("%d %d %d",&p,&r,&t);
	float Si=si(p,r,t);
	printf("%f",Si);
}
