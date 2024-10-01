#include <stdio.h>
int main() /* Fix this to be Celsius-Fahrenheit table */
{
    // The key to this execrise is using simple alegrba to convert correctly
    // I used logic to fix this but i imagine theirs somethign simpler that evades me
    // to alter the output to screen as required
    int cel;
    for (cel = 0; cel <= 100; cel = cel + 20)
    {
        if (cel == 0)
        {
            printf("%d %6.1f\n", cel, (cel*1.8) + 32);
        }
        else {
            printf("%4d %6.1f\n", cel, (cel*1.8) + 32);
        }
    }
}