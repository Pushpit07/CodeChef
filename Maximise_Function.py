test_cases = int(input())

while test_cases != 0:     
    no_of_items = int(input())

    arr = []

    arr = [int(n) for n in input().split()]

    mx = max(arr)
    mn = min(arr)

    print( 2 * (mx - mn))

    test_cases = test_cases - 1