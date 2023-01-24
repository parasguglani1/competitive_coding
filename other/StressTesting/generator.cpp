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
    int l = randomNumberBetween(440, 480);
    int r = randomNumberBetween(440, 480);

    cout << l << " " << r << endl;
}
