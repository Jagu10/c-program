#include<stdio.h>
void main(){
	int n,i,max,min,avg=0,sum=0;
	printf("Enter size of arry:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter value in arry arr[%d]:",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
}
     avg=sum/n;
      max=arr[0];
      min=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
		min=arr[i];
	}
	}
	printf("%d %d %d %d",sum,avg,max,min);
}

