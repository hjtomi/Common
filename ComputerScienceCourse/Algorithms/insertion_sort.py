def insertion_sort(arr):
    if (n := len(arr)) <= 1:
        return

    for i in range(1, n):
        key = arr[i]

        j = i-1

        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

    return arr


print(insertion_sort([9,8,7,6,5,6,5,4,7,8,1]))
