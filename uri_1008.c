// Project Name   - uri_1008.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 08/30/21, 10:58:19 PM
#include<stdio.h>
int main(){
    int A, B;
    double S, x;
    scanf("%d\n", &A);
    scanf("%d\n", &B);
    scanf("%lf", &S);

    x=B*S;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", A, x);

    return 0;

}
