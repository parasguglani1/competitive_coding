int pre = 0, suf = 0;
for (int x = 1; x < n; x++)
{
    pre += arr[x - 1];
    suf += arr[n - x];
    if (pre == suf)
    {
        return x;
    }
}
