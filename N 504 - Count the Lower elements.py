n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a.sort()

for bj in b:
    # Binary search for the index of the first element greater than bj
    left, right = 0, n
    while left < right:
        mid = (left + right) // 2
        if a[mid] <= bj:
            left = mid + 1
        else:
            right = mid

    # The number of elements in a that are less than or equal to bj is left
    print(left, end=' ')
