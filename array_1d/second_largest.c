// Find the second largest element in an array
//	example if the array is 5,3,4,6,1 and the output is 5

#include <stdio.h>

int main(){
  int a[5];
  printf("Enter the elements for array:\n");
  for(int i=1;i<=5;i++){
    printf("Enter a[%d]: ",i);
    scanf("%d",&a[i]);
  }
  int max = 0;
  int second = 0;
  for(int i=1;i<=5;i++){
    if(a[i]>=max){
      second = max;
      max = a[i];
    }
  }
  printf("second largest = %d",second);
  return 0;
}
