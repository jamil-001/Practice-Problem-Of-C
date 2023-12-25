#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[101];
    scanf("%s", word);

    int uppercase_count = 0;
    int lowercase_count = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        if (isupper(word[i])) {
            uppercase_count++;
        } else {
            lowercase_count++;
        }
    }

    if (uppercase_count > lowercase_count) {
        for (int i = 0; word[i] != '\0'; i++) {
            word[i] = toupper(word[i]);
        }
    } else {
        for (int i = 0; word[i] != '\0'; i++) {
            word[i] = tolower(word[i]);
        }
    }
    printf("%s\n", word);

    return 0;
}
