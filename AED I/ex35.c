// Overflow (Lista 1)
#include <stdio.h>

int main(void)
{
    int n;
    int n1;
    int n2;
    char operacao;

    scanf(" %d", &n);
    scanf(" %d", &n1);
    scanf(" %c", &operacao);
    scanf(" %d", &n2);

    if(operacao == '+'){
        if(n1 > n - n2) printf("overflow\n");
        else printf("no overflow\n");
    }
    else if(operacao == 'x'){
        if( (double) n1 > (n / n2)) printf("overflow\n");
        else printf("no overflow\n");
    }
    else{
        printf("Ta doidao?\n");
    }

    return 0;
}
// (supondo sempre n1 < n e n2 < n)
