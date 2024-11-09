number_1 = int(input("Enter first number: "))
number_2 = int(input("Enter second number: "))
number_3 = int(input("Enter third number: "))

if number_1 > number_2 and number_1 > number_3:
    print(number_1)
elif number_2 > number_3:
    print(number_2)
else:
    print(number_3)