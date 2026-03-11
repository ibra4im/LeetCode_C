int countSegments(char *s)
{
    int i = 0;
    int count = 0;

    while (s[i])
    {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            count++;
        i++;
    }
    return count;
}
