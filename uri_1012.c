// Project Name   - uri_1012.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 08/31/21, 08:53:21 PM
#include<stdio.h>
int main(){

    double A,B,C,rec,rad,at,as,ar;

    scanf("%lf %lf %lf", &A,&B,&C);

    rec = (A*C)/2;
    rad = (3.14159*(C*C));
    at = ((A+B)/2)*C;
    as = B*B;
    ar = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", rec,rad,at,as,ar);

    return 0;
}
