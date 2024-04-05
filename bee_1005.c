#include <stdio.h>
    int main()
    {
        float x,y,c;
        scanf("%f %f", &x, &y);
        c = (x*3.5+y*7.5)/(3.5+7.5);
        printf("MEDIA = %.5f\n",c);
        return 0;
    }
