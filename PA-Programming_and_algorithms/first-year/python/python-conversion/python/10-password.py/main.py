'''
* (Converted exercice in python)
* Date: 13/08/2026
* Description: Reads a password and verifies if it is correct.
'''

rightpass = 1234
attempt = 1
attemptlim = 3

pass = int(input("Enter a password: "))

#makes the attempts
while pass != rightpass and attempt < attemptlim:
    print("Incorrect password.")
    attempt += 1
    pass = int(input("Enter a password: "))
    
# if the pasword is right
if pass == rightpass:
    print("Access granted.")

# if the password is wrong
else:
    print("Incorrect password.")