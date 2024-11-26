#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int *matrix;
	int i,n;
    matrix=(int *) malloc(n* sizeof(int));
    printf("Enter the elements of the matrix:",n,i);
    
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<i; j++)
    	{
    		scanf("%d%d", matrix[i], matrix[j]);
    		
		}
	}
}
    void matrix(int  *matrix, int n, int i)
 {
	  
    	{
    		for (int i=0; i<n; i++)
    	{
    		for (int j=0;j<i;j++)
			{
    			printf("%d",&matrix[i][j]);
			}
		}
		
		}
	
	
	return 0;
}
