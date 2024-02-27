
# create a dict (not key/value pair. output :{"hello"})
# word = set()

# add value to dict
# word.add("hello")
# word.add("hello")

# get user input
# answer = input("what is your name: ")

# print value
# print(f"hello, {word}")

# function
# def showGreeting (name: str):
#     if name.lower() == "alex":
#         print("This must be Alex")
#     elif name.lower() == "john":
#         print("This must be John")
#     else:
#         print("Can't recognize name")

# showGreeting(answer)

# variables
# number = 10
# print(number + 2)

# loops
# using while loop
# i = 0
# word= "TESTER"
# maxCount = len(word)
# while i < maxCount:
#     print(word[i])
#     i = i + 1

# using for loop
# for i in range(maxCount):
#  print(word[i])

# for i in "TESTER":
#  print(word[i])

# data types
# str, int, float

# data type conversion
# str to int ---> int(str)

# handling floating point impression
# x = int(input("x: "))
# y = int(input("y: "))
# z = x / y
# print(f"{z:.2f}")

# get user input
# name = input("what is your name?: ")
# print(f"Hello, {name}")

# conditional
# age = int(input("How old are you?: "))
# if age >= 18:
#     print("You are an adult")
# else:
#     print("You are a minor")

# declaring and redeclaring variables
# count = 2
# print(count)
# count += 2
# print(count)

# loops
# for loop
# lists = ["Alex", "Hunter", "Dave", "Santa", "Cross", "Alexis"]
# for list in lists:
#     print(list)

# while loop
# count = 0
# while (count <= 3):
#     print(f"day {count}")
#     count += 1

# recursion with loop

# def counter(count):
#     if (count == 0):
#         return "Done"
#     print(count)
#     counter(count - 1)


# counter(10)


# funtions and scope
# def sayMeow():
#     print("Meow")


# def callFunc():
#     for i in range(2):
#         name = "Alex"
#         sayMeow()
#     print(name)


# callFunc()

# try except else

# def add():
#     while True:
#         try:
#             numOne = int(input("Enter a number: "))
#             numTwo = int(input("Enter a number: "))
#             print(numOne + numTwo)
#             break
#         except:
#             print("Invalid value detected")


# add()

# Lists
# scores = []

# for i in range(2):
#     try:
#         score = int(input("Enter a score: "))
#         scores.append(score)
#     except:
#         print("Not an integer")
# print(f"{(sum(scores) / len(scores)):.0f}")

# command line arguments
# from sys import argv

# if len(argv) > 1:
#     arguments = ""

#     for arg in argv[1:]:
#         arguments += arg + " "
#     print(f"hello {arguments}")
# else:
#     print("hello world!")

# loop through command line arg

# from sys import argv

# for arg in argv[1:]:
#     print(f"hello, {arg}")

# dictionary
# directory = {'alex': '18', 'bob': "25"}
# name = input("Enter search: ").lower()
# if name in directory:
#     print(directory[name])

# swap variables
# x = 2
# y = 4
# print(f"x is {x}, y is {y}")
# x, y = y, x
# print(f"x is {x}, y is {y}")

# working wit files
# import csv

# file = open("user.csv", "a")

# name = input("Name: ")
# phone = input("Number: ")

# writer = csv.DictWriter(file, fieldnames=["name", "phone"])

# writer.writerow({"name": name, "phone": phone})

# file.close()

# crash course
# guest_lists = ["alex", "hunter", "beckham", "david"]

# for guest in guest_lists:
#     print(f"you are invited @{guest.title()}")

# print(guest_lists[0])

# del guest_lists[0]

# guest_lists.insert(0, "ben")

# for guest in guest_lists:
#     print(f"you are invited @{guest.title()}")

# food = ["rice"]
# print(food)

# food2 = food[:]
# food2.append("beans")


# print(food2)
# print(food)
# print(food == food2)

# def print_siblings(**siblings):
#     print(siblings)
#     for sibling in siblings:
#         print(siblings[sibling])


# print_siblings(firstName="Alex", lastName="Hunter")

# import arithmetic

# print(arithmetic.add("2", "2"))
