#include<stdio.h>
int main()
{
    int x;
    double y,kml;
    scanf("%d %lf",&x,&y);
    kml=x/y;
    printf("%.3lf km/l\n",kml);
    return 0;

}
