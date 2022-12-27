#include <iostream>
#include <algorithm>

using namespace std;

void perform_operation(int B[], int n)
{
    int C[n];
    for (int i = 0; i < n; i++)
    {
        C[i] = 0;
    }

      for (int i = 0; i < n; i++)
      {
          int num = B[i] - 1;
          int index = i + 1;
          while (index < n && num > 0)
          {
              C[index] += num;
              num--;
              index++;
          }
      }

    // reduce it into O(n)

    for (int i = 0; i < n; i++)
    {
        B[i] += C[i];
    }

    /*   for (int i = 0; i < n; i++)
      {
          cout << C[i] << " ";
      }
      cout << endl; */

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        perform_operation(B, n);
        for (int i = 0; i < n; i++)
        {
            cout << B[i] << " ";
        }
        cout << endl;
    }


    return 0;
}
