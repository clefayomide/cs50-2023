from pyfiglet import Figlet
import sys

font = Figlet()
try:
    if len(sys.argv[1:]) == 0:
        text = input("Enter text: ")
        font.setFont(font='slant')
        print(f"{font.renderText(text)}")

    else:
        if sys.argv[1] == '-f' or sys.argv[1] == '--font':
            text = input("Enter text: ")
            font.setFont(font=sys.argv[2])
            print(f"{font.renderText(text)}")
        else:
            sys.exit("invalid argument")

except:
    sys.exit("invalid argument")
