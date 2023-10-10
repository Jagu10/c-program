#include<stdio.h>
void main
   int a,b,c,d,max;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("largest num is:%d",max);
    switch(d){
    	case 1:d=max*a;
    	       printf("%d",d);
        case 2:d=max*b;
              printf("%d",d);
	}
