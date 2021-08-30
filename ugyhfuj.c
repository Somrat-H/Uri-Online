#include<stdio.h>
int main()
{
    int PN_1,PN_2,PQ_1,PQ_2;

    double P_1,P_2,V,x,y;
    scanf("%d %d %f\n",&PN_1,&PQ_1,&P_1);
    scanf("%d %d %f",&PN_2,&PQ_2,&P_2);
    //x=(PQ_1*P_1)+(PQ_2*P_2);

    printf("VALOR A PAGAR: R$ %.2f\n",((PQ_1*P_1)+(PQ_2*P_2)));
    return 0;

}

