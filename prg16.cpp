/* C program to all even numbers between 1 to 100 using while loop */
#include <stdio.h>
int main() 
{ 
	int number=1; 
    while(number<=100) 
    { 
        if((number%2)==0) 
        { 
            printf("%d\n",number); 
        } 
		number++; 
    } 
    return 0; 
} 
