/*program to sort n numbers entered by user in decending order*/
#include <stdio.h>
int main(){
  int i,n,j,a[100],t;
  printf("enter size" );
  scanf("%d",&n );
  printf("enter nos\n" );
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
    if(a[j]<a[j+1]){
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;}}
  }
  for(i=0;i<n;i++)
  printf("%d\t",a[i] );
}
