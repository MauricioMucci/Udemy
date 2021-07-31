from cmath import sqrt as sqrtc
from math import pow, sqrt

#Questao 1
num1, num2 = float(input("\nDigite o primeiro numero: ")), float(input("Digite o segundo numero: "))

if num1 < num2:
    print(f"{num1} < {num2}")
elif num1 == num2:
    print(f"{num2} = {num1}")
else:
    print(f"{num1} > {num2}")

#Questao 2
real = float(input("\nDigite um numero real: "))

if real >= 0:
    raiz1 = real ** 0.5
    raiz2 = pow(real, 0.5)
    raiz3 = sqrt(real)
    print(f"Raiz = {raiz1}, {raiz2}, {raiz3}")
else:
    raiz4 = sqrtc(real)
    print(f"Raiz = {raiz4}")

#Questao 5
inteiro = int(input("\nDigite um inteiro: "))

if inteiro % 2 == 0:
    print("Par")
else:
    print("Impar")

#Questao 11
inteiro = int(input("\nDigite um inteiro: "))
resultado = 0

if inteiro > 0:
    while inteiro > 0:
        resultado += int(inteiro % 10)
        inteiro = inteiro / 10
    print(f"Resultado: {resultado}")
else:
    print("\nNumero invalido!")

#Questao 16
def switch(opcao):
    opcoes = {
        1: "Domingo",
        2: "Segunda",
        3: "Terca",
        4: "Quarta",
        5: "Quinta",
        6: "Sexta",
        7: "Sabado",
    }
    return opcoes.get(opcao, "Opcao invalida!")

while True:
    numero = int(input("\nDigite um numero entre 1-7[Para sair digite 0]: "))
    if numero == 0:
        break
    else:
        print(f"\n{switch(numero)}")

#Questao 18

def soma():
    a, b = int(input("\nDigite um inteiro: ")), int(input("\nDigite um inteiro: "))
    print(f"\n{a} + {b} = {a + b}")

def subtracao():
    a, b = int(input("\nDigite um inteiro: ")), int(input("\nDigite um inteiro: "))
    print(f"\n{a} - {b} = {a - b}")

def multiplicacao():
    a, b = int(input("\nDigite um inteiro: ")), int(input("\nDigite um inteiro: "))
    print(f"\n{a} * {b} = {a * b}")

def divisao():
    a, b = int(input("\nDigite o numerador: ")), int(input("\nDigite o denominador: "))
    while b == 0:
        b = int(input("\nDigite o denominador: "))
    print(f"\n{a} / {b} = {a / b}")
    

while True:
    print("\n----- [ Menu ] -----")
    print("1. Soma")
    print("2. Subtracao")
    print("3. Multiplicacao")
    print("4. Divisao")
    print("5. Sair")
    opcao = int(input("Escolha: "))
    if opcao == 1:
        soma()
    elif opcao == 2:
        subtracao()
    elif opcao == 3:
        multiplicacao()
    elif opcao == 4:
        divisao()
    elif opcao == 5:
        break
    else:
        print("\n[ Opcao Invalida ]")

#Questao 19

numero = int(input("\nDigite um numero: "))

if numero % 3 == 0 and numero % 5 == 0:
    print(f"\n{numero} e divisivel por 3 e 5")
elif numero % 3 == 0:
    print(f"\n{numero} e divisivel somente por 3")
elif numero % 5 == 0:
    print(f"\n{numero} e divisivel somente por 5")
else:
    print("\nNumero indivisivel por 3 ou 5")

#Questao 41

peso, altura = float(input("\nQual o seu peso: ")), float(input("\nQual a sua altura: "))

imc = peso / (altura * altura)

if imc < 18.5:
    print("\nAbaixo do peso")
elif imc >= 18.5 and imc < 25:
    print("\nSaudavel")
elif imc >= 25.0 and imc < 30:
    print("\nPeso em excesso")
elif imc >= 30.0 and imc < 35:
    print("\nObesidade em Grau I")
elif imc >= 35.0 and imc < 40:
    print("\nObesidade em Grau II")
else:
    print("\nObesidade em Grau III")
print(f"{round(imc, 3)}")