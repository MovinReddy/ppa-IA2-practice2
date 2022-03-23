#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the base:");
  scanf("%f",base);
  printf("enter the height:");
  scanf("%f",height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("area of traingle with base %0.5f and height %0.5f is %0.5f\n",base,height,area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;

}