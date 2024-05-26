#include <stdio.h>

int main() {
    char userInput[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", userInput);

    printf("You entered: %s", userInput);

    return 0;
}
