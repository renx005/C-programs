// Q. Find the maximum element in an array
//	example if the array is 5,3,4,6,1 the the output is 6

#include <stdio.h>

int main(){
  int a[5];
  printf("Enter the elements for array:\n");
  for(int i=1;i<=5;i++){
    printf("Enter a[%d]: ",i);
    scanf("%d",&a[i]);
  }

  int max = 0;
  for(int i=1;i<=5;i++){
    if(a[i]>=max){
      max = a[i];
    }
  }
  printf("Max = %d",max);
  return 0;
}
