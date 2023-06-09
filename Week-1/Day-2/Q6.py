def count_duplicate_pairs(arr):
    count = 0
    unique_elements = set(arr)

    for num in arr:
        if num + 1 in unique_elements:
            count += 1

    return count

n = int(input())
arr = list(map(int, input().split()))

result = count_duplicate_pairs(arr)
print(result)
