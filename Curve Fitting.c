#include<stdio.h>
#include<conio.h>
#include<math.h>
#define S 50
int main()
{
    int n, i;
    float x[S], y[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b, A;
    printf("How many data points: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("x[%d]=",i);
        scanf("%f", &x[i]);
        printf("y[%d]=",i);
        scanf("%f", &y[i]);
    }
    for(i=1; i<=n; i++)
    {
        sumX = sumX + log(x[i]);
        sumX2 = sumX2 + log(x[i])*log(x[i]);
        sumY = sumY + log(y[i]);
        sumXY = sumXY + log(x[i])*log(y[i]);
    }
    b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
    A = (sumY - b*sumX)/n;
    a = exp(A);
    printf("Values are: a=%0.2f and b = %0.2f",a,b);
    return(0);
}
