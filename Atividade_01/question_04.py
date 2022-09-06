x, y = input().split()

x = int(x)
y = int(y)


if (x > 1 and x < 20) and (y > x and y < 100000):
    cont = 0
    
    for i in range(1, y + 1):
        print(i, end=' ')
        cont += 1

        if (cont == x):
            print(" ")
            cont = 0
