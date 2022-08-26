n1 = 5432  # int
n2 = list(str(n1)[::-1])  # list
n3 = ''.join(n2)  # str

# print(n1 + int(n3))  # int

n4 = int(''.join(list(str(n1)[::-1])))

print(n1)
print(n4)
print(n1 + n4)