#include<stdio.h>
int main(){
  int monthNumber;
  printf("Enter the month number(1-12): ");
  scanf("%d", &monthNumber);

  if(monthNumber >= 1 && monthNumber <=12){
        if(monthNumber == 2){
            printf("February has 28 or 29 days.\n");
        } else if(monthNumber)
  } else {
  printf("Invalid Input");
  }
return 0;
}
