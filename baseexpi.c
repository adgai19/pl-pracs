/*program to take 2 numners i and j and to display i^j*/

#include <stdio.h>
long baseexpo(int i,int j){
  if(j==0)
  return 1;
  return i*baseexpo(i,j-1);
}
int  main(int argc, char const *argv[]) {
  int i,j;
printf("enter base and power\n" );
scanf("%d%d",&i,&j);
printf("the ans is %ld\n",baseexpo(i,j));
  return 0;
}
