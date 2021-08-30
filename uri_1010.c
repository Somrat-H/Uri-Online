// Project Name   - uri_1010.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 08/30/21, 11:17:01 PM
#include<stdio.h>
int main(){
    int pc1,pc2,pn1,pn2;
    double up1,up2,x;

    scanf("%d %d %lf\n",&pc1,&pn1,&up1);
    scanf("%d %d %lf", &pc2,&pn2,&up2);


    x=((pn1*up1)+(pn2*up2));

    printf("VOLAR A PAGAR: R$ %.2lf\n", x);

    return 0;

}
