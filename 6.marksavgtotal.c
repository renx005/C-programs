#include <stdio.h>

int main(){
  float p,q,r;
  scanf("%f%f%f",&p,&q,&r);

  printf("total: %f, average: %.2f", p+q+r, (p+q+r)/3);
  return 0;
}
