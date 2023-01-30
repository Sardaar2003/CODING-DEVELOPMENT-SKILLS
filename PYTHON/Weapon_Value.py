testCases = int(input())
for i in range(testCases):
    sizeOfArray = int(input())
    characterArray = list(input())
    for j in range(sizeOfArray-1):
        stringData = str(input())
        for k in range(0, 10):
            #print(len(characterArray), len(stringData))
            if stringData[k] == '1' and characterArray[k] == '1':
                characterArray[k] = '0'
            elif(stringData[k] == '1' and characterArray[k] == '0'):
                characterArray[k] = '1'
    print(characterArray.count('1'))
