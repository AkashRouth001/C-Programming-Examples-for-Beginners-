#include <stdio.h>
#include <stdlib.h>

void printPascalsTriangle(int n) {
    int coef = 1;
    
    for (int i = 0; i < n; i++) {
        for (int space = 1; space < n - i; space++)
            printf("  ");
        
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of lines of Pascal's triangle: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("ERROR\n");
        return 1;
    }
    
    printPascalsTriangle(n);
    
    return 0;
}
