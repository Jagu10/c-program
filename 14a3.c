#include<stdio.h>
    void main(){
	int n,i,counteven=0,countodd=0;
	printf("Enter size of arry:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter value in arry arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			printf("even");
			counteven++;			
		}
		else{
			printf("odd");
			countodd++;
}
	}
	printf("\n%d \n%d",counteven,countodd);
}
