#include<stdio.h>
#include<math.h>

struct camel
{
  float radius,height,length,weight;
  int mood;
};
typedef struct camel Camel;
Camel input()
{
  Camel x;
  printf("Enter necessary info:-\n");
  printf("Enter the radius:- ");
  scanf("%f",&x.radius);
  printf("Enter the height:- ");
  scanf("%f",&x.height);
  printf("Enter the length:- ");
  scanf("%f",&x.length);
  return x;
}
void find_weight(Camel *c)
{
  c->weight=3.14*pow(c->radius,3)*sqrt(c->height*c->length);
}
void find_mood(Camel *c)
{
  // SICK
  if(c->radius < c->height && c->radius < c->length)
  {
    c->mood=0;
  }
  // HAPPY
  else if(c->height < c->radius && c->height < c->length)
  {
    c->mood=1;
  }
  // TENSE
  else if(c->length < c->height && c->length < c->radius)
  {
    c->mood=2;
  }
}
void output(Camel c)
{
  if(c.mood==0)
  {
    printf("The camel is Sick.");
  }
  else if(c.mood==1)
  {
    printf("The camel is Happy.");
  }
  else if(c.mood==2)
  {
    printf("The camel is Tense.");
  }
}
int main()
{
  Camel c;
  c=input();
  find_weight(&c);
  find_mood(&c);
  output(c);
  return 0;
}