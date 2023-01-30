def maximumUnits(boxTypes, truckSize):
    truck = 0
    valueData = 0
    for i in range(0, len(boxTypes)):
        if (truck+boxTypes[i][0] <= truckSize):
            truck += boxTypes[i][0]
            valueData += (boxTypes[i][0]*boxTypes[i][1])
        else:
            valueData += (truckSize-truck)*boxTypes[i][1]
            truck += (truckSize-truck)
            # break

        print("Truck", truck)
        print("Value", valueData)


print(maximumUnits([[5, 10], [2, 5], [4, 7], [3, 9]], 10))
