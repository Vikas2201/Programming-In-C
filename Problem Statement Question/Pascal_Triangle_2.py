## Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

import math
def getRow(rowIndex):
    output = list()
    for n in range(rowIndex+1):
        rowlist = list()
        for r in range(n+1):
            element = (math.factorial(n))//((math.factorial(n-r))*math.factorial(r))
            rowlist.append(element)
        output.append(rowlist)
    return output[rowIndex]

## Main Function
rowIndex = int(input("Enter Row Number of Pascal Triangle : "))
print(rowIndex," row of the Pascal's triangle : ",getRow(rowIndex))