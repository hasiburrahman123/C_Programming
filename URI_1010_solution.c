#include<stdio.h>
int main()
{
    int p_code[2], p_u[2], i;
    float price[2], pay;
    for(i=0; i<2; i++)
    {
        scanf("%d %d %f",&code[i],&u[i],&price[i]);
    }
    pay=((price[0]*u[0])+(price[1]*u[1]));
    printf("VALOR A PAGAR: R$ %.2f\n", pay);
    return 0;

}
