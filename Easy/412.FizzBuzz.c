/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <unistd.h>
char** fizzBuzz(int n, int* returnSize) 
{
    *returnSize = n ;
    char **Fizz = malloc (n * sizeof(char *));    
    int  i = 0 ;
    while (i < n)
    {
        if ((i + 1) % 3 == 0 && (i  + 1) % 5 == 0)
            Fizz[i] = "FizzBuzz";
        else if ((i + 1) % 3 == 0)
            Fizz[i] = "Fizz";
        else if ((i  + 1) % 5 == 0)
            Fizz[i] = "Buzz";
        else
        {
            int num = i + 1;
            int temp = num;
            int digits = 0;
            /* count digits */
            while (temp > 0)
            {
                temp /= 10;
                digits++;
            }
            Fizz[i] = malloc(digits + 1);
            temp = num;
            int j = digits - 1;
            while (j >= 0)
            {
                Fizz[i][j] = (temp % 10) + '0';
                temp /= 10;
                j--;
            }
            Fizz[i][digits] = '\0';
        } 
        i++;
    }
    return Fizz;
}
