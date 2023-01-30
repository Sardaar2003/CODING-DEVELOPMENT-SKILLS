from collections import Counter
testCases = int(input())
for i in range(testCases):
    numberOfPolice, housePerMin, minPerHouse = map(int, input().split())
    dataSet = list(map(int, input().split()))
    housePerMin *= minPerHouse
    for i in dataSet:
        value = [False]*101
        minPerHouse = i
        if (housePerMin <= minPerHouse and (housePerMin+minPerHouse) <= 100):
            for k in range(1, housePerMin+minPerHouse+1):
                value[k] = True
        elif (housePerMin <= minPerHouse and (housePerMin+minPerHouse) > 100):
            for k in range(1, 101):
                value[k] = True
        elif (housePerMin > minPerHouse and (housePerMin+minPerHouse) <= 100):
            for k in range(housePerMin-minPerHouse, housePerMin+minPerHouse+1):
                value[k] = True
        elif (housePerMin > minPerHouse and (housePerMin+minPerHouse) > 100):
            for k in range(housePerMin-minPerHouse, 101):
                value[k] = True
        count = 0
        for i in value:
            if i == False:
                count += 1
        print(count)
