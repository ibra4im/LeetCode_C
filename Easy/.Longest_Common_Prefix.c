#include <stdio.h>

char* longestCommonPrefix(char** strs) 
{
    int  i = 0;
    int  s = 0;
    int result = 0 ;
    while(strs[i][s] != '\0')
    {
        if(strs[i][s] == strs[i][s] && strs[i][s] == strs[i][s])
        {
            result++;
        }
        i++;
        s++;
    }
}
int main()
{
    char *strs[3] = {"hello","hppp","hmmm"};
    printf("%s",longestCommonPrefix(&strs[3]));
}