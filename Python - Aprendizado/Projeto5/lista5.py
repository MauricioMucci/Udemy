"""
TESTE

total = 0


def incrementa1():
    global total
    total += 1
    return total


def incrementa2():
    total = 1
    total += 1
    return total


def incrementa3(total=0):
    total += 1
    return total


def main():
    print(incrementa1())
    print(incrementa1())
    print(incrementa1())

    print("-------------------------------------------")

    print(incrementa2())
    print(incrementa2())
    print(incrementa2())

    print("-------------------------------------------")

    print(incrementa3())
    print(incrementa3(2))
    print(incrementa3())


main()
"""


from math import sqrt
import math


def questao_um(num):
    return num * 2


def questao_dois(dia, mes, ano):
    meses = {
        1: "Janeiro",
        2: "Fevereiro",
        3: "Março",
        4: "Abril",
        5: "Maio",
        6: "Junho",
        7: "Julho",
        8: "Agosto",
        9: "Setembro",
        10: "Outubro",
        11: "Novembro",
        12: "Dezembro"
    }
    while dia < 1 or dia > 31:
        dia = int(input("\nDigite novamente o dia: "))

    mes = meses.get(mes, "ERROR")
    return f"{dia} de {mes} de {ano}"


def questao_tres(num):
    if num > 0:
        return 1
    elif num == 0:
        return 0
    return -1


def questao_quatro(num):
    if num >= 0 and int(math.sqrt(num)) ** 2 == num:
        return True
    return False


def main():
    # Questao 1
    # inteiro = int(input("\nDigite um inteiro: "))
    # print(f"O dobro de {inteiro} e {questao_um(inteiro)}")

    # Questao 2
    # print(questao_dois(int(input("\nDigite o dia: ")), int(
    #    input("\nDigite o mes: ")), int(input("\nDigite o ano: "))))

    # Questao 3
    # res = questao_tres(float(input("\nDigite um numero: ")))
    # if res == 1:
    #    print("O numero e positivo")
    # elif res == -1:
    #    print("O numero e negativo")
    # else:
    #    print("O numero e 0")

    # Questao 4
    booleano = questao_quatro(int(input("\nDigite um inteiro: ")))
    if booleano:
        print("Quadrado Perfeito")
    else:
        print("Quadrado Nao Perfeito")

    # questao_cinco()
    # questao_seis()
    # questao_sete()
    # questao_oito()
    # questao_nove()
    # questao_dez()
    # questao_onze()
    # questao_doze()
    # questao_treze()
    # questao_quatorze()
    # questao_quinze()
    # questao_dezeseis()
    # questao_dezesete()
    # questao_dezoito()
    # questao_dezenove()
    # questao_vinte()
    # questao_vinte_um()
    # questao_vinte_dois()
    # questao_vinte_tres()
    # questao_vinte_quatro()
    # questao_vinte_cinco()


main()
