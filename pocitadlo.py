c=0
for i in range(10):
     a = int(input("zadej cislo:"))
     if a < 0:
         c=c+1
print("zapornych: ",c)