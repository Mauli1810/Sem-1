#include<stdio.h>
int main ()
{
    int i,j,rows;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
       {
		 printf("%d",j);
      	}
      	printf("\n");

    }
     printf("\n");

     return 0;
}
