/*program to demonstrate invoice creation using file handling*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
  char itname[20],no[5];
  int n,i,qty,price,value;
  FILE *p=fopen("invoice.txt","w");
  fprintf(p, "ITEM NAME\tNUMBER\tPRICE\tQUANTITY\tVALUE\n" );
  printf("ENTER no of items\n" );
  scanf("%d",&n );
  for(i=0;i<n;i++)
  {
    printf("enter item name,no,price and quantity\n" );
    scanf("%s%s%d%d",itname,no,&price,&qty );
    value=price*qty;
    fprintf(p, "%s\t\t%s\t%d\t%d\t\t%d\n",itname,no,price,qty,value );

  }
  fclose(p);

  return 0;
}
