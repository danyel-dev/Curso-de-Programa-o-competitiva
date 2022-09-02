nota1, nota2, nota3, nota4 = (float(x) for x in input().split())

media = (nota1*2+nota2*3+nota3*4+nota4*1)/10

print(f'Media: {media:.1f}')

if media >= 7.0:

    print('Aluno aprovado.')

elif media < 5.0:

    print('Aluno reprovado.')

elif media >= 5 and media < 7:

    print('Aluno em exame.')

    nota_exame = float(input(""))

    print(f'Nota do exame: {nota_exame:.1f}')

    media_final = (media + nota_exame) / 2     
    if media_final < 5.0:

        print("Aluno Reprovado.")

    else:

        print("Aluno Aprovado.")
    
    print(f"Media final: {media_final:.1f}")
