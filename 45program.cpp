#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int luckynumber, guess,attempts=5;
	
	luckynumber=rand()%100+1;
	 printf("Welcome to the lucky number guessing game");
	 printf("You have %d attempts to guess the luckynumber between 1 and 100 .\n",attempts);
	  for ( int i=1; i<=attempts; i++)
	  {
	  	printf("\n Attempt %d: Enter your guess: ",i);
	  	scanf("%d",&guess);
	    if (guess=luckynumber)
	  	{
		  printf("Congratulation you have guess the luckynumber\n");
	
	    }
	    else if  (guess>luckynumber)
	    {
	    	printf("Too high \n");
	    	
		}
	  	else 
		{
			printf("Too low \n");
	  		
	    }
	    printf("Sorry,you're out of attempts!The lucky number was %d.\n");
	  	
	  }
	 return 0;
	 
}
