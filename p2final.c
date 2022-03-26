#include<stdio.h>
#include<math.h>
typedef struct _camel
{
  float r,h,l,w;
}camel;

camel input()
{
  camel c;
  printf("enter the radius: \n");
  scanf("%f",&c.r);
  printf("enter the height: \n");
  scanf("%f",&c.h);
  printf("enter the length: \n");
  scanf("%f",&c.l);
  return c;
}
void find_weight(camel *c)
{
  
  c->w=3.14*(c->r*c->r*c->r)*sqrt(c->h*c->l);
}
void output(camel c)
{
  printf("the weight is %.2f",c.w);
}
int main()
{
  camel c=input();
  find_weight(&c);
  output(c);
  return 0;
}