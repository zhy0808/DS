#include <stdio.h>
int main()
{
  int i=0;
    for (i = 1; i <= 8; i++)
    {
          int x = 2*i - 1;
          int k=0;
              for ( k = 0; k < 8 - i; k++)
              {
                      printf(" ");
                          
              }
                  while (x)
                  {
                          printf("*");
                                x--;
                                    
                  }
                      printf("\n");
                        
    }
      for (i = 9; i <= 15; i++)
      {
            int x = 2 * (16 - i) - 1;
            int k=0;
                for (k = 0; k < (8 - (16 - i)); k++)
                {
                        printf(" ");
                            
                }
                    while (x)
                    {
                            printf("*");
                                  x--;
                                      
                    }
                        printf("\n");
                          
      }
     return 0;
}
