
preco = float(input("Preço unitario do produto: "))
quantidade = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))

if dinheiro >= (preco * quantidade):
    troco = dinheiro - (preco * quantidade)
    print(f"TROCO = {troco:.2f}")
else:
    diferenca = (quantidade * preco) - dinheiro
    print(f"DINHEIRO INSUFICIENTE. FALTAM {diferenca:.2f} REAIS")
