'''
* (Converted exercice in python)
* Date: 13/08/2026
* Description: Reads several grades and calculates the average among them.
'''

sum = 0
quantity = 0
grade = float(input("Enter a score between 0 and 10: "))

#read all the values
while (grade >= 0 and grade <= 10):
    sum = sum + grade
    quantity = quantity + 1

    grade = float(input("Enter a score between 0 and 10: "))

#calculates the average
if (quantity > 0):
    print(f"The average grade is: {sum / quantity}")

# if the number is not between 0 and 10
else:
    print("No valid grade was entered.")