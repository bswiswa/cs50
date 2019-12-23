#include <cs50.h>
#include <stdio.h>

void sp(int n);
void brick(int n);

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while(h < 1 || h > 8 );

    for(int i = 0; i < h; i++)
    {
        sp(h - i - 1);
        brick(i);
        sp(2);
        brick(i);
        printf("\n");
    }
}

void sp(int n)
{
    for(int i=0; i < n; i++)
    {
        printf(" ");
    }
}

void brick(int n)
{
    for(int i=0; i <= n; i++)
    {
        printf("#");
    }
}
