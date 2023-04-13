#include <stdio.h>

int multi (int i, int j)
{
    if (i==1)
    {
        if (j==1)
        {
            printf("%d*%d=%-2d\n", i, j, i*j);
        }
        else
        {
            printf("%d*%d=%-2d\n", i, j-1, i*(j-1));
        }
    }
    else
    {
        if (j==1)
        {
            printf("%d*%d=%-2d\n", i, j, i*j);
        }
        else
        {
            printf("%d*%d=%-2d\n", i, j-1, i*(j-1));
        }
    }
}

int main()
{
    multi(9, 9);
    return 0;
}
