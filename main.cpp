#include <bits/stdc++.h>

using namespace std;

int main()
{

       int quantidade;
       double preco, dinheiro, troco, diferenca;

       cout << "Preço unitario do produto: ";
       cin >> preco;
       cout << "Quantidade comprada: ";
       cin >> quantidade;
       cout << "Dinheiro recebido: ";
       cin >> dinheiro;

       if (dinheiro >= (preco * quantidade)) {
           troco = dinheiro - (preco * quantidade);
           cout << fixed << setprecision(2);
           cout << "TROCO = " << troco << endl;
       }
       else { diferenca = (quantidade * preco) - dinheiro;
              cout << fixed << setprecision(2);
              cout << "DINHEIRO INSUFICIENTE. FALTAM " << diferenca << " REAIS" << endl;
       }



    return 0;
}
