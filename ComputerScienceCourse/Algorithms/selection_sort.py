def selection_sort(arr):

    arr_len = len(arr)

    for i in range(arr_len - 1):

        min_index = i
        for j in range(i + 1, arr_len):
            if arr[min_index] > arr[j]:
                min_index = j

        arr[i], arr[min_index] = arr[min_index], arr[i]

    return arr


print(selection_sort([9,8,7,6,5,6,8,4,3,4,5,1]))
