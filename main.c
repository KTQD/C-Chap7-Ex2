#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    if (str == NULL)
        return;

    int length = strlen(str);
    char* start = str;
    char* end = str + length - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "abcde";
    reverseString(str);

    printf("%s", str);

    return 0;
}
