#include <stdio.h>
#include <string.h>

int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int isValid(const char *s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else if (c == ')' || c == ']' || c == '}') {
            if (top == -1 || !isMatchingPair(stack[top], c)) {
                return 0;
            }
            top--;
        }
    }

    return top == -1;
}

int main(void) {
    printf("Test 1: %s (Expected: true)\n",
           isValid("()[]{}") ? "true" : "false");

    printf("Test 2: %s (Expected: false)\n",
           isValid("(]") ? "true" : "false");

    return 0;
}
