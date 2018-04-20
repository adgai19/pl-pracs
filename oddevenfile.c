#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n,i,t;
  FILE *nump, *oddp, *evenp;
  nump=fopen("num.txt","w");

  printf("enter no of inputs\n" );
  scanf("%d",&n );
  while(n--){
    scanf("%d",&i );
    putw(i,nump);
  }
  fclose(nump);
nump=fopen("num.txt","r");
oddp=fopen("odd.txt","w");
evenp=fopen("even.txt","w");
  printf("you have entered\n" );
while((i=getw(nump))!=EOF){
//  i=getw(nump);
  printf("%d\n",i );
  if(!(i%2))
  putw(i,evenp);
  else
  putw(i,oddp);
}

    fclose(nump);
  fclose(oddp);
  fclose(evenp);

  printf("odd nos\n" );
  oddp=fopen("odd.txt","r");
  while ((i=getw(oddp))!=EOF) {
    printf("%d\n",i );
  }

  printf("even nos\n" );
  evenp=fopen("even.txt","r");
  while ((i=getw(evenp))!=EOF) {
    printf("%d\n",i );
  }

  return 0;
}
