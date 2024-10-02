#include <stdio.h>
main() {
    int c;
  	int last_was_space = 0;
    while ((c = getchar()) != EOF) {
         if (c != ' ') 
    {
            putchar(c);      // Print non-space characters
            last_was_space = 0;  // Reset flag since current character is not a space
    } 
  else {
            // If the last character wasn't a space, print one space
            if (!last_was_space) {
                printf("\n");
                last_was_space = 1;  // Set flag to indicate a space has been printed
            }
            // If last_was_space is 1, skip the current space
        }
	}
}