#include <stdio.h>

 int main(int argc, char const *argv[]) {
   system("clear");
  FILE *fp;
  int a;
  fp=fopen("file1.txt","w");
  if(!fp)
  printf("file not created\n" );

  else printf("file created\n" );

  putw(100,fp);
 fclose(fp);
  fp=fopen("file1.txt","r");
  a=getw(fp);
  printf("%d\n",a );
  fclose(fp);
  return 0;
}
