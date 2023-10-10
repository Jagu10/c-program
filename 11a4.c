#include<stdio.h>
void main(){
	int x,y,i=1;
	printf("Enter th num x:");
	scanf("%d",&x);
	printf("Enter th num y:");
	scanf("%d",&y);
	for(i=1;y!=0;y--){
		i=i*x;
		printf("%d ",i);
	
	}
	
}
