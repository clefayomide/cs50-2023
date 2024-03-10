greeting = input("Enter greeting: ").lstrip()
greetings_to_capitalized = greeting.capitalize()
find_hello = greetings_to_capitalized.find("Hello")

if find_hello == 0:
    print("$0")
elif greetings_to_capitalized[0] == 'H':
    print("$20")
else:
    print("$100")
