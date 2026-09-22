'''
* (Converted exercice in python)
* Date: 13/08/2026
* Description: Reads a number and calculates whether it is prime.
'''

num = int(input("Write a number: "))
div = 1
num_div = 0

if (num > 0):

    # calculates if the number is prime
    while (div <= num):
        if (num % div == 0):
            num_div = num_div + 1

        div = div + 1

    if (num_div == 2):
        print("The number is prime.")

    else:
        print("The number is not prime.")

else:
    print("Invalid number.")
