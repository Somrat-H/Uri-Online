// Project Name   - uri_1015.c
// Author Name    - Md. Somrat Hossain
// Author E-mail  - somrat945hossain@gmail.com
// Created On     - 09/01/21, 01:29:26 PM
#include<stdio.h>
#include<math.h>
int main(){
    double x1,x2,y1,y2,z;
    scanf("%lf %lf\n",&x1,&y1);
    scanf("%lf %lf\n",&x2,&y2);

    z = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("%.4lf\n",sqrt(z));





    return 0;
}
