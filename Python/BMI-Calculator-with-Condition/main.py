weight = int(input("Enter weight: "))
height = float(input("Enter height (in meters): "))

BMI = weight / (height ** 2)

if BMI >= 30:
    print("Obese")
elif BMI >= 25 and BMI < 29.9:
    print("Overweight")
elif BMI >= 18.5 and BMI < 24.9:
    print("Normal")
elif BMI < 18.5:
    print("Underweight")