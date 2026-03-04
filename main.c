#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit,i,lineCount;

    // Get limit from user
    printf("Enter the limit:\n");
    scanf("%d",&limit);

    i=0;
    lineCount=0;

    // Find and print all multiples of 17 up to the limit
    while(i<limit)
    {
        if(i%17==0)
        {
            printf("%5d",i);
            lineCount++;

            // Print a new line after every 10 numbers
            if(lineCount%10==0)
            {
                printf("\n");
            }
        }
        i++;
    }
    return 0;
}
