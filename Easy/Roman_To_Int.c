#include <stdio.h>

int romanToInt(char *s)
{
    int result = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        int value = 0;
        if (s[i] == 'I') value = 1;
        else if (s[i] == 'V') value = 5;
        else if (s[i] == 'X') value = 10;
        else if (s[i] == 'L') value = 50;
        else if (s[i] == 'C') value = 100;
        else if (s[i] == 'D') value = 500;
        else if (s[i] == 'M') value = 1000;

        int nextValue = 0;
        if (s[i + 1] != '\0')
        {
            if (s[i + 1] == 'I') nextValue = 1;
            else if (s[i + 1] == 'V') nextValue = 5;
            else if (s[i + 1] == 'X') nextValue = 10;
            else if (s[i + 1] == 'L') nextValue = 50;
            else if (s[i + 1] == 'C') nextValue = 100;
            else if (s[i + 1] == 'D') nextValue = 500;
            else if (s[i + 1] == 'M') nextValue = 1000;
        }

        if (value < nextValue)
            result -= value;
        else
            result += value;

        i++;
    }
    return result;
}
int main()
{
    char s[] = "CM";
    int result = romanToInt(s);
    printf("%d", result) ;
}
/*
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s ROMAN_NUMBER\n", argv[0]);
        return 1;
    }
    int result = romanToInt(argv[1]);
    printf("%d\n", result);
    return 0;
}
*/