#Questao 1

for num in range(3,18,3):
    print(num, end=" ")
print()
print()

#Questao 2

for _ in range(3):
    for num in range(1,11):
        print(num, end=" ")
    print()

print()

aux = 0
while aux < 3:
    num = 1
    while num <= 10:
        print(num, end=" ")
        num = num + 1
    print()
    aux = aux + 1

#Questao 3

print()

aux = 10
while aux >= 0:
    print(aux, end=" ")
    aux = aux - 1
print()

#Questao 4

print()

for num in range(0,110,10):
    print(num, end=" ")
print()

#Questao 5

print()

aux = 0
soma = 0
while aux < 10:
    num = int(input("Digite um inteiro: "))
    soma += num
    aux += 1
print(f"\nA soma e: {soma}\n")

soma = 0

for _ in range(10):
    num = int(input("Digite um inteiro: "))
    soma += num
print(f"\nA soma e: {soma}\n")

#Questao 6

soma = 0
for _ in range(10):
    num = int(input("Digite um inteiro: "))
    soma += num
media = soma/10
print(f"\nA media e: {round(media,2)}\n")

#Questao 7

soma = 0
for _ in range(10):
    num = int(input("Digite um inteiro: "))
    while num < 0:
        num = int(input("Digite novamente: "))
    soma += num
media = soma/10
print(f"\nA media e: {round(media,2)}\n")

#Questao 8

for i in range(10):
    num = int(input("Digite um inteiro: "))
    if i == 0:
        menor = num
        maior = num
    if num > maior:
        maior = num
    if num < menor:
        menor = num
print(f"Maior = {maior} || Menor = {menor}")

#Questao 9

num = int(input("Digite um inteiro: "))
for i in range(1,num*2,2):
    print(i, end=" ")
print()

i = 1
while num > 0:
    print(i, end=" ")
    i += 2
    num -= 1
print()

#Questao 10

soma = 0
for num in range(0,50,2):
    soma += num
print(soma)

#Questao 19

num = int(input("Digite um inteiro entre 100-999: "))

while num < 100 or num > 999:
    print("\n\t[ Tente novamente ]")
    num = int(input("Digite um inteiro entre 100-999: "))

resultado = 0
while num != 0:
    resultado += num % 10
    num = int(num / 10)
print(resultado)

#Questao 20

print("\t[ Digite 1000 para sair ]")
num = int(input("Digite um inteiro: "))
i = 1
j = 0
while num != 1000:
    print("\t[ Digite 1000 para sair ]")
    num = int(input("Digite um inteiro: "))
    i += 1
    if num % 2 == 0:
        j += 1

if i != 1:
    print(f"{i} valores digitados!\n{j} valores sao pares!")

#Questao 21

a, b = int(input("Digite o inicio do intervalo: ")), int(input("Digite o fim do intervalo: "))

soma = 0
multiplicacao = 1
for num in range(a,b + 1):
    if num % 2 == 0:
        soma += num
    else:
        multiplicacao *= num

print(f"Soma = {soma}\nMultiplicacao = {multiplicacao}")

#Questao 22

i = 0
soma = 0
while True:
    nota = float(input("Digite uma nota entre 10-20: "))
    if nota < 10 or nota > 20:
        break
    soma += nota
    i += 1
media = soma / i
print(f"Media = {round(media,2)}")

#Questao 23

num = int(input("Digite um inteiro: "))
for i in range(1,num + 1):
    if num % i == 0:
        print(i, end=" ")
print()

#Questao 24

num = int(input("Digite um inteiro: "))
soma = 0
for i in range(1,num):
    if num % i == 0:
        soma += i
print(f"Soma = {soma}")

#Questao 26

num = int(input("Digite um inteiro: "))
while True:
    if num % 11 == 0 and num % 13 == 0 and num % 17 == 0:
        print(num)
        break
    num += 1

#Questao 27

num = int(input("Digite a serie harmonica: "))
h = 0
for i in range(1,num + 1):
    h += 1 / i
print(f"O resultado e: {round(h,3)}")

#Questao 28

def fac(a):
    if a == 1:
        return a
    return a * fac(a - 1)

num = int(input("Digite a serie: "))
e = 0
for i in range(1,num + 1):
    e += 1 / fac(i)
print(f"O resultado e: {round(e,3)}")

#Questao 53

num = int(input("Digite o numero de Floyd: "))
aux = 1
j = 1
for _ in range(num):
    for _ in range(j):
        print(aux, end=" ")
        aux +=1
    print()
    j += 1
