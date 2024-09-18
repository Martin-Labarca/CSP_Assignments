def main():
    income = float(input("Enter your monthly income: $"))

    rent = float(input("How much is your rent cost: $"))
    utilities = float(input("How much are your utilities cost: $"))
    groceries = float(input("How much are your groceries cost: $"))
    transportation = float(input("How much is your transportation cost: $"))

    total_expenses = rent + utilities + groceries + transportation

    savings = income * 0.20
    remaining_amount = income - total_expenses - savings

    print("\nFinancial Summary:")
    print(f"Monthly Income: ${income:.2f}")
    print(f"Total Expenses: ${total_expenses:.2f}")
    print(f"Suggested Savings (20% of Income): ${savings:.2f}")
    print(f"Amount Left to Spend: ${remaining_amount:.2f}")

    rent_percentage = (rent / income) * 100
    utilities_percentage = (utilities / income) * 100
    groceries_percentage = (groceries / income) * 100
    transportation_percentage = (transportation / income) * 100
    savings_percentage = (savings / income) * 100

    print(f"\nPercentage of Income:")
    print(f"Rent/Mortgage: {rent_percentage:.2f}%")
    print(f"Utilities: {utilities_percentage:.2f}%")
    print(f"Groceries: {groceries_percentage:.2f}%")
    print(f"Transportation: {transportation_percentage:.2f}%")
    print(f"Savings: {savings_percentage:.2f}%")

if __name__ == "__main__":
    main()