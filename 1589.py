#raio e diametro

#metade da soma dos seus diametros, 
#raio é a distância do centro de um círculo até sua extremidade, enquanto o diâmetro é a distância entre dois pontos opostos da circunferência, passando pelo centro
#diâmetro é sempre o dobro do raio (D = 2r), e o raio é sempre a metade do diâmetro (r = D/2). 

#

n = int(input())

for i in range(n):
    r1,r2 = map(int, input().split())
    result = ((r1*2) / 2) + ((r2*2) / 2)
    resultInt = int(result)
    print(resultInt)