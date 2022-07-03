using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TROCO_VERIFICADO {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int quantidade;
            double preco, dinheiro, troco, diferenca;

            Console.Write("Preço unitario do produto: ");
            preco = double.Parse(Console.ReadLine(), CI);
            Console.Write("Quantidade comprada: ");
            quantidade = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro recebido: ");
            dinheiro = double.Parse(Console.ReadLine(), CI);

            if (dinheiro >= (preco * quantidade)) {
                troco = dinheiro - (preco * quantidade);
                Console.WriteLine("TROCO = " + troco.ToString("F2", CI));
            }
            else {
                diferenca = (quantidade * preco) - dinheiro;
                Console.WriteLine("DINHEIRO INSUFICIENTE. FALTAM " + diferenca.ToString("F2", CI) + " REAIS");
            }

        }
    }
}
