#include <stdio.h>
 int main(int argc, char const *argv[]) {
  FILE *fp;
  char a='A';
 fp=fopen("file1.txt","w");
  if(!fp)
  printf("file not created\n" );

  else printf("file created\n" );

  putc('a',fp);
  fclose(fp);
  fp=fopen("file1.txt","r");
  a=getc(fp);
  printf("%c\n",a );
  fclose(fp);
  return 0;
}
