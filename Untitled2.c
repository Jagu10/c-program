#include<stdio.h>
void main(){
	int a;
	printf("Enter 1 to 12:");
	scanf("%d",&a);
	switch(a){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("day of 31");
		        break;
	    case 4:
	    case 6:
	    case 9:
	    case 11:printf("day of 30");
	            break;
	    defualt:printf("feb 28 days");
	            break;
	}
}
