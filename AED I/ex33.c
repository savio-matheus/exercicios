// Cometa (Lista 1)

#include <stdio.h>
#include <math.h>

#define MARCO 1986
#define INTERVALO 76
#define ANOS_ERRO 365

// Verifica se o número passado corresponde a um ano bissexto.
int bissexto(int ano)
{
    if(ano % 4 == 0 && ano % 100 != 0) return 1;
    if(ano % 400 == 0 && ano % 100 == 0) return 1;
    
    return 0;
}

// A cada 365 anos bissextos, adiciona ou subtrai 1 ano de proxPassagem.
void corrigeErro(int *proxPassagem)
{
    int distancia = (int) fabs(*proxPassagem - MARCO);
    int anosBissextos = 0;

    if(*proxPassagem > MARCO){
        for(distancia; distancia != 0; distancia--){
            anosBissextos += bissexto(MARCO + distancia);
        }

        anosBissextos = (int) (anosBissextos / ANOS_ERRO);
        *proxPassagem += anosBissextos;
    }
    else{
        for(distancia; distancia != 0; distancia--){
            anosBissextos += bissexto(MARCO - distancia);
        }

        anosBissextos = (int) (anosBissextos / ANOS_ERRO);
        *proxPassagem -= anosBissextos;
    }
}

// Descobre a próxima passagem do cometa Haley a partir do ano fornecido.
int calculoProxPassagem(int anoAtual)
{
    int proxPassagem = MARCO;
    int diferenca = anoAtual - MARCO;

    if(diferenca > 0){
        for(proxPassagem;
            proxPassagem < anoAtual;
            proxPassagem += 76);

        corrigeErro(&proxPassagem);

        if(proxPassagem == anoAtual){
            proxPassagem += 76;
            corrigeErro(&proxPassagem);
            return proxPassagem;
        }

        return proxPassagem;
    }
    else if(diferenca < 0){
        for(proxPassagem;
            proxPassagem > anoAtual && proxPassagem -76 > anoAtual;
            proxPassagem -= 76);

        corrigeErro(&proxPassagem);

        if(proxPassagem == anoAtual){
            proxPassagem += 76;
            corrigeErro(&proxPassagem);
            return proxPassagem;
        }

        return proxPassagem;
    }
    else{
        return (anoAtual + 76);
    }
}

int main(void)
{
    int anoAtual;
    int proxPassagem;

    scanf("%d", &anoAtual);
    proxPassagem = calculoProxPassagem(anoAtual);
    printf("%d\n", proxPassagem);

    return 0;
}