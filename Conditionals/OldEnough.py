def check_eligibility(age):
    if age >= 18:
        print("You are old enough to vote, drive, and get a learner's permit.")
    elif age >= 16:
        print("You are old enough to drive and get a learner's permit.")
    elif age >= 15:
        print("You are old enough to get a learner's permit.")
    elif age >= 5:
        print("You are old enough to go to school.")
    else:
        print("You are not old enough for any of the conditions.")

user_age = int(input("Enter your age: "))
check_eligibility(user_age)