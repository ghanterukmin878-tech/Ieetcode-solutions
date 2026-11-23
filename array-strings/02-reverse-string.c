
#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char str1[] = "hello";
    reverseString(str1, strlen(str1));
    printf("Test 1: %s\n", str1);

    char str2[] = "Hannah";
    reverseString(str2, strlen(str2));
    printf("Test 2: %s\n", str2);

    return 0;
}
