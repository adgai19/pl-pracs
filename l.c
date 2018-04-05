/*-program to find largest 2 nos in an array .in this approach we do 2 iterations of bubblesort* and find print the last 2 entries 
*/


#include <stdio.h>
int main(){
  int i,n,j,a[100],t;
  printf("enter size" );
  scanf("%d",&n );
  printf("enter nos\n" );
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<2;i++){
    for(j=0;j<n-1;j++){
    if(a[j]>a[j+1]){
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;}}
  }

  printf("the largest 2 are %d and %d",a[n-1],a[n-2] );
}
/*  
*refer to the code written as bubblesort

bubblesort is an algo whoch compares 2 adjcent members and exchanges them if they are not on their correct position.this way we get the element on the last position first*/

