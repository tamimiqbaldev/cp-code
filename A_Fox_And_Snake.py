row, column = map(int, input().split())

for i in range(1, row+1, 1):
    if i%2!=0:
        for _ in range (column):
            print("#", end="")
        print("")
    else:
        if i%4!=0:
            for i in range (column-1):
                print(".", end="")
            print("#")
        else:
            print("#", end="")
            for i in range (column-1):
                print(".", end="")
            print("")


