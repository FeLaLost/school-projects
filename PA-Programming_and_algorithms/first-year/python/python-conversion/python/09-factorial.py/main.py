'''
* (Converted exercice in python)
* Date: 13/08/2026
* Description: Reads a number and calculates its factorial.
'''

numero = int(input("Digite um numero: "))
contagem = 1
fatorial = 1

if (numero >= 0):
    while (contagem <= numero):
        # calculates the factorial
        fatorial = fatorial * contagem
        contagem = contagem + 1

    print(f"Fatorial: {fatorial}")

else:
    print("Digite outro numero.")