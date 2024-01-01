import sys
from random import randint

if len(sys.argv[1:]) != 2:
    sys.exit("Usage: python guess.py startRange:int endRange:int")

count = 0
max = 6
startRange = int(sys.argv[1])
endRange = int(sys.argv[2])
randomInt = randint(startRange, endRange)
halfRandomInt = randomInt / 2

while count != max:
    try:
        userGuess = int(
            input(f"Enter a number within the range of {sys.argv[1]} and {sys.argv[2]}: "))
        count += 1
        if userGuess == randomInt:
            print("You guessed right")
            break
        else:
            if count != max:
                print(f"You have {max - count} trial left.", end=" ")
                if userGuess < halfRandomInt:
                    print("Your guess is too low")
                elif userGuess > halfRandomInt and userGuess != randint:
                    print("Your guess is above average, you're close!!")
            else:
                print(f"Time out!, Answer is {randomInt}")
                break

    except:
        print("An integer in required")
