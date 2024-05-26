#include <stdio.h>
int main() {
    char alphabets;
    printf("Alphabets from a to z are : \n");
    for (alphabets = 'a'; alphabets <= 'z'; ++alphabets)
        printf("%c ", alphabets);
    return 0;
}
