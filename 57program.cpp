#include<stdio.h>
int main()
{
	int n,i,max,second_max,num;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	if(n<2)
	{
	
		printf("Enter atleast two numbers.\n");
		
	}




	    printf("Enter number 1:");
    scanf("%d, &num");
    max=num;
    second_max=-2146483648;
    for(i=1; i<n; i++)
    {
    	printf("Enter number %d:",i+1);
    	scanf("	%d",&num);
    	if(num>max) 
		{
			second_max=max;
    		
		}
	}
	
	if (second_max=-2146483648)
	{
		printf("there is no second_max number");
		
	}
	else
	 {
		printf("The max number is: %d\n", max);
		printf("The second_max number is: %d\n", second_max);
		
		
		
	}
	
	return 0;
}

     
