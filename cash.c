#include <stdio.h>
#include <cs50.h>

int main(void)
{
float h;
int q;
int r;
int d;
int e;
int n;
int m;
int p;
int o;

//get change needed
do
{
    h = get_float("Change: ");
}
while (h < 0);

//figure out how many quarters are needed
if(h / .25)
{
    q = ((h * 100) / 25);
    int s = (h * 100);
    r = (s % 25);


    printf("Quarters:%d\n", q);


}
//figure out dimes
if(h / .1)
{    d = (r / 10);

    e = (r % 10);


    printf("Dimes:%d\n", d);
}
if(h / .5)
{ n= (e / 5);
    p = (e % 5);

    printf("Nickels:%d\n", n);
    printf("Pennies:%d\n", p);



int t = (q + d + n + p);
printf("Total Coins %d\n", t);
}
}
