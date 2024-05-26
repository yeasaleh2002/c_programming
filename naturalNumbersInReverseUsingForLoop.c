#include<stdio.h>

int main () {
    int initial, start;
    printf("Enter starting value: ");
    scanf("%d", &start);

    for(initial= start; initial >= 1; initial--){
        printf("%d\n", initial);
    };

return 0;
}
