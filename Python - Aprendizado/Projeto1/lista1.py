#Questao 1 e 31
inteiro = int(input("Digite um inteiro: "))
print(f"\nNumero inteiro e: {inteiro}\nSeu antecessor e: {inteiro - 1}\nSeu sucessor e: {inteiro + 1}\n")

#Questao 2, 4 e 5
real = float(input("Digite um numero real: "))
print(f"Numero real e: {real}")
print(f"{real}^2 = {real**2}")
print(f"{real}/5 = {real/5}\n")

#Questao 2 e 28
x, y, z = int(input("Digite um inteiro: ")), int(input("Digite um inteiro: ")), int(input("Digite um inteiro: "))
print(f"Soma = {x + y + z}")
print(f"{x}^2 + {y}^2 + {z}^2 = {x**2 + y**2 + z**2}")

#Questao 6 
graus_celsius = float(input("\nQual a temperatura?\nR: "))
graus_fahrenheit = graus_celsius * (9/5) + 32
print(f"{graus_celsius}C = {graus_fahrenheit}F")

#Questao 29
nota1, nota2, nota3 = float(input("\nDigite uma nota: ")), float(input("Digite uma nota: ")), float(input("Digite uma nota: "))
nota_final = (nota1 + nota2 + nota3) / 3
print(f"A nota final e {round(nota_final, 2)}")

#Questao 37 e 38
valor = float(input("\nQual o valor a sofrer um aumento/desconto?\nR: "))
print(f"Desconto: {valor * 0.88}\nAumento: {valor * 1.25}")

#Questao 39
print(f"\nPremio = [R$780.000,00]\nPrimeiro jogador: R${780000 * 0.46}\nSegundo jogador: R${780000 * 0.32}\nTerceiro jogador: R${780000 * 0.22}")

#Questao 46
numero = input("\nDigite um numero: ")
print(f"Numero lido: {numero}\nNumero gerado: {numero[::-1]}")


#Questao 48
segundos = int(input("\nDigite o valor em segundos: "))

horas = int(segundos/3600)
segundos = segundos%3600
minutos = int(segundos/60)
segundos = segundos%60

print(f"{horas}:{minutos}:{segundos}")
