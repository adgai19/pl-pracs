/*program to check whether a user inputed array is a palendrome or not*/
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
  for(i=0;i<n;i++){if(a[i]!=b[i])
    t=0;

 
  }
  if(t)
  printf("palendrome\n" );
  else
  printf("not palendrome\n" );
  return 0;
}
