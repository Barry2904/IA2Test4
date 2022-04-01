#include<stdio.h>
#include<math.h>
#define PI 3.14
struct _camel
{
  float radius,height,length,weight;
};
typedef struct _camel Camel;

float input_truck_weight()
{
  float w;
  printf("Enter the weight of the truck:- ");
  scanf("%f",&w);
  return w;
}
int input_no_camels()
{
  int n;
  printf("Enter the no. of camels:- ");
  scanf("%d",&n);
  return n;
}
void input_camel_details(int n, Camel c[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("Enter camel %d Radius:- ",i+1);
    scanf("%f",&c[i].radius);
    printf("Enter camel %d Height:- ",i+1);
    scanf("%f",&c[i].height);
    printf("Enter camel %d Length:- ",i+1);
    scanf("%f",&c[i].length);
  }
}
float total_weight(int n, Camel c[n], float truck_w)
{
  int i;
  float total_w,cw=0;
  for(i=0;i<n;i++)
  {
    c[i].weight=PI*pow(c[i].radius,3)*(sqrt(c[i].height*c[i].length));
    cw=cw+c[i].weight;
  }
  total_w=truck_w+cw;
  return total_w;
}
void output(float total_truck_weight)
{
  printf("Total weight of the truck is %.2f",total_truck_weight);
}
int main()
{
  int n;
  float truck_w,total_w;
  truck_w=input_truck_weight();
  n=input_no_camels();
  Camel c[n];
  input_camel_details(n,c);
  total_w=total_weight(n,c,truck_w);
  output(total_w);
  return 0;
}