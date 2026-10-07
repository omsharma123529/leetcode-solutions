#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char *strs[], int size, char result[]) {
    result[0] = '\0';

    if (size == 0) {
        return;
    }

    int prefixLength = (int)strlen(strs[0]);

    for (int i = 1; i < size; i++) {
        int j = 0;

        while (j < prefixLength &&
               strs[i][j] != '\0' &&
               strs[0][j] == strs[i][j]) {
            j++;
        }

        prefixLength = j;
    }

    strncpy(result, strs[0], prefixLength);
    result[prefixLength] = '\0';
}

int main(void) {
    char *strs1[] = {"flower", "flow", "flight"};
    char result1[100];
    longestCommonPrefix(strs1, 3, result1);
    printf("Test 1: \"%s\" (Expected: \"fl\")\n", result1);

    char *strs2[] = {"dog", "racecar", "car"};
    char result2[100];
    longestCommonPrefix(strs2, 3, result2);
    printf("Test 2: \"%s\" (Expected: \"\")\n", result2);

    return 0;
}
