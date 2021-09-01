// Project Name   - uri_1019.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 09/01/21, 08:54:46 PM
#include<stdio.h>
int main(){
    int N, h, m, s, hh, mm, ss;
    scanf("%d",&N);
    hh = N/3600;
    h = N%3600;
    mm = h/60;
    ss = h%60;


    printf("%d:%d:%d\n", hh, mm, ss);


    return 0;
}
