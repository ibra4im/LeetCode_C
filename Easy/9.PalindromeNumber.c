// Accepted :4ms Beats 25.58%
// Problem link : https://leetcode.com/problems/palindrome-number/submissions/1922289503/


#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPalindrome(int x) 
{
    // handle negative number case
    if (x < 0)
        return false;
    // store x in arr with sprintf
    char Str[100];
    sprintf(Str,"%d",x);
    
    // copy from Str to the arr will reverse
    char RevStr[100];   
    strcpy(RevStr,Str);

    // the size of str
    int sSize = strlen(Str); 

        int first = 0 ;
        int last  = sSize -1 ;
        while (first < last)
        {
            int tmp = RevStr[last] ;
            RevStr[last] = RevStr[first];
            RevStr[first] = tmp;
            first++;
            last--;
        }

    // check if it palindrome
    for(int i = 0 ;RevStr[i] != '\0';i++){
        if (RevStr[i] != Str[i])
            return false;
    }
    return true;
}
int main()
{
    printf("%d",isPalindrome(121));
}