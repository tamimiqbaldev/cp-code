t = int(input())
for _ in range(t):
    n, m, l, r = map(int, input().split())
    # The segment on day m should have length m+1, i.e., r' - l' = m
    # We can choose any such segment within [l, r]
    # Let's choose the leftmost possible segment: l' = l, r' = l + m
    l_prime = l
    r_prime = l_prime + m
    print(l_prime, r_prime)