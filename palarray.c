#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a[100],i,n,b[100],t=1;
  printf("enter no of elements\n" );
  scanf("%d",&n);
  printf("enter elements\n" );
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++){
    b[n-i-1]=a[i];
  }
  /*for(i=0;i<n/2;i++){
  t=a[i];
  a[i]=a[n-1-i];
  a[n-1-i]=t;
}*/
//  printf("the 1st array is \n" );
  for(i=0;i<n;i++){if(a[i]!=b[i])
    t=0;

  //  b[i]=a[i];
  }
  if(t)
  printf("palendrome\n" );
  else
  printf("not palendrome\n" );
  /*  printf("\nthe 2nd array is \n" );
    for(i=0;i<n;i++){
      printf("%d\t",b[i] );
    //  b[i]=a[i];
  }*/
  return 0;
}
