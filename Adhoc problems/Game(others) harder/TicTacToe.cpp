#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin >> t;
    while (t--)
    {
        char a[3][3];
        int i, j, res = 0, c = 0, d = 0, z = 0, wX = 0, wO = 0, k = 0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '.')
                    d++;
                else if (a[i][j] == 'X')
                    c++;
                else
                    z++;
            }
        }
        //checking for the game resulting for a win
        for (i = 0; i < 3; i++)
        {
            if (a[0][i] != '.')
            {
                if (a[0][i] == a[1][i] && a[0][i] == a[2][i])
                {
                    if (a[0][i] == 'X')
                        wX = 1;
                    else
                        wO = 1;
                }
            }
            if (a[i][0] != '.')
            {
                if (a[i][0] == a[i][1] && a[i][0] == a[i][2])
                {
                    if (a[i][0] == 'X')
                        wX = 1;
                    else
                        wO = 1;
                }
            }
        }
        if (a[1][1] != '.')
        {
            if ((a[1][1] == a[0][0] && a[1][1] == a[2][2]) || (a[1][1] == a[0][2] && a[1][1] == a[2][0]))
            {
                if (a[1][1] == 'X')
                    wX = 1;
                else
                    wO = 1;
            }
        }
        if (wX && wO)
            goto A;
        else if (wX)
        {
            if (z == c - 1)
                res = 1;
        }
        else if (wO)
        {
            if (c == z)
                res = 1;
        }
        // cin.ignore('\n');
        else if ((c == 0 && z == 0 && d == 9) || (c == 1 && z == 0 && d == 8) || (c == 1 && z == 1 && d == 7) || (c == 2 && z == 1 && d == 6) || (c == 2 && z == 2 && d == 5) || (c == 3 && z == 2 && d == 4) || (c == 3 && z == 3 && d == 3) || (c == 4 && z == 3 && d == 2) || (c == 4 && z == 4 && d == 1) || (c == 5 && z == 4 && d == 0))
            res = 1;

    A:
        cout << (res == 1 ? "yes\n" : "no\n");
    }
    return 0;
}