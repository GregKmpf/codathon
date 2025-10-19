N, S = map(int, input().split())
#printar o menor valor de saldo
#menor valor tem que atualizar desde o principio

menorvalor = S
for i in range(N):
    aux = int(input())
    S += aux
    if(S<menorvalor):
        menorvalor = S
    
print(menorvalor)