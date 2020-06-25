from math import gcd
import matplotlib.pyplot as plt


def isPrime(n: int) -> bool:
    if n < 2:
        return False
    elif n in [2, 3, 5, 7]:
        return True
    elif n % 2 == 0 or n % 3 == 0:
        return False
    else:
        r = 5
        while r * r <= n:
            if n % r == 0:
                return False
            r += 2
            if n % r == 0:
                return False
            r += 4
        return True


def eulerTotient(x: int) -> int:
    if x == 1:
        return 1
    if isPrime(x):
        return x - 1
    return len([n for n in range(1, x) if gcd(x, n) == 1])


def graph(a: int, b: int, style):
    plt.plot(range(a, b), [eulerTotient(n) for n in range(a, b)], style, color = 'blue')
    plt.xlabel('n')
    plt.ylabel('phi(n)')
    return plt.show()


graph(1, 1000, 'r o')
graph(1, 1000, 'r-o')
graph(1, 1000, '-')

