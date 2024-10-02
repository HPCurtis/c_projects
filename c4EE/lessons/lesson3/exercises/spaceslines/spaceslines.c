#include <stdio.h>

int main() /* count new lines in input */
{
    int c, nl, spaces;
    spaces = 0;
  	nl = 0;
  	
     while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;  // Increment newline count
          
        if (c == ' ' && c != '\n')
            ++spaces;  // Increment spaces count for all whitespace characters
    }
  		
    printf("%d %d\n", spaces,nl);
}