// Project Name   - uri_1013.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 08/31/21, 10:44:58 PM
#include<stdio.h>
int main(){

    int a, b ,c, max = 0;;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
      max = a;
    }
    else if(b>a && b>c){
        max = b;

    }
    else{
        max = c;
    }
    printf("%d eh o maior\n", max);

    return 0;
}
