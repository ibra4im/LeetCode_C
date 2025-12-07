#include <stdio.h>
int countOdds(int low, int high){
int result = 0 ;
while (low <= high)
{
    if(low % 2 != 0)
    {
        result ++;
    }
    low++;
}
return result;
}