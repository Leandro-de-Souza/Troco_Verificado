#include <stdio.h>


int main()
{

       int quantidade;
       double preco, valorRecebido, troco, diferenca;

       printf("Preco unitario do produto: ");
       scanf("%lf", &preco);
       printf("Quantidade comprada: ");
       scanf("%d", &quantidade);
       printf("Dinheiro recebido: ");
       scanf("%lf", &valorRecebido);

       if (valorRecebido >= (preco * quantidade)) {
            troco = valorRecebido - (quantidade * preco);
            printf("TROCO = %.2lf", troco);
       }
       else { diferenca = (quantidade * preco) - valorRecebido;
             printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", diferenca);
       }


    return 0;
}
