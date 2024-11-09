balance = int(input("Enter balance: "))
withdraw = int(input("Enter amount to withdraw: "))

if withdraw % 10 != 0:
    print("withdraw must be a multiple of 10")
else:
    if withdraw > balance:
        print("Insufficient funds")
    else:
        balance -= withdraw
        print("Withdrawn successfully, new balance:", balance) 