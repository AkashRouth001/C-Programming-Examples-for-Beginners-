#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generateHammingCode(const char* data, char* hammingCode) {
    int m = strlen(data);
    int r = 1;

    while ((1 << r) < (m + r + 1)) {
        r++;
    }

    int i, j = 0;
    for (i = 1; i <= m + r; i++) {
        if (!((i & (i - 1)) == 0)) {
            hammingCode[i - 1] = data[j++];
        }
    }

    for (i = 0; i < r; i++) {
        int parityBitPosition = (1 << i);
        int countOnes = 0;
        for (j = parityBitPosition; j <= m + r; j += (1 << (i + 1))) {
            for (int k = j; k < j + (1 << i) && k <= m + r; k++) {
                if (hammingCode[k - 1] == '1') {
                    countOnes++;
                }
            }
        }
        hammingCode[parityBitPosition - 1] = (countOnes % 2 == 0) ? '0' : '1';
    }

    hammingCode[m + r] = '\0';
}

int main() {
    char data[100];
    printf("Enter data bits: ");
    scanf("%s", data);

    int m = strlen(data);
    int r = 1;
    while ((1 << r) < (m + r + 1)) {
        r++;
    }

    char* hammingCode = (char*)malloc((m + r + 1) * sizeof(char));
    if (hammingCode == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    generateHammingCode(data, hammingCode);

    printf("Generated Hamming code: %s\n", hammingCode);

    free(hammingCode);

    return 0;
}