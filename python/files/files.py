import csv

with open('industry.csv', mode="r", newline='') as csvFile:
    read = csv.DictReader(csvFile)
    for row in read:
        print(f"Industry: {row['Industry']}")
        
