// Search for a given element in the array
//	example if the array is 5,3,4,6,1 and the searching element is 4 then output is Found
// example if the array is 5,3,4,6,1 and the searching element is 2 then output is Not Found


#include<stdio.h>

int main(){
  int a[5];
  printf("Enter array elements:\n");
  for(int i=1;i<=5;i++){
    printf("a[%d]",i);
    scanf("%d",&a[i]);
  }
  int p;
  printf("Enter the number to search in the array:\n");
  scanf("%d",&p);
  for(int i=1;i<=5;i++){
    if(a[i]==p){
      printf("a[%d] = %d",i,a[i]);
    }else{
      printf("%d not found in the array",p);
    }
  }
  return 0;
}
