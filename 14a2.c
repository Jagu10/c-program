#include<stdio.h>
    void main(){
	int n,i,countp=0,countn=0;
	printf("Enter size of arry:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter value in arry arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]>0){
			printf("\npositive");
		countp++;
				
	}
		else{
			printf("\nnagative");
			countn++;
}
	}
	printf("\n %d \n %d",countp,countn);
}

