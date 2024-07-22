from cs50 import SQL

favorite = input("Favorite:")
db = SQL("sqlite:///favorites.db")
row = db.execute("select count(*) as count from favorites where problem =?", favorite)
row = row[0]

# print(f('Your favorite problem has: ', {row} 'votes'))
print(row["count"])