
#include <stdio.h>
#include <math.h>
#define PI 3.14
float input_radius()
{
  float x;
  printf("Enter Radius:- ");
  scanf("%f",&x);
  return x;
}
float input_heigth()
{
  float x;
  printf("Enter Height:- ");
  scanf("%f",&x);
  return x;
}
float input_length()
{
  float x;
  printf("Enter Length:- ");
  scanf("%f",&x);
  return x;
}
float find_weight(float r, float h, float l)
{
  float x;
  x=PI*pow(r,3)*(sqrt(h*l));
  return x;
}
void output(float r,float h,float l,float w)
{
  printf("The required weight is %0.2f",w);
}
int main()
{
  float r,h,l,w;
  r=input_radius();
  h=input_heigth();
  l=input_length();
  w=find_weight(r,h,l);
  output(r,h,l,w);
  return 0;
}

/*
#include <stdio.h>
#include<math.h>
float input_radius()
{
  float r;
  printf("Enter the radius: \n");
  scanf("%f",&r);
  return r;
}
float input_height()
{
  float h;
  printf("Enter the height: \n");
  scanf("%f",&h);
  return h;
}
float input_length()
{
  float l;
  printf("Enter the length: \n");
  scanf("%f",&l);
  return l;
}
float find_weight(float radius, float height, float length)
{
  float w;
  w = 3.14 * (radius*radius*radius)* sqrt(height * length);
  return w;
}
void output(float radius, float height,float weight, float length)
{
  float a;
  printf("The required weight is %0.1f",a);
}
int main()
{
  float r,h,l,weight;
  r=input_radius();
  h=input_height();
  l=input_length();
  weight=find_weight(r,h,l);
  output(r,h,l,weight);
  return 0;
}
*/