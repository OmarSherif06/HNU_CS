mark = int(input("Enter mark (0-100): "))

if mark >= 90 and mark <= 100:
    print("A")
elif mark >= 80 and mark <= 89:
    print("B")
elif mark >= 70 and mark <= 79:
    print("C")
elif mark >= 60 and mark <= 69:
    print("D")
elif mark <= 60:
    print("F")
else:
    print("Invalid mark")