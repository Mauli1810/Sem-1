#include<stdio.h>
int main()
{
	int arr[10], odd_count=0,
	element_count[100]={0};
	
	
	
	for(int i=0; i<10; i++)
	scanf("%d", &arr[i]);
	if (arr[i]%2 !=0)
	{
		odd_count++;
	}
	if(arr[i]>=0 &&arr[i]<=100)
	{
	   element_count[arr[i]]++;
	}
	
    printf("\nTotal numbers of odd numbers: %d\n", odd_count);
    printf("Occurrences of each element:\n");
    for(int i=0; i<100; i++)
    if(elementcount_[i]>1)
    {
    	printf("%d:%d time(s)\n",i,element_count[i]);
    
    	
   	}
	
	
}
	 
}

