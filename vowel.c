#include <stdio.h>

int main(){
  char p;
  printf("Enter an alphabet:");
  scanf("%c",&p);

  switch (p) {
    case "a"||"A":
      printf("Is a vowel");
    case "e"||"E":
      printf("Vowel");
    case "i"||"I":
      printf("Vowel");
    default:
        printf("Not a vowel")
  }
}
