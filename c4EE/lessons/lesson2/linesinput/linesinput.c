#include <stdio.h>

int main() {
    char line[100];  // Buffer to store the input

    printf("Enter line: ");
    fgets(line, sizeof(line), stdin);  // Read a line of input from the user

    printf("Line: %s", line);  // Output the entered line

    return 0;
}
