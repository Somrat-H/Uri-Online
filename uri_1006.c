// Project Name   - uri_1006.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 08/30/21, 10:48:05 PM
#include<stdio.h>
int main(){
    double A, B, C, x;
    scanf("%lf\n", &A);
    scanf("%lf\n", &B);
    scanf("%lf", &C);

    x=((A*2)+(B*3)+(C*5))/(2+3+5);

    printf("MEDIA = %.1lf\n", x);

    return 0;

}
