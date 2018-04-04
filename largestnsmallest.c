/*program to display largest and smallest no in the array*/
#include <stdio.h>
int main(){
  int i,n,l,s, a[100];
  system("clear");
  printf("enter size\n" );
  scanf("%d",&n );
  for (i=0;i<n;i++) {
    scanf("%d",&a[i] );

    /* code */
  }
  for(i=1,l=a[0],s=a[0];i<n;i++)

  {
    if(a[i]<s)
    s=a[i];
    if(a[i]>l)
    l=a[i];
  }
  printf("s=%d\nl=%d",s,l);
}
