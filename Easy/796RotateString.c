#include <stdbool.h>
int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int     is_substring(char *big, char *small)
{
    int i = 0;
    int j ;
    while (big[i])
    {
        j = 0;
        while (small[j] && big[i + j] == small[j])
        {
            j++;
        }
        if (small[j] == '\0')
            return 1;
        i++;
    }
    return 0;
}
bool rotateString(char* s, char* goal) 
{
    int len = ft_strlen(s);
    int i = 0;
    char double_s[2000];// enough buffer

    if (len != ft_strlen(goal))
        return false;
    while (i < len)
    {
        double_s[i] = s[i];
        double_s[i + len] = s[i];
        i++;
    }
    double_s[i + len] = s[i];
    return is_substring(double_s, goal);
}

