#include<stdio.h>
void main(){
	int arr[5],i,h[5],w[5],count=0;
	for(i=0;i<5;i++){
		printf("Enter hight of %d:",i);
		scanf("%d",&h[i]);
	}
	for(i=0;i<5;i++){
		printf("Enter weight of %d:",i);
		scanf("%d",&w[i]);
	}
	for(i=0;i<5;i++){
		if(h[i]>170 && w[i]<50){
			count++;
		}
	}
	printf("%d",count);
}
