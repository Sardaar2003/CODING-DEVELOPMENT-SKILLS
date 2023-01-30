import math

testCases = int(input())
for i in range(testCases):
    string1 = str(input())
    string2 = str(input())
    length1 = len(string1)
    length2 = len(string2)
    print(string1 % string2)
    # if (length2 < length1 and length1 % 2 == 0 and length2 % 2 == 0):
    #     if (string1 == string2*(length1//length2)):
    #         value = math.gcd(length1, length2)
    #         print(string2*value)
    # if (length1 % 2 == 0 and length2 % 2 == 0 or length1 % 2 == 1)
