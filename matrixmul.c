/*program to multiply two matrix */
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i,j,k,r1,r2,c1,c2,a[20][20],b[20][20],c[20][20];

  printf("enter r c for 1st matrix\n" );//gets no of rows and columns of 1st matrix
  scanf("%d%d",&r1,&c1);

  printf("enter elements for 1st matrix" );//gets the elements of 1st matrix
  for(i=0;i<r1;i++){
  for(j=0;j<c1;j++)
  scanf("%d",&a[i][j]);}

  printf("enter r c for 2nd matrix\n" );//gets no of rows and columns of 2nd matrix
  scanf("%d%d",&r2,&c2);
    printf("enter elements for 2nd matrix");//gets elements of 2nd matrix
  for(i=0;i<r2;i++){
  for(j=0;j<c2;j++)
  scanf("%d",&b[i][j]);}

  if(r2!=c1){//condition checking for matrix multiplication
  printf("not possible\n" );
  return 0;
}
for(i=0;i<r1;i++){//matrix multiplication
  for(j=0;j<c2;j++){
    c[i][j]=0;
    for(k=0;k<c1;k++)
    c[i][j]+=a[i][k]*b[k][j];

  }

}
printf("the 1st matrix is \n" );//prints the 1st matrix
for(i=0;i<r1;i++)
{
  for(j=0;j<c1;j++)
  printf("%d\t",a[i][j] );
  printf("\n" );
}
printf("the 2nd matrix is \n" );//prints the 2nd matrix
for(i=0;i<r2;i++)
{
  for(j=0;j<c2;j++)
  printf("%d\t",b[i][j] );
  printf("\n" );
}
printf("resultant matrix is \n" );//prints the resultant matrix
for(i=0;i<r1;i++)
{
  for(j=0;j<c2;j++)
  printf("%d\t",c[i][j] );
  printf("\n" );
}
  return 0;
}
