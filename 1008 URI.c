#include<stdio.h>
int main()
{
    int N,WH;
    double S;
    scanf("%d%d%lf",&N,&WH,&S);
    double sum= WH*S;
    printf("NUMBER = %d\n",N);
    printf("SALARY = U$ %.2lf\n",sum);
    return 0;
}
