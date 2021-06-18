
def rev(d):
    r1 = 0
    while (d):
        r1 = r1 * 10 + (d % 10)
        d = d // 10
    return r1


def next_palindrom(n):
    if n == rev(n) and n>10:
        n = n + 1
    if n < 10:
        return n
    else:
        while 1:
            if n == rev(n):
                return n
            n += 1


if __name__ == '__main__':
    l = []
    print("Enter elements of list")
    l = input().split()
    for i in range(len(l)):
        l[i] = int(l[i])
    l2 = [next_palindrom(i) for i in l]
    print(l2)

