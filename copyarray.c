#include <stdio.h>
 int main(int argc, char const *argv[]) {
  int i,a[100],b[100],n;
  printf("enter no of elements\n" );
  scanf("%d",&n);
  printf("enter elements\n" );
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("the 1st array is \n" );
  for(i=0;i<n;i++){
    printf("%d\t",a[i] );
    b[i]=a[i];
  }
    printf("\nthe 2nd array is \n" );
    for(i=0;i<n;i++){
      printf("%d\t",b[i] );
    //  b[i]=a[i];
    }
  return 0;
}
