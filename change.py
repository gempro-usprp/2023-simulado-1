T = int(input())

for t in range(T):
    D, N = map(int, input().split(' '))
    prices = map(float, input().split(' '))

    maxChange = 0
    for price in prices:
        nProducts = D // price

        if (nProducts == 0):
            continue

        change = (D / price - nProducts) * price
        maxChange = max(maxChange, change)

    print(f"{maxChange:.2f}")
