/* C program to all even numbers between 100 to 1 using while loop */
#include <stdio.h>
int main() 
{ 
	int num=100; 
    while(num>=1) 
    { 
        if((num%2)==0) 
        { 
            printf("%d\n",num); 
        } 
		num--; 
    } 
    return 0; 
} 
