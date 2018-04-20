/*program to implement phone directory
demonstration of entering records, reading records and search function in file handling*/
//#include <coino.h> include this if on windows
#include <stdio_ext.h>//no need for this on windows. used on linux since fflush is not implemented in linux.
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  FILE *p;
  int t,n,c=1;
  char fn[15],ln[15],no[10],sname[15];
system("clear");//replace with clrscr() if on windows;
  //entering entries in a FILE
  p=fopen("phone.txt","w");
  printf("enter the no of entries\n" );
  scanf("%d",&n );
  for(t=1;t<=n;t++){
    printf("enter first name\n" );
    __fpurge(stdin);//replace with fflush(stdin) on windows
    gets(fn);
    printf("enter last name\n" );
    __fpurge(stdin);//replace with fflush(stdin) on windows
    gets(ln);
    printf("enter no\n" );
    __fpurge(stdin);//replace with fflush(stdin) on windows
    gets(no);
    fprintf(p,"%d\t%s\t%s\t%s\n",t,fn,ln,no);
  }
  fclose(p);


  //reading contents of file and entering them in a table
printf("ID\tFIRST NAME\tLAST NAME\tPHONE NO\n" );
p=fopen("phone.txt","r");

while(fscanf(p,"%d\t%s\t%s\t%s\n",&t,fn,ln,no)!=EOF)
    printf("%d\t%s\t\t%s\t\t%s\n", t,fn,ln,no);
fclose(p);


//search implimentation
printf("enter the name you want to find\n");
scanf("%s",sname );
p=fopen("phone.txt","r");
while(fscanf(p,"%d\t%s\t%s\t%s\n",&t,fn,ln,no)!=EOF)
{
  if(!strcasecmp(fn,sname)){//replace strcasecmp with strcmpi in windows
  printf("the details are \n%d\t%s\t%s\t%s\n",t,fn,ln,no );
c=0;
}}
if(c)
printf("the record is not found\n" );



  return 0;
}
