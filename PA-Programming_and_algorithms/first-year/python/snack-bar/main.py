import json
import os

DATA_FILE = "lanterna_lanchote.json"

produtos = []
pedidos = []

# Carrega as informações antigas e cria a pasta do json.
def load_data():
    global produtos, pedidos

    if not os.path.exists(DATA_FILE):
       produtos = [] 
       pedidos = []
       return

    with open(DATA_FILE, "r", encoding="utf-8") as file:
        data = json.load(file)
        produtos = data.get("produtos", [])
        pedidos = data.get("pedidos", [])

# Salva as informações
def save_data():
    data = {
        "produtos": produtos,
        "pedidos": pedidos
    }
    
    with open(DATA_FILE, "w", encoding="utf-8") as file:
        json.dump(data, file, indent=4, ensure_ascii=False)

# Adiciona produtos novos
def register_product():
    print("\n Registre um produto ")
    codigo = input("Insira o código do produto: ")

    if find_product_by_code(codigo) is not None:
        print("Um produto com esse código ja existe. ")
        return

    nome = input("Nome do produto: ")

# Tratamento de erro
    try:
        preco = float(input("Preço do produto: "))
        estoque = int(input("Quantidade em estoque: "))
    except ValueError:
        print("\n Preço ou quantidade inválido, tente novamente. ")
        return

    produto = {
        "codigo": codigo,
        "nome": nome,
        "preço": preco,
        "estoque": estoque
    }

    produtos.append(produto)
    save_data()

    print("Produto cadastrado com sucesso!")

# Mostra todos os produtos cadastrados
def list_products():
    if len(produtos) == 0:
        print ("Nenhum produto cadastrado. ")
        return
    
    print("\n Produtos cadastrados ")
    for produto in produtos:
        print(f"Código: {produto['codigo']}")
        print(f"Nome: {produto['nome']}")
        print(f"Preço: R$ {produto['preço']:.2f}")
        print(f"Estoque: {produto['estoque']}")
        print("-" * 30)

# Procura os produtos já existentes
def find_product_by_code(codigo):
    for produto in produtos:
        if produto["codigo"] == codigo:
            return produto
    return None

# Faz o pedido do cliente
def make_order():
    if len(produtos) == 0:
        print("Nenhum produto cadastrado.")
        return

    cliente_nome = input("\n Nome do cliente: ")

    list_products()

    codigo = input("Digite o código do produto: ")
    produto = find_product_by_code(codigo)

    if produto is None:
        print("\n Produto não existe.")
        return

# Tratamento de erro denovo 
    try:
        quantidade = int(input("Quantidade desejada: "))
    except ValueError:
        print("\n Quantidade inválida, tente novamete. ")
        return

    if quantidade <= 0:
        print("Quantidade inválida.")
        return

    if quantidade > produto["estoque"]:
        print("Estoque insuficiente.")
        return

    # Caucula o preço a pagar
    total = quantidade * produto["preço"]

    produto["estoque"] -= quantidade

    pedido = {
        "cliente_nome": cliente_nome,
        "produto_codigo": produto["codigo"],
        "produto_nome": produto["nome"],
        "quantidade": quantidade,
        "total": total
    }

    pedidos.append(pedido)
    save_data()

    print("Pedido realizado com sucesso ")
    print(f"Total: R$ {total:.2f}")

# Mostra todos os pedidos feitos
def list_orders():
    if len(pedidos) == 0:
        print("Nenhum pedido realizado ")
        return
    
    print("\n Pedidos:" )
    for pedido in pedidos:
        print(f"Cliente: {pedido['cliente_nome']}")
        print(f"Produto: {pedido['produto_nome']}")
        print(f"Quantidade: {pedido['quantidade']}")
        print(f"Total: R$ {pedido['total']:.2f}")
        print("-" * 30)

# extra 1: muda o preço do produto
def alter_product_price():
    codigo = input ("\n Digite o código do produto para mudar o preço: ")
    produto = find_product_by_code(codigo)

    if produto is None:
        print("O produto não existe.")
        return

    # tratamento de erro
    try:
        novo_preco = float(input("Digite o novo preço: "))
    except ValueError:
        print("Preço inválido, tente novamente.")
        return

    produto["preço"] = novo_preco
    save_data()
    print("Preço do produto atualizado.")

# extra 2: remove os produtos
def remove_product():
    codigo = input("\n Digite o código do produto para removê-lo: ")
    produto = find_product_by_code(codigo)

    if produto is None:
        print("O produto não existe.")
        return

    produtos.remove(produto)
    save_data()
    print("\n Produto removido com sucesso.")

# extra 3: pesquisar produto por nome
def search_product_by_name():
    nome = input("\n Digite o nome do produto: ")
    encontrados = [produto for produto in produtos if nome.lower() in produto["nome"].lower()]

    if len(encontrados) == 0:
        print("Não existe um produto com esse nome.")
        return

    print("\n Produtos encontrados:")
    for produto in encontrados:
        print(f"Código: {produto['codigo']}")
        print(f"Nome: {produto['nome']}")
        print(f"Preço: R$ {produto['preço']:.2f}")
        print(f"Estoque: {produto['estoque']}")
        print("-" * 30)

# extra 4: relatório de vendas
def sales_report():
    if len(pedidos) == 0:
        print("Nenhuma venda realizada.")
        return

    print("\n Relatório de Vendas:")
    for pedido in pedidos:
        print(f"Cliente: {pedido['cliente_nome']}")
        print(f"Produto: {pedido['produto_nome']}")
        print(f"Quantidade: {pedido['quantidade']}")
        print(f"Total: R$ {pedido['total']:.2f}")
        print("-" * 30)

# Texto do menu
def show_menu():
    print("\n Sistema Lanchonete \n")
    print("1 - Cadastrar produto")
    print("2 - Ver produtos")
    print("3 - Fazer pedido")
    print("4 - Ver pedidos realizados")
    print("5 - Mudar preço do produto")
    print("6 - Remover produto")
    print("7 - Pesquisar produto por nome")
    print("8 - Relatório de vendas")
    print("0 - Sair")

def main():
    load_data()

    # Le oque o usuário digitou no menu 
    while True:
        show_menu()
        opcao = input("\n escolha uma opção ")

        #'match case' no lugar de 'if' para melhor leitura do código
        match opcao:
            case '1':
                register_product()
            case '2':
                list_products()
            case '3':
                make_order()
            case '4':
                list_orders()
            case '5':
                alter_product_price()
            case '6':
                remove_product()
            case '7':
                search_product_by_name()
            case '8':
                sales_report()
            case '0':
                save_data()
                print("\n Sistema encerrado, até a próxima. ")
                break
            case _:
                print ("opção inválida, tente novamente ")

main()