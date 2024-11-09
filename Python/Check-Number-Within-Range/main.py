number = int(input("Enter number: "))

if abs(1000 - number) <= 100 or abs(2000 - number) <= 100:
    print(True)
else:
    print(False)