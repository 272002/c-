#include <bits/stdc++.h>
using namespace std;
int m, n;

void findPaths(vector<vector<int>> &arr, vector<int> &path, int i, int j)
{
    if (i == m-1 && j == n-1)
    {
        path.push_back(arr[i][j]);
        for (auto it : path)
        {
            cout << it << " ";
        }
        cout << endl;
        path.pop_back();
        return;
    }

    path.push_back(arr[i][j]);
    if (j + 1 < n)
    {
        findPaths(arr, path, i, j + 1);
    }

    if (i + 1 < m)
    {
        findPaths(arr, path, i + 1, j); 
    }
    path.pop_back();
    return;
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> path;

    int i = 0, j = 0;

    m = arr.size();
    n = arr[0].size();

    findPaths(arr, path, i, j);

    return 0;
}
