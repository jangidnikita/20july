// C Program To Print Odd Numbers Between 1 To 1000
#include <stdio.h>
int main()
{
    int i;
    printf("Odd Numbers Between 1 To 1000 are:\n");
    for (i= 1;i<=1000;++i)
	{
        if(i%2!=0)
		{
            printf("%d\n",i);
        }
    }
    return 0;
}
