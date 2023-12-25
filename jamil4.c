#include <stdio.h>

// Function to check if it's possible to make the number of zeros greater than ones
char* canMakeZerosGreaterThanOnes(int n, char s[])
{
    int zeros_count = 0;
    int ones_count = 0;

    // Count the number of zeros and ones in the string
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zeros_count++;
        }
        else
        {
            ones_count++;
        }
    }

    // Check if the number of zeros is already greater than ones
    if (zeros_count > ones_count)
    {
        return "YES";
    }
    else
    {
        // Check if it's possible to make the number of zeros greater than ones
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] != s[i])
            {
                return "YES";
            }
        }
        return "NO";
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        char s[n + 1]; // +1 for the null terminator
        scanf("%s", s);

        char* result = canMakeZerosGreaterThanOnes(n, s);
        printf("%s\n", result);
    }

    return 0;
}
