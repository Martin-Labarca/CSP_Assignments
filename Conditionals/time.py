import time

def main():
    # Get the current local time and date
    current_time = time.localtime()
    print("Current local time and date:", time.strftime("%Y-%m-%d %H:%M:%S", current_time))

    # Ask the user for the hour in military time
    hour = int(input("Tell me the hour in military time (0-23): "))

    # Validate the input and print the appropriate greeting
    if hour < 0 or hour > 23:
        print("Invalid hour input.")
    elif hour < 12:
        print("Good Morning")
    elif hour < 18:
        print("Good Afternoon")
    else:
        print("Good Evening")

if __name__ == "__main__":
    main()