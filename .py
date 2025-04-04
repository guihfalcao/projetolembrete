salario = float(input("digite seu salario desse mes:"))
agua = input("conta de agua deste mes:")
luz= input ("conta de luz deste mes: ")
internet =input("conta de internet desde mes: ")
Gasto_total = float(agua)+float(luz)+float(internet)
if (salario < Gasto_total):
    print(f"você nao esta no vermelho!")
else:
    print(f"você está no vermelho!")   