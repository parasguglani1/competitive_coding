int solve(string S)
{

    int oned = 0, twod = 0;
    int cur = 0;
    int n = S.length();
    for (int i = 0; i < n; i++)
    {
        if (S[i] != 'A')
        {
            cur++;
        }
        else
        {
            cur--;
        }
        oned = max(oned, cur);
    }
    cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (S[i] != 'C')
        {
            cur++;
        }
        else
        {
            cur--;
        }
        twod = max(twod, cur);
    }
    return max(oned, twod);
}
