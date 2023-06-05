def bubble_sort(array):
    arr_len = len(array)

    for i in range(arr_len - 1):

        for j in range(arr_len - 1 - i):

            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]

    return array


print(bubble_sort([2,3,7,1,2,8,3,2,1]))
