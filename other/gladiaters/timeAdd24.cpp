/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *a[])
{
    int h1, m1;
    cin >> h1 >> m1;
    int h2, m2;
    cin >> h2 >> m2;

    int t1min = h1 * 60 + m1;
    int t2min = h2 * 60 + m2;
    int totalmin = t1min + t2min;
    if (totalmin >= 1440)
    {
        totalmin -= 1440;
    }
    int h = totalmin / 60;

    int m = totalmin % 60;
    if (h < 10)
    {
        cout << "0" << h << " ";
    }
    else
    {
        cout << h << " ";
    }
    if (m < 10)
    {
        cout << "0" << m << endl;
    }
    else
    {
        cout << m << endl;
    }
}
