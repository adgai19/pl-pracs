#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a[100]={0,1},i,n;
  printf("enter no of elements you want to generate\n" );
  scanf("%d",&n );
  for(i=2;i<n;i++){
    a[i]=a[i-1]+a[i-2];
  }
  printf("the elements are as follows\n" );
  for(i=0;i<n;i++){
    printf("%d\t",a[i] );
  }
  return 0;
}
