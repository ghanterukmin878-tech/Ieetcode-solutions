#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != ch) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main() {
    char a[] = "flower";
    char b[] = "flow";
    char c[] = "flight";
    char* words1[] = {a, b, c};

    printf("Test 1: %s\n", longestCommonPrefix(words1, 3));

    char d[] = "dog";
    char e[] = "racecar";
    char f[] = "car";
    char* words2[] = {d, e, f};

    printf("Test 2: %s\n", longestCommonPrefix(words2, 3));

    return 0;
}