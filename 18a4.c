#include<stdio.h>
int max(int x,int y,int z){
 if(x>y && x>z){
	return x;
}
else if(y>z && y>x){
	return y;
}
else if(z>x && z>y){
	return z;
}
}
void main(){
	int x,y,z;
	printf("Enter a value x,y and z:");
	scanf("%d %d %d",&x,&y,&z);
	int Max=max(x,y,z);
	printf("%d",Max);
}
