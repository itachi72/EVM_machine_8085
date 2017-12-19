#include <stdio.h>
#include <stdlib.h>
main()
{
    FILE *p;
    int i=0,flag=0;
    p=fopen("TEST2_port","r");
    char c,ar[]="000210030900000200";
    char ar2[18];
  while(((c=fgetc(p))!=EOF)&&(i!=18))
  {
    ar2[i]=c;
    i++;
  }
   fclose(p);
    for(i=0;i<18;i++)
    {
     printf("%c",ar2[i]);
    }
    for(i=0;i<18;i++)
    {
     if(ar[i]!=ar2[i])
      flag=1;
    }
    if(flag==0)
        printf("the code is correct");
    else
        printf("the code is not correct");
}
