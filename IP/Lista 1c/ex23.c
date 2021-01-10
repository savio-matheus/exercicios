// Lucro de mercadorias, L1c - 23
#include <stdio.h>
main(){
int i = 0;
// Recebem dados do usuário
unsigned long int cod;
double custo, venda, lucro;
int nVendas;
// Recebem os dados para saída
unsigned long int codmaxLucro = 0, codmaxVendas = 0;
double somaCusto = 0, somaVenda = 0, somaLucro = 0, maxLucro = 0, centLucro = 1;
int nVendas10 = 0, nVendas1020 = 0, nVendas20 = 0, maxVendas = 0;

while(i < 6){
    scanf("%d %lf %lf %d", &cod, &custo, &venda, &nVendas);
    if (cod == -1 || custo == -1 || venda == -1 || nVendas == -1){
        break;
    }
    lucro = (venda - custo);
    
    // Quantidade de mercadorias que geram lucro menor que 10%.
    if (lucro < (venda * 0.1)){
        nVendas10++;
    }
    // Quantidade das que geram lucro no intervalo [10%, 20%].
    else if(lucro >= (venda * 0.1) && lucro <= (venda * 0.2)){
        nVendas1020++;
    }
    // Lucro maior que 20%.
    else{
        nVendas20++;
        // Seleciona aquela que gerar o maior lucro.
        if (lucro > maxLucro){
            codmaxLucro = cod;
            maxLucro = (venda - custo);
        }
    }
    
    // Seleciona a mercadoria mais vendida.
    if (nVendas > maxVendas){
        codmaxVendas = cod;
        maxVendas = nVendas;
    }
    
    somaVenda += venda * nVendas;
    somaCusto += custo * nVendas;
    somaLucro += lucro * nVendas;
    centLucro = (somaLucro / somaVenda) * 100;
    
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", nVendas10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", nVendas1020);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", nVendas20);
    printf("Codigo da mercadoria que gerou maior lucro: %d\n", codmaxLucro);
    printf("Codigo da mercadoria mais vendida: %d\n", codmaxVendas);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf, e percentual de lucro total: %.2lf%%\n", somaCusto, somaVenda, centLucro);
    i++;
}

}