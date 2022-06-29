#include <bits/stdc++.h>
using namespace std;
#define R 6
#define C 5

void maxsize(int M[R][C])
{
    int S[R][C];

    for (int i = 0; i < R; i++)
        S[i][0] = M[i][0];

    for (int j = 0; j < C; j++)
        S[0][j] = M[0][j];

    for (int i = 1; i < R; i++)
    {
        for (int j = 1; j < C; j++)
        {
            if (M[i][j] == 1)
                S[i][j] = min({S[i][j - 1], S[i - 1][j], S[i - 1][j - 1]}) + 1;
            else
                S[i][j] = 0;
        }
    }

    int max_indexele = S[0][0];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (max_indexele < S[i][j])
            {
                max_indexele = S[i][j];
            }
        }
    }
    cout<<"The max element present is "<<max_indexele<<endl;

    cout << "The maximum size square sub matrix is " << endl;
    for (int i = 0; i < max_indexele; i++)
    {
        for (int j = 0; j < max_indexele; j++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
}
int main()
{
    int M[R][C] = {{0, 1, 1, 0, 1},
               {1, 1, 0, 1, 0},
               {0, 1, 1, 1, 0},
               {1, 1, 1, 1, 0},
               {1, 1, 1, 1, 1},
               {0, 0, 0, 0, 0}};

    maxsize(M);

    return 0;
}