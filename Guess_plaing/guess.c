#include<stdio.h>

void Guess()
{
  int A,B,C,D,E;
  for(A=1;A<6;A++)
    for(B=1;B<6;B++)
      for(C=1;C<6;C++)
        for(D=1;D<6;D++)
          for(E=1;E<6;E++)
            if((B==3)+(C==5)==1&&(D==2)+(E==4)==1&&(B==1)+(E==4)==1&&(C==1)+(B==2)==1&&(D==2)+(A==3)==1)
              if(120==A*B*C*D*E)
                printf("A is %d;\nB is %d;\nC is %d;\nD is %d;\nE is %d;\n",A,B,C,D,E);

  

}
int main()
{
  Guess();
  return 0;
}
