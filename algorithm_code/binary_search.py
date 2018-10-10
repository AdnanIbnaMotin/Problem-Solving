def binary_search(arr, num):
    if(len(arr) > 0):
        mid = len(arr) // 2
        if (arr[mid] == num):
            return True
        if (arr[mid] > num):
            return binary_search(arr[:mid], num)
        if (arr[mid] < num):
            print(arr[mid])
            return binary_search(arr[mid+1:], num)
    else:
        return False



print(binary_search([10, 20, 30, 40], 20))
print(binary_search([35, 83, 89, 94, 99], 10))
print(binary_search([1, 1, 2, 3, 5, 8, 13, 21], 1))

