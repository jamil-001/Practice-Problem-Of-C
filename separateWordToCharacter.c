#include <stdio.h>
#include <string.h>

int main() {
    char myString[] = "Hello, World!";
    int length = strlen(myString);

    /// Print the original string
    printf("Original string: %s\n", myString);

    /// Reverse the string in-place without using a separate function
    for (int start = 0, end = length - 1; start < end; start++, end--) {
        /// Swap characters at start and end positions
        char temp = myString[start];
        myString[start] = myString[end];
        myString[end] = temp;
    }

    /// Print the reversed string
    printf("Reversed string: %s\n", myString);

    return 0;
}
