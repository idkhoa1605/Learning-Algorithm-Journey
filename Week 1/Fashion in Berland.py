def check(arr, n):
    if(n == 1):
        return arr[0] == 1
    flag = 0
    for i in range(n):
        if(arr[i] == 0):
            flag+=1
    return flag == 1


n = int(input())
jacket = list(map(int,input().split()))

if(check(jacket,n)):
    print("YES")
else:
    print("NO")