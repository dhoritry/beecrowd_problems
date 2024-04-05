#include <stdio.h>
    int main()
    {
        float x,y,z,c;
        scanf("%f %f %f", &x, &y, &z);
        c = (x*2+y*3+z*5)/(2+3+5);
        printf("MEDIA = %.1f\n",c);
        return 0;
    }
