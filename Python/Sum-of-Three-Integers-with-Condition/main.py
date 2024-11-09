number_1 = int(input("Enter first number: "))
number_2 = int(input("Enter second number: "))
number_3 = int(input("Enter third number: "))

if number_1 == number_2 or number_2 == number_3 or number_1 == number_3:
    print(0)
else:
    sum = number_1 + number_2 + number_3
    print(sum)