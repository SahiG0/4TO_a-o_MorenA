print("inicio")

ancho = int(input("ancho: "))
largo = int(input("largo: "))
alto = 1

while True:
    iteraciones = int(input("cantidad de iteraciones"))
    for i in range(iteraciones):
        alto = alto + 1
        
        print(alto)
        volumen = (ancho - 2 * alto) * (largo - 2 * alto) * alto
        print/()
        

print("fin")