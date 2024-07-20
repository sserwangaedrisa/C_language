import csv
from collections import Counter

with open("favorites.csv", "r") as file:
    # currentRow = csv.reader(file)
    # next(currentRow)
    # for row in currentRow:
    #     print(row[1])

    # bellow is the modification of the above code wc introduces the dict datatype in the code
    # currentRow = csv.DictReader(file)
    # for row in currentRow:
    #     print(row["language"])

    # COUNTING THE LANGUAGES AND THEIR VOTES
#     currentRow = csv.DictReader(file)
#     scratch, python, c = 0, 0, 0
#     for row in currentRow:
#         lang = row["language"]
#         if lang == 'Scratch':
#             scratch += 1
#         elif lang == 'Python':
#             python += 1
#         elif lang == 'C':
#             c += 1


# print(f"Scratch: {scratch}")
# print(f"Python: {python}")
# print(f"C: {c}")

    # SIMPLIFYING THE CODE WITH THE USE OF ONE DICT TO TRACK MORE THINGS 

    # currentRow = csv.DictReader(file)
    # count = {}
    
    # for row in currentRow:
    #     favorite = row['language']
    #     if favorite in count:
    #         count[favorite] += 1
    #     else:
    #         count[favorite] = 1

    # for favorite in count:
    #     print(f"{favorite}: {count[favorite]}")

    # USING COUNTER FUNCTION
    currentRow = csv.DictReader(file)
    counts = Counter()
    for row in currentRow:
        favorite = row['language']
        counts[favorite] += 1

for item in counts:
    print(f"{item}: {counts[item]}")

print (counts)