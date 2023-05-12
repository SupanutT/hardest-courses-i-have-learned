def max_subarray_sum(arr, w):
    max_sum = float('-inf')
    for i in range(len(arr)):
        for j in range(i, min(len(arr), i+w)):
            subarray_sum = sum(arr[i:j+1])
            if subarray_sum > max_sum:
                max_sum = subarray_sum
    return max_sum
_,w = [int(i) for i in input().split()]
arr = [int(i) for i in input().split()]
print(max_subarray_sum(arr, w))  # Output: 9
