#include "proc.h"
void proc()
{
  char bar[NUM];
  memset(bar,'\0',sizeof(bar));
  int i=0;
  const char *p="|/-\\";
  while(i<100)
  {
    fflush(stdout);
    bar[i++]='#';
    usleep(30000);
    printf("[%-100s][%3d%%][%c]\r",bar,i,p[i%4]);
  }
  printf("\n");
}
