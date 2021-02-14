no_of_items = int(input())

while(no_of_items != 0):
    S = input()

    a = sorted(S[:len(S)//2])
    print(a)
    b = sorted(S[(len(S)+1)//2:])
    print(b)

    if(a == b):
        print("YES")
    else:
        print("NO")

    no_of_items -= 1