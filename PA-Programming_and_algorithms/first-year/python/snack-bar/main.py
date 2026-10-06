import json
import os

DATA_FILE = "lantern_snack_bar.json"

products = []
orders = []

# Load the data
def load_data():
    global products, orders

    if not os.path.exists(DATA_FILE):
       products = [] 
       orders = []
       return

    with open(DATA_FILE, "r", encoding="utf-8") as file:
        data = json.load(file)
        products = data.get("products", [])
        orders = data.get("orders", [])

# Save the data
def save_data():
    data = {
        "products": products,
        "orders": orders
    }
    
    with open(DATA_FILE, "w", encoding="utf-8") as file:
        json.dump(data, file, indent=4, ensure_ascii=False)

# Register new products
def register_product():
    print("\n Register a product ")
    code = input("Enter the product code: ")

    if find_product_by_code(code) is not None:
        print("A product with this code already exists. ")
        return

    name = input("Enter the product name: ")

# Error handling
    try:
        price = float(input("Enter the product price: "))
        stock = int(input("Enter the product stock: "))
    except ValueError:
        print("\n Invalid price or quantity, please try again. ")
        return

    product = {
        "code": code,
        "name": name,
        "price": price,
        "stock": stock
    }

    products.append(product)
    save_data()

    print("Product registered successfully!")

# Show all registered products
def list_products():
    if len(products) == 0:
        print ("No products registered. ")
        return
    
    print("\n Registered products ")
    for product in products:
        print(f"Code: {product['code']}")
        print(f"Name: {product['name']}")
        print(f"Price: R$ {product['price']:.2f}")
        print(f"Stock: {product['stock']}")
        print("-" * 30)

# Look for existing products
def find_product_by_code(code):
    for product in products:
        if product["code"] == code:
            return product
    return None

# Make a customer order
def make_order():
    if len(products) == 0:
        print("No products registered.")
        return

    customer_name = input("\n Customer name: ")

    list_products()

    code = input("Enter the product code: ")
    product = find_product_by_code(code)

    if product is None:
        print("\n Product does not exist.")
        return

# Error handling 
    try:
        quantity = int(input("Desired quantity: "))
    except ValueError:
        print("\n Invalid quantity, please try again. ")
        return

    if quantity <= 0:
        print("Invalid quantity.")
        return

    if quantity > product["stock"]:
        print("Insufficient stock.")
        return

    # Calculate the total price
    total = quantity * product["price"]

    product["stock"] -= quantity

    order = {
        "customer_name": customer_name,
        "product_code": product["code"],
        "product_name": product["name"],
        "quantity": quantity,
        "total": total
    }

    orders.append(order)
    save_data()

    print("Order placed successfully.")
    print(f"Total: R$ {total:.2f}")

# Show all placed orders
def list_orders():
    if len(orders) == 0:
        print("No orders placed.")
        return

    print("\n Orders:")
    for order in orders:
        print(f"Customer: {order['customer_name']}")
        print(f"Product: {order['product_name']}")
        print(f"Quantity: {order['quantity']}")
        print(f"Total: R$ {order['total']:.2f}")
        print("-" * 30)

# extra 1: change the price of a product
def alter_product_price():
    code = input("\n Enter the product code to change the price: ")
    product = find_product_by_code(code)

    if product is None:
        print("The product does not exist.")
        return

    # error handling
    try:
        new_price = float(input("Enter the new price: "))
    except ValueError:
        print("Invalid price, please try again.")
        return

    product["price"] = new_price
    save_data()
    print("Product price updated.")

# extra 2: remove product
def remove_product():
    code = input("\n Enter the product code to remove: ")
    product = find_product_by_code(code)

    if product is None:
        print("The product does not exist.")
        return

    products.remove(product)
    save_data()
    print("\n Product removed successfully.")

# extra 3: search product by name
def search_product_by_name():
    name = input("\n Enter the product name: ")
    found = [product for product in products if name.lower() in product["name"].lower()]

    if len(found) == 0:
        print("No product with that name exists.")
        return

    print("\n Products found:")
    for product in found:
        print(f"Code: {product['code']}")
        print(f"Name: {product['name']}")
        print(f"Price: R$ {product['price']:.2f}")
        print(f"Stock: {product['stock']}")
        print("-" * 30)

# extra 4: sales report
def sales_report():
    if len(orders) == 0:
        print("No sales recorded.")
        return

    print("\n Sales Report:")
    for order in orders:
        print(f"Customer: {order['customer_name']}")
        print(f"Product: {order['product_name']}")
        print(f"Quantity: {order['quantity']}")
        print(f"Total: R$ {order['total']:.2f}")
        print("-" * 30)

# Menu text
def show_menu():
    print("\n Snack bar system \n")
    print("1 - Register product")
    print("2 - List products")
    print("3 - Make order")
    print("4 - List orders")
    print("5 - Change product price")
    print("6 - Remove product")
    print("7 - Search product by name")
    print("8 - Sales report")
    print("0 - Exit")

def main():
    load_data()

    # Reads what the user typed in the menu
    while True:
        show_menu()
        option = input("\n choose an option: ")

        #'match case' instead 'if' for better code readability
        match option:
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
                print("\n System closed, see you next time. ")
                break
            case _:
                print ("Invalid option, please try again ")

main()