def isStraightLinePossible(arr, n):
     
    
    x0 = arr[0][0]
    y0 = arr[0][1]
 

    x1 = arr[1][0]
    y1 = arr[1][1]
 
    dx = x1 - x0
    dy = y1 - y0
     

    for i in range(n):
        x = arr[i][0]
        y = arr[i][1]
         
        if (dx * (y - y1) != dy * (x - x1)):
            print("NO", end = "")
            return False
 
    print("true", end = "")
    return True

arr = eval(input())
n = len(arr)
isStraightLinePossible(arr,n)