#include <stdio.h>

void main()
{
    int no,a,b,ans;
	printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
	printf("enter a no between 1 to 4, 1-multi , 2-divi ,3-sum,4-sub ");
    printf("Enter no: ");
    scanf("%d",&no);

    switch(no)
    {
 		case 1:
		 ans=(a*b);
		 printf("%d",ans);
		 break;   
		 case 2:
		 ans=a/b;
		 printf("%d",ans);
		 break;  
		 case 3:
		 ans=a+b;
		 printf("%d",ans);
		 break;  
		 case 4:
		 ans=a-b;
		 printf("%d",ans);
		 break;  	
}
}
