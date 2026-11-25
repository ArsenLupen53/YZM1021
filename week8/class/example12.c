#include <stdio.h>
#include <math.h>

#define PI 3.141593

void phasor(float real, float img);

int main()
{
    float x,y;
    printf("Enter real and imaginary part of the number: ");
    scanf("%f %f",&x,&y);
    phasor(x,y);
    return 0;
}

void phasor(float real, float img)
{
    float mag,phs;
    mag = sqrt(real*real + img*img);
    phs = atan(img/real)*180/PI;
    printf("\nMagnitude: %f\n",mag);
    printf("Phase: %f\n",phs);
}
