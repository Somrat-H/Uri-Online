// Project Name   - uri_1009.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 08/30/21, 11:06:22 PM
#include<stdio.h>
int main(){
    char A[100];
    double B, S,x;
    scanf("%s\n", &A);
    scanf("%lf\n", &B);
    scanf("%lf", &S);

    x=B+(S*0.15);

    printf("TOTAL = R$ %.2lf\n", x);

    return 0;

}
