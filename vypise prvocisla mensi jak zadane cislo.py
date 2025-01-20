c=0
prvocisla = []
a = int(input("zadej cislo: "))
for j in range(1,a + 1):
    print(j)
    c=0
    for i in range(j):
        if j%(i+1) == 0:
            c = c+1
    if c == 2:
        prvocisla.append(j)
        
print(prvocisla)

