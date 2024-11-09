temperature = float(input("Enter temperature (in C): "))

if temperature <= 0:
    print("Freezing")
elif temperature >= 100:
    print("Boiling")
else:
    print("Normal")