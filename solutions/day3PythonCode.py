# str = "1+3+2"
str = input()
 
k = str.split("+")
for i in range(len(k)):
    k[i] = int(k[i])
k.sort()
# print(k)
for i in range(len(k)-1):
    print(k[i], end="+")
print(k[len(k)-1], end="")