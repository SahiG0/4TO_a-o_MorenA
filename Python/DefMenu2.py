import math
menu = '''
*********************************************
**              1- Rectangulo              **
***             2- Triangulo              ***
****            3- Circulo               ****
*****           4- Salir                *****
*********************************************
'''
def Rectangulo():
    Altura=float(input("Ingrese la altura del rectangulo: "))
    Base=float
    Area= Altura*Base 
    print("El area del rectangulo es: ", Area)

def Triangulo():
    Altura=float(input("Ingrese la altura del triangulo: "))
    Base=float
    Area= Altura*Base 
    print("El area del triangulo es: ", Area)

def Circulo():
    Radio=float(input("ingrese el radio del circulo"))
    Area= math.pi * Radio **2
    print("El area del triangulo es: ", Area)

def salit():
    print("fin del programa")
    exit


while True:
    print(menu)
    opcion = int(input("ingrese una opcion: "))
    if opcion == 1:
        Rectangulo()
    elif opcion == 2:
        Triangulo()
    elif opcion == 3:
        Circulo()
    elif opcion == 4:
        break



print("fin del programa")
    







