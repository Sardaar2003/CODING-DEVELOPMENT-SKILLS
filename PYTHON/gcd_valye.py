import math
number = int(input())
for i in range(number):
    if (math.gcd(i, number) == 1):
        print(i)
