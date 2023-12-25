# TODO
import re
visa_regex = "^4[0-9]{12}(?:[0-9]{3})?$"
master_regex = "^5[1-5][0-9]{14}|^(222[1-9]|22[3-9]\\d|2[3-6]\\d{2}|27[0-1]\\d|2720)[0-9]{12}$"
amex_regex = "^3[47][0-9]{13}$"

credit_card = input("Enter Credit Card Number: ")

compile_visa_regex = re.compile(visa_regex)
compile_master_regex = re.compile(master_regex)
compile_amex_regex = re.compile(amex_regex)


def validateCreditCard():
    if re.search(compile_visa_regex, credit_card):
        print("VISA")
    elif re.search(compile_master_regex, credit_card):
        print("MASTER")
    elif re.search(compile_amex_regex, credit_card):
        print("AMEX")
    else:
        print("INVALID")


validateCreditCard()
