#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[101];
        scanf("%s", s);

        int count_zeros = 1, count_ones = 0;
        int len=strlen(s);

        // Count the number of zeros and ones in the string
        for (int i = 0; i < n; i++) {
                while(len != '\0'){
                    if(s[len-i]=='0'){
                count_zeros++;
            } else {
                count_ones++;
            }
                }
        }

        // Check if the number of zeros is strictly greater than the number of ones
        if (count_zeros >= count_ones) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

