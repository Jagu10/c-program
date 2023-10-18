#include<stdio.h>
void main(){
	int n,m;
	printf("Enter a value of arry:");
	scanf("%d",&n);
	printf("Enter a value of arry:");
	scanf("%d",&m);
	int a[n][m],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("element any value a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
	printf("[%d][%d]=%d",i,j,a[i][j]);
}
}
}
