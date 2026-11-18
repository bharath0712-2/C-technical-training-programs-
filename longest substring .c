
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char s[]) {
    int last[256];
    int start = 0, max = 0;

    for (int i = 0; i < 256; i++)
        last[i] = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (last[(unsigned char)s[i]] >= start) {
            start = last[(unsigned char)s[i]] + 1;
        }

        last[(unsigned char)s[i]] = i;

        if (i - start + 1 > max) {
            max = i - start + 1;
        }
    }

    return max;
}

int main() {
    char s[1000];

    printf("Enter a string: ");
    scanf("%999s", s);

    printf("Longest substring length = %d\n",
           lengthOfLongestSubstring(s));

    return 0;
}
