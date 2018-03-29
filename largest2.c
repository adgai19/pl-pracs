#include <stdio.h>
int main() {
  int i,n,a[100],l,l2n;
int  l2c=0;
  printf("enter the no of elements\n element greater than 2" );
  scanf("%d",&n);
  if(n<2)
  {
    printf("wrong input \t goodbye\n" );
    return 0;
  }
  printf("enter %d elements\n",n );
  for (i=0;i<n;i++) {
    scanf("%d",&a[i] );
    /* code */
  }
  l=a[0];
  for(i=1;i<n;i++){
    if(a[i]>l){
    l2c=1;
  //  printf("l2c change\n%d",l2c );
      l2n=l;
      l=a[i];
    }
  }if(!l2c){l2n=a[1];
    for(i=1;i<n;i++)
    if(l2n<a[i])
    l2n=a[i];

  }


  printf("%d and %d are the smallest and 2nd smallest resp\n",l,l2n );
/*  else
  printf("youe array contains only 1 element\n" );*/
  return 0;
}
