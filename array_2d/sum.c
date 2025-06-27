// find the sum of two matrices of same number of rows and columns

#include <stdio.h>

int main(){
  int a[2][2],b[2][2];
  printf("Enter first matrix:\n");
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf("a[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter second matrix:\n");
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf("b[%d][%d]: ",i,j);
      scanf("%d",&b[i][j]);
    }
  }
  int c[2][2];
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      c[i][j] = a[i][j]+b[i][j];
    }
  }
  
  printf("The sum is:\n");
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      printf("%d  ",c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
