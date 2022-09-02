flag = True

while True:
    while True:
        nota1 = float(input(''))

        if nota1 >= 0 and nota1 <= 10:
            break
        print("nota invalida")

    while True:
        nota2 = float(input(''))

        if nota2 >= 0 and nota2 <= 10:
            break
        print("nota invalida")

    media = (nota1 + nota2) / 2
    print(f"media = {media:.2f}")

    while True:
        x = int(input('novo calculo (1-sim 2-nao)\n'))

        if x == 1:
            break
        elif x == 2:
            flag = False
            break
    
    if flag == False:
        break
