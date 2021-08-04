def QuestaoUm():
    print("\t[ Questao 1 ]")
    a = [1, 0, 5, -2, -5, 7]
    soma = a[0] + a[1] + a[5]
    a[4] = 100
    print(a)
    print(f"Soma = {soma}")


def QuestaoDois():
    print("\t[ Questao 2 ]")
    array = []
    for _ in range(6):
        array.append(int(input("\nDigite um inteiro: ")))
    print(array)


def QuestaoTres():
    print("\t[ Questao 3 ]")
    array1, array2 = [], []
    for _ in range(10):
        array1.append(float(input("\nDigite um numero: ")))

    '''
    array2 = array1.copy()
    for i in range(len(array2)):
        array2[i] = array2[i] ** 2
    '''

    for i in range(len(array1)):
        array2.append(array1[i] ** 2)

    print(f"{array1}\n{array2}")


def QuestaoQuatro():
    print("\t[ Questao 4 ]")
    array = []
    for _ in range(8):
        array.append(int(input("\nDigite um inteiro: ")))

    '''
    while True:
        pos1 = int(input("\nDigite a primeira posicao: "))
        if pos1 >= 0 and pos1 < 8:
            break
    while True:
        pos2 = int(input("\nDigite a segunda posicao: "))
        if pos2 >= 0 and pos2 < 8:
            break
    '''

    pos1, pos2 = int(input("\nDigite a primeira posicao(0-8): ")
                     ), int(input("\nDigite a segunda posicao(0-8): "))
    while pos1 < 0 or pos1 > 7:
        pos1 = int(input("\nDigite novamente primeira posicao: "))
    while pos2 < 0 or pos2 > 7:
        pos2 = int(input("\nDigite novamente segunda posicao: "))
    soma = array[pos1] + array[pos2]
    print(f"{array[pos1]} + {array[pos1]} = {soma}")


def QuestaoCinco():
    print("\t[ Questao 5 ]")
    array = []
    for _ in range(10):
        array.append(int(input("\nDigite um inteiro: ")))
    counter = 0
    for num in array:
        if num % 2 == 0:
            counter += 1
    print(f"Existe {counter} numeros pares")


def QuestaoSeis():
    print("\t[ Questao 6 ]")
    array = []
    for _ in range(10):
        array.append(int(input("\nDigite um inteiro: ")))
    print(f"Maior valor = {max(array)}\nMenor valor = {min(array)}")


def QuestaoSete():
    print("\t[ Questao 7 ]")
    array = []
    for _ in range(10):
        array.append(int(input("\nDigite um inteiro: ")))
    print(
        f"Maior valor = {max(array)}\nPosicao do maior valor = {array.index(max(array))}")


def QuestaoOitoNove():
    print("\t[ Questao 8 e 9 ]")
    array = []
    for _ in range(6):
        num = int(input("\nDigite um numero par: "))
        while num % 2 != 0:
            num = int(input("\nNumeros pares apenas: "))
        array.append(num)
    array.reverse()
    print(array)
    array.reverse()
    print(array[::-1])


def QuestaoDez():
    print("\t[ Questao 10 ]")
    array = []
    for _ in range(5):
        nota = float(input("\nDigite a nota: "))
        while nota < 0 or nota > 10:
            nota = float(input("\nDigite uma nota valida: "))
        array.append(nota)
    print(f"Media geral = {sum(array)/len(array)}")


def QuestaoOnze():
    print("\t[ Questao 11 ]")
    array = []
    neg_num = 0
    pos_sum = 0
    for i in range(10):
        array.append(int(input("\nDigite um inteiro: ")))
        if array[i] >= 0:
            pos_sum += array[i]
        else:
            neg_num += 1
    print(
        f"A soma dos positivos = {pos_sum}\nA quantidade de negativos = {neg_num}")


def QuestaoDoze():
    print("\t[ Questao 12 ]")
    array = []
    for i in range(5):
        array.append(int(input("\nDigite um inteiro: ")))
    print(f"{array}\nMaior = {max(array)}\nMedia = {sum(array)/len(array)}")


def QuestaoTreze():
    print("\t[ Questao 13 ]")
    array = []
    for i in range(5):
        array.append(int(input("\nDigite um inteiro: ")))
    print(
        f"Posicao do Maior = {array.index(max(array))}\nPosicao do Menor = {array.index(min(array))}")


def QuestaoQuatorze():
    print("\t[ Questao 14 ]")
    array, array_aux = [], []
    for i in range(10):
        array.append(int(input("\nDigite um inteiro: ")))
    array_aux = array.copy()

    for i in array_aux:
        rep = array_aux.count(i)
        if rep == 1:
            array_aux.remove(i)

    array_aux.sort()
    for i in array_aux:
        rep = array_aux.count(i)
        for _ in range(rep - 1):
            array_aux.remove(i)

    print(f"Vetor original: {array}\nNumeros que se repetem: {array_aux}")


def QuestaoQuinze():
    print("\t[ Questao 15 ]")
    array, array_aux = [], []
    for i in range(10):
        array.append(int(input("\nDigite um inteiro: ")))

    for i in array:
        rep = array.count(i)
        if rep == 1:
            array_aux.append(i)
    #[1, 2, 3, 1, 1, 2, 4, 5, 4, 5]

    print(f"Vetor original: {array}\nVetor resultante: {array_aux}")


def QuestaoVinteTres():
    print("\t[ Questao 23 ]")
    conjunto1 = int(input("\nDigite um inteiro: ")), int(input("\nDigite um inteiro: ")), int(input(
        "\nDigite um inteiro: ")), int(input("\nDigite um inteiro: ")), int(input("\nDigite um inteiro: "))
    conjunto2 = int(input("\nDigite um inteiro: ")), int(input("\nDigite um inteiro: ")), int(input(
        "\nDigite um inteiro: ")), int(input("\nDigite um inteiro: ")), int(input("\nDigite um inteiro: "))

    i = 0
    soma = 0
    while i < len(conjunto1):
        soma += conjunto1[i] * conjunto2[i]
        i += 1

    print(
        f"Conjunto A = {conjunto1}\nConjunto B = {conjunto2}\nProduto escalar = {soma}")


def QuestaoVinteQuatro():
    print("\t[ Questao 24 ]")
    array = []
    for _ in range(5):
        array.append((int(input("\nDigite o id: ")),
                     float(input("\nDigite a altura: "))))

    id, altura = [], []
    for i in array:
        id.append(i[0])
        altura.append(i[1])

    for i in range(5):
        if (id[i], max(altura)) in array:
            print(
                f"Aluno #{id[i]} - Altura = {max(altura)}")
        elif (id[i], min(altura)) in array:
            print(
                f"Aluno #{id[i]} - Altura = {min(altura)}")


def QuestaoVinteCinco():
    print("\t[ Questao 25 ]")
    array = []

    i = 0
    while len(array) < 100:
        if i % 7 != 0 and i % 10 != 0:
            array.append(i)
        i += 1

    print(array)
    print(len(array))


def MatrizUm():
    array1 = []
    for _ in range(4):
        array2 = []
        for _ in range(4):
            array2.append(int(input("\nDigite um inteiro: ")))
        array1.append(array2)

    counter = 0
    for i in range(4):
        for j in range(4):
            if array1[i][j] > 10:
                counter += 1

    print(f"Matriz = {array1}\nNumeros maiores que 10 = {counter}")


def MatrizDois():
    array1 = []
    for i in range(5):
        array2 = []
        for j in range(5):
            if i == j:
                array2.append(1)
            else:
                array2.append(0)
        array1.append(array2)

    # Forma 1
    for i in array1:
        print(i)
    # Forma 2
    for i in array1:
        for j in i:
            print(j, end=" ")
        print()
    # Forma 3
    print(f"Matriz = {array1}")


def MatrizTres():
    array1 = []
    for i in range(5):
        array2 = []
        for j in range(5):
            array2.append(i*j)
        array1.append(array2)

    # Forma 1
    for i in array1:
        print(i)
    # Forma 2
    for i in array1:
        for j in i:
            print(j, end=" ")
        print()
    # Forma 3
    print(f"Matriz = {array1}")


def MatrizQuatro():
    array1 = []
    for i in range(4):
        array2 = []
        for j in range(4):
            array2.append(int(input("\nDigite um inteiro: ")))
        array1.append(array2)

    maior = array1[0][0]
    for i in range(4):
        for j in range(4):
            if array1[i][j] > maior:
                maior = array1[i][j]
    print(maior)


def MatrizCinco():
    array1 = []
    for _ in range(3):
        array2 = []
        for _ in range(3):
            array2.append(int(input("\nDigite um inteiro: ")))
        array1.append(array2)

    x = int(input("\nDigite o numero a ser procurado: "))

    for i in range(3):
        for j in range(3):
            if x == array1[i][j]:
                pos = i, j

    for i in array1:
        print(i)

    print(f"A posicao do numero: {pos}")


def MatrizSeis():
    array1 = []
    for i in range(4):
        array2 = []
        for j in range(4):
            array2.append(int(input("\nDigite um inteiro: ")))
        array1.append(array2)

    maiores = []
    for i in array1:
        maiores.append(max(i))

    for i in array1:
        print(i)

    print(f"Maiores = {maiores}")


def Main():
    ''' 
    LISTAS
    QuestaoUm()
    QuestaoDois()
    QuestaoTres()
    QuestaoQuatro()
    QuestaoCinco()
    QuestaoSeis()
    QuestaoSete()
    QuestaoOitoNove()
    QuestaoDez()
    QuestaoOnze()
    QuestaoDoze()
    QuestaoTreze()
    QuestaoQuatorze()
    QuestaoQuinze()
    QuestaoVinteCinco()

    Tuplas
    QuestaoVinteTres()
    QuestaoVinteQuatro()

    Matriz
    '''
    # MatrizUm()
    # MatrizDois()
    # MatrizTres()
    # MatrizQuatro()
    # MatrizCinco()
    MatrizSeis()


Main()
