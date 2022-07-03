import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int quantidade;
	    double preco, dinheiro, troco, diferenca;
	    
	    System.out.print("Preço unitario do produto: ");
	    preco = sc.nextDouble();
	    System.out.print("Quantidade comprada: ");
	    quantidade = sc.nextInt();
	    System.out.print("Dinheiro recebido: ");
	    dinheiro = sc.nextDouble();
	    
	    if (dinheiro >= (preco * quantidade)) {
	        troco = dinheiro - (preco * quantidade);
	        System.out.println("TROCO = " + String.format("%.2f", troco));
	    }
	    else { diferenca = (quantidade * preco) - dinheiro;
	           System.out.println("DINHEIRO INSUFICIENTE. FALTAM " + diferenca + " REAIS");
	    }

	    sc.close();

	}

}
