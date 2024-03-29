#include <stdio.h>

int is_palindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int largest_palindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    FILE *file = fopen("/mnt/c/Users/ACER NITRO/OneDrive/Documents/102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", largest_palindrome);
        fclose(file);
    }

    return 0;
}
