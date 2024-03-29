/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

main()
{
  float r, a;
  
  printf("Enter radius (in cm):\n");
  scanf("%f", &r);

  // Convert radius to inches
  r /= 2.54;

  a = PI * r * r;

  printf("Circle's area is %3.2f (sq in).\n", a);
  return;
}
