#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x) {
     long long int   reversed = 0;
    int original = x;

    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return (original == reversed);
}
int main() {
    int x = 1221;
    bool result = isPalindrome(x);
    printf("%s\n", result ? "true" : "false");

    int y = 1200;
    result = isPalindrome(y);
    printf("%s\n", result ? "true" : "false");

    return 0;
}
