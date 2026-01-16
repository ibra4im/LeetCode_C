#include <stdio.h>
void reverseString(char* s, int sSize) 
{
        int first = 0 ;
        int last  = sSize -1 ;
        while (first < last)
        {
            int tmp = s[last] ;
            s[last] = s[first];
            s[first] = tmp;
            first++;
            last--;
        }
        printf("%s",s);
}