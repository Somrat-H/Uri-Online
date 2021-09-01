// Project Name   - uri_1018.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 09/01/21, 08:29:21 PM
#include<stdio.h>
int main(){

    int x,y,z,p,q,r,s,t,h,f,tw,te,fi,two,one;
    scanf("%d",&x);
    h = x/100;
    z = x%100;
    f = z/50;
    p = z%50;
    tw = p/20;
    q = p%20;
    te= q/10;
      r = q%10;
   fi = r/5;
    s = r%5;
    two = s/2;
    t = s%2;
    one = t/1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",x,h,f,tw,te,fi,two,one);




    return 0;
}
