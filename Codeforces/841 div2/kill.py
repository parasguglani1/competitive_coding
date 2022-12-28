t = int(input())
for i in range(t):
    n = input()
    n = int(n)
    ans = (n * (n + 1) * ((2 * n) + 1)) // 6
    # print(ans)
    ans2 = ((n - 1) * n * (n + 1)) // 3
    # print(ans2)
    ans3 = ans+ans2
    # ans3 = ans3 % 1000000007
    ans3 = ans3*2022
    ans3 = ans3 % 1000000007
    print(int(ans3))
    # print()

    # print(l)
