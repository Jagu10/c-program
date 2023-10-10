#include<stdio.h>
void main(){
	int n,i;
	printf("Enter size of arry:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter value in arry arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("\nElement at arr[%d]:%d",i,arr[i]);
	}
	for(i=n-1;i>=0;i--){
	 printf("\nElement at arr[%d]:%d",i,arr[i]);
	}
	}

