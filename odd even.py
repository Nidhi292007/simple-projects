odd=set(range(1,10,2))
prime=set()
for i in range(2,10):
    for j in range(2,i):
        if(i%j==0):
            break
    else:
            prime.add(i)
print("odd number",odd)
print("prime numbers",prime)
