// Display the elements in the odd position, then the elements in the even position.
// 	example if the array is 5,3,4,6,1 the the output 3 6 5 4 1


#include <stdio.h>

int main(){
  int a[5];
  printf("Enter the elements in the array:\n");
  for(int i=1;i<=5;i++){
    printf("a[%d]: ",i);
    scanf("%d",&a[i]);
  }
  
  for(int i=1;i<=5;i+=2){
    printf("%d  ",a[i]);
  }
  
  for(int i=2;i<=5;i+=2){
    printf("%d  ",a[i]);
  }
  return 0;
}
