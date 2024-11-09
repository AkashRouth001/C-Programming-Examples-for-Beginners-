#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 100

int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char c = *str;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

void convertToUppercase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[MAX_LENGTH];

    // Take user input
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("ERROR\n");
        return 1;
    }

    // Remove the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Check if the string contains only alphabets
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) {
            printf("ERROR\n");
            return 1;
        }
    }

    int vowelCount = countVowels(str);
    printf("%d\n", vowelCount);

    convertToUppercase(str);
    printf("%s\n", str);

    reverseString(str);
    printf("%s\n", str);

    return 0;
}
