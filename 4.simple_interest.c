#include <stdio.h>

int main(){
  float si, p, t, r;
  printf("principal amount:");
  scanf("%f",&p);
  printf("interest rate:");
  scanf("%f",&r);
  printf("time period");
  scanf("%f",&t);

  si = (p*t*r)/100;
  printf("Simple interest: %.2f",si);
  return 0;
}
