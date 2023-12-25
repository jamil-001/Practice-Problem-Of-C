#include <stdio.h>
int main() {
    char word[120];
    scanf("%s", word);
    word[0]=toupper(word[0]);
    printf("%s", word);
    return 0;
}
