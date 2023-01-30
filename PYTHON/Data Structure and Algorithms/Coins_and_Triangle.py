testCases = int(input())
for i in range(testCases):
    height = 0
    value = 1
    number = int(input())
    while(number > 0):
        if (number >= value):
            number -= value
            value += 1
            height += 1
        else:
            break
    print(height)
