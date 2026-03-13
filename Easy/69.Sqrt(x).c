int mySqrt(int x) 
{
    if (x == 0)
    {
        return 0;
    }
    long X = x; 
    long r = 1;
    while ((r +1) * (r+1) <= X)
    {
            r += 1;
    }
    return r;
}
