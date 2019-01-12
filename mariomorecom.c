#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    int s;
    int d;
    do
{
h = get_int("Positive Number: ");
}
while (h <= 0 || h >= 23);

for(int i = 0; i < h; i++)
{
        for(s = (h-1-i);s >= 0; s--)
        {
            {
        printf(" ");
            }
}
            for(d = h -(h-1); d < (i+2); d++)
            {
                printf("#");

            }
            printf("\n");



}
}
