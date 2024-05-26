#include <stdio.h>

int main() {
    char alphabet;

    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);

    alphabet = tolower(alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') {
        printf("%c is a vowel.\n", alphabet);
    } else {
        printf("%c is a consonant.\n", alphabet);
    }

    return 0;
}
