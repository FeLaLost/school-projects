'''
* (Converted exercice in python)
* Date: 10/08/2026
* Description: Reads two integers and states which one is the larger one or if they are equal.
'''

num1 = int (input("Write the first number: "))
num2 = int (input("Write the second number: "))

# if the first number is larger
if num1 > num2:
    print ("The number ", num1 ,"is larger than ", num2)

# if the second number is larger
elif num1 < num2:
    print ("The number " , num1 , "is smaller than " , num2)

# if both numbers have the same value
else:
    print("The numbers have the same value. ")