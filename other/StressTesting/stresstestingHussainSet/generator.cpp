#include <bits/stdc++.h>
using namespace std;

int randomNumberBetween(int a, int b)
{
    if (a > b)
        swap(a, b);
    return a + rand() % (b - a + 1);
}

int main(int argc, char *argv[])
{

    // srand(atoi(argv[1]));
    srand(time(NULL));
    // gives random number between 1 and 5 inclusive of both
    int n = randomNumberBetween(1, 5);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = randomNumberBetween(1, 10);
    }
    int m = randomNumberBetween(1, 5);

    // cout << n << " " << m << endl;
    int b[m];
    // for unique elements in b in sorted order
    set<int> s;
    for (int i = 0; i < m; i++)
    {
        b[i] = randomNumberBetween(1, 100);
        s.insert(b[i]);
    }
    m = s.size();
    cout << n << " " << m << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (auto x : s)
    {
        cout << x << " ";
    }
}
