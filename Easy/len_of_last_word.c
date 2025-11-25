#include <stdio.h>
int lengthOfLastWord(char* s) 
{
    int i = 0 ;
    int LastWord_len = 0 ;
    while (s[i] != '\0')
        i++;
    while (i > 0 && s[i - 1] == ' ')
        i--;
    while(0 < i && s[i - 1] != ' ')
    {
        LastWord_len++;
        i--;
    }
    return (LastWord_len);
}
int main()
{
    char str[] = "Hello World ";
    int len = lengthOfLastWord(str);
    printf("Length of last word: %d\n", len);
    return 0;
}