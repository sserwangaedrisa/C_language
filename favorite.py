import csv

with open("favorites.csv", "r") as file:
    # currentRow = csv.reader(file)
    # next(currentRow)
    # for row in currentRow:
    #     print(row[1])
    # bellow is the modification of the above code wc introduces the dict datatype in the code
    currentRow = csv.DictReader(file)
    for row in currentRow:
        print(row["language"])



 