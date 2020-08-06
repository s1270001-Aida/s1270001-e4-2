#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int i,b=0,heads=0,tails=0;
  char a[10];

  printf("Tossing a coin...\n");
  srand(time(NULL));
  for(i=1;i<4;i++)
    {
      b=rand()%2+1;
      if(b==1)
	{
	  printf("round%d:Heads\n",i);
	  heads++;	  
	}
      else if(b==2)
	{
	  printf("round%d:Tails\n",i);
	  tails++;
	}
     
    }
  printf("Heads:%d, Tails:%d\n",heads,tails);

 if(heads > tails)printf("%s won!\n",a);
  else if(heads < tails)printf("%s lost!\n",a);
	
  return 0;
}
