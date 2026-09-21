'''
* (Converted exercice in python)
* Date: 11/08/2026
* Description: Calculates the sum of even numbers from 1 up to a specified number.
'''

num = int(input("Write a positive number: "))
i = 1
sum = 0

if num >= 0:
    # makes the count
    while i < num:
        i += 1
        # calculate if the number is even 
        if i % 2 == 0:
            sum += i   

    print("The sum of the even numbers is: ", sum) 

else:
    print("Invalid number. ")