
#include <stdio.h> // preprocessor

int main() // entry point of C
{
    char sym = '+';                // character
    int code_no = 977;             // int
    char sym2 = '-';               // fixed: added semicolon
    long long phone_number = 9807292131LL; // long long int with LL at the end

    printf("%c", sym);
    printf("%d", code_no);
    printf("%c", sym2);
    printf("%lld", phone_number); // correct format specifier

    return 0;
}
