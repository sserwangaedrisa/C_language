from cs50 import SQL

favorite = input("Favorite:")
# openning the database file in python 
db = SQL("sqlite:///favorites.db")
# executing sql queries in python.
row = db.execute("select count(*) as count from favorites where problem =?", favorite)
row = row[0]

# Printing the output 
print(row["count"])