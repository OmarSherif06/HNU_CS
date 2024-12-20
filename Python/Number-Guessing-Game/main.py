import random

number = random.randint(1, 10)

guess = -1

while (guess != number):
    guess = int(input("Enter guess (1-10): "))

    if guess == number:
        break

print("Correct! The number was", number)