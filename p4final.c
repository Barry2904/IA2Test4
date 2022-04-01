#include<stdio.h>
#include<math.h>
float input()
{
  float x;
  printf("Enter the value of x\n");
  scanf("%f",&x);
  return x;
}
int fact(int x)
{
  int factorial=1,i;
  for(i=2;i<=x;i++)
  {
    factorial=factorial*(i);
  }
  return factorial;
}
float find_borga(float x,int y)
{
  int i,j;
  float ans=1,term;
  // for(i=1,j=1;term<0.001;i++)
  // for(i=1,j=1;i>0;i++)
  printf("%d + ",1);
  for(i=1,j=1;i<=y;i++)
  {
    j=j+2;
    term=pow(x,i)/fact(j);
    ans=ans+term;
    printf("%.4f + ",term);
  }
  return ans;
}
void output(float borga)
{
  printf("= %.4f",borga);
}
int main()
{
  float n;
  float borga;
  n=input();
  borga=find_borga(n,3);
  output(borga);
  return 0;
}