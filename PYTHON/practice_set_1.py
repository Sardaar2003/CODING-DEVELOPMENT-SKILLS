import math
for i in range(1, (10**3)+1):
    value = str(math.factorial(i))
    # print(value)
    if (value.count("0") == 3 and value[-3:] == '0'*3):
        print(i)
        break
