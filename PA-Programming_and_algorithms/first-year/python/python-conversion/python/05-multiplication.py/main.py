'''
* (Converted exercice in python)
* Date: 11/08/2026
* Description: Reads a number from 1 to 10 and displays the multiplication table.
'''

i = 1
num = int(input("Write a number from 1 to 10: \n "))

if num > 0 and num <= 10:
    while i <= 10:
        # makes the multiplication
        res = num * i
        print(num, " x ", i, " = ", res)
        i += 1

else: 
    print("Invalid number. ")