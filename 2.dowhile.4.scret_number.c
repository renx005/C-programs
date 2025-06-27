// Q. Keep a secret number between 20 and 30 in your program. Ask the user to predict the number between 20 and 30. Use do while loop until the user predicts your secret number and displays the count of attempts.

#include <stdio.h>

int main(){
  int scr_num = 28;
  printf("Predict the secret number between 20 and 3o:\n");
  int count=0;
  int pred;
  do{
    printf("Enter your prediction:\n");
    scanf("%d",&pred);
    if(pred == scr_num){
      printf("Right prediction\n");
      break;
    } else {
      printf("Try again:\n");
      count++;
    }
  }while(pred != scr_num);
  printf("Number of attempts: %d",count);
  return 0;
}
