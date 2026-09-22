'''
* (Converted exercice in python)
* Date: 13/08/2026
* Description: Reads several numbers and shows how many positive, negative, and zero values there are.
'''

count = 1
positive = 0
negative = 0
zero = 0

while (count <= 10):
    num = int(input("Write a number: "))

    # if the number is positive
    if (num > 0):
        positive = positive + 1

    # if the number is negative
    elif (num < 0):
        negative = negative + 1

    # if the number is zero
    else:
        zero = zero + 1

    contagem = contagem + 1


print(f"Positive numbers: {positive}")
print(f"Negative numbers: {negative}")
print(f"Zeros: {zero}")