import csv

with open("favorites.csv", "r") as file:
    currentRow = csv.reader(file)
    next(currentRow)
    for row in currentRow:
        print(row[1])

 