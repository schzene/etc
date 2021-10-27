#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,l,m;	
	for(i=1;i<=5;i++)				
        printf("\n");	
	for(i=1;i<=3;i++) 
	{	
		for(j=1;j<=32-2*i;j++)		
			printf(" ");	
		for(k=1;k<=4*i+1;k++)		
			printf("*");
		for(l=1;l<=13-4*i;l++)		
			printf(" ");	
		for(m=1;m<=4*i+1;m++)		
			printf("*");
		printf("\n");	
	}
	for(i=1;i<=3;i++) 
	{ 
		for(j=1;j<=24+1;j++)			
			printf(" ");	
		for (k=1;k<=29;k++)			
			printf("*");
		printf("\n");	
	}
	for(i=7;i>=1;i--) 
	{	 
		for(j=1;j<=40-2*i;j++)		
			printf(" ");
		for(k=1;k<=4*i-1;k++)		
			printf("*");
		printf("\n");
	}
	for(i=1;i<=39;i++)				
		printf(" ");	
	printf("*");		 
	for(i=1;i<=5;i++)				
		printf("\n");
    system("pause");
    return 0;
}