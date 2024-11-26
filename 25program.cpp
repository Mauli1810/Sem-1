//multiplication table 5.
#include<stdio.h>
int main ()
{
	int num,count=1;
	
	printf("Enter the number\n");
	scanf("%d\n",&num);                                  // num=5
	printf("Multiplication table for %d is: \n", num);   //Multiplication table for %d is: 5
	
	
	while(count <=20)  // count =1, 1<=20, true
	{
	printf(" %d* %d = %d ",num,count,num*count); // 5*1=5
		count++;        
	}
	return 0;

	

		
	
	
	
}
