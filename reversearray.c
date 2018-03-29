#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a[100],i,n,b[100],t;
  printf("enter no of elements\n" );
  scanf("%d",&n);
  printf("enter elements\n" );
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  /*for(i=0;i<n;i++){
    b[n-i-1]=a[i];
  }*/
  for(i=0;i<n/2;i++){
  t=a[i];
  a[i]=a[n-1-i];
  a[n-1-i]=t;
  }
  printf("the 1st array is \n" );
  for(i=0;i<n;i++){
    printf("%d\t",a[i] );
  //  b[i]=a[i];
  }
  /*  printf("\nthe 2nd array is \n" );
    for(i=0;i<n;i++){
      printf("%d\t",b[i] );
    //  b[i]=a[i];
  }*/
  return 0;
}
