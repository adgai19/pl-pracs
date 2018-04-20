/*program to take a paragraph from terminal and save it in a file*/
#include <stdio.h>
#include <stdio_ext.h>
int main(int argc, char const *argv[]) {
  char para[100];
  int c=0,new=0,vt=0,bs=0,i;
  FILE *p=fopen("para.txt","w");
  printf("paragraph typing program\nenter the words 1 santance at a time\npress | to exit" );
  __fpurge(stdin);
while(gets(para)){
  if(para[0]=='|' && para[1]=='\0')
  break;
  //printf("hi\n" );
  fprintf(p, "%s.\n",para );
}  fclose(p);

  p=fopen("para.txt","r");
//  fgets(para,100,p);
  //puts(para);
  while (fgets(para,100,p)!=NULL) {
    /* code */
    puts(para);
    for(i=0;para[i]!='\0';i++){c++;
      if (para[i]==11)
      vt++;
      if(para[i]==' ')
      bs++;
      if(para[i]=='\n')
      new++;
        /* code */

    }

  }
  printf("vt=%d bs=%d newline=%d characters=%d\n",vt,bs,new,c );





  return 0;
}
