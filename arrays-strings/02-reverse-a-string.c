#include <stdio.h>
#include <string.h>

void reverseString(char s[]) {
    int left = 0;
    int right = (int)strlen(s) - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    char s1[] = "hello";
    reverseString(s1);
    printf("Test 1: %s (Expected: olleh)\n", s1);

    char s2[] = "a";
    reverseString(s2);
    printf("Test 2: %s (Expected: a)\n", s2);

    return 0;
}
