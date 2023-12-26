from math import ceil
text = input("Enter text: ")


def calc_letter():
    count = 0
    for letter in text:
        if letter.isalnum():
            count += 1
    return count


def calc_word():
    count = 0
    for letter in text:
        if letter == " ":
            count += 1
    return count


def calc_sentence():
    count = 0
    for letter in text:
        if letter == '.' or letter == '!' or letter == '?':
            count += 1
    return count + 1


letter_count = calc_letter()
word_count = calc_word()
sentence_count = calc_sentence()


def calc_grade():
    L = (letter_count / word_count) * 100
    S = (sentence_count / word_count) * 100
    index = 0.0588 * L - 0.296 * S - 15.8
    return ceil(index)


if calc_grade() >= 16:
    print("Grade 16+")
elif calc_grade() < 1:
    print("Before Grade 1")
else:
    print(f"Grade {calc_grade()}")
