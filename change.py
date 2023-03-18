T = int(input())

for t in range(T):
    D, N = map(lambda x : int(x), input().split(' '))
    prices = map(lambda x : float(x), input().split(' '))

    maxChange = 0
    for price in prices:
        nProducts = D // price;
        change = (D / price - nProducts) * price;
        maxChange = max(maxChange, change);

    print(f"{maxChange:.2f}")
    