#include <stdbool.h>
int SquareNum(int n)
{
    int squar = 0 ;
    while (n > 0)
    {
        squar += (n % 10) * (n % 10);
        n = n/10;
    }
    return squar;
}
bool isHappy(int n){
int slow = n , fast = n;
do {
    slow = (SquareNum(slow));
    fast = (SquareNum(SquareNum(fast)));
} while (slow != fast);

    if (slow == 1)
    return true;

return false;
}
