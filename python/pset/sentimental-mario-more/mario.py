# TODO
from cs50 import get_int

height = get_int("Enter height: ")
while height < 1 or height > 8:
    print("invalid integer")
    height = get_int("Enter height: ")

for i in range(1,height + 1):
    print(" " * (height - i), end="")
    print("#" * i, end="")
    print("  ", end="")
    print("#" * i)




