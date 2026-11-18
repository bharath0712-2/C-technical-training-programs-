#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j, k;
    int start = 0, maxLen = 1;
    int len;

    printf("Enter a string: ");
    scanf("%s", s);

    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        // Odd length palindrome
        j = i;
        k = i;

        while (j >= 0 && k < len && s[j] == s[k])
        {
            if (k - j + 1 > maxLen)
            {
                maxLen = k - j + 1;
                start = j;
            }
            j--;
            k++;
        }

        // Even length palindrome
        j = i;
        k = i + 1;

        while (j >= 0 && k < len && s[j] == s[k])
        {
            if (k - j + 1 > maxLen)
            {
                maxLen = k - j + 1;
                start = j;
            }
            j--;
            k++;
        }
    }

    printf("Longest Palindromic Substring: ");

    for (i = start; i < start + maxLen; i++)
    {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}