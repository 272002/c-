#include <bits/stdc++.h>
using namespace std;

void printunion(int A1[], int A2[], int m, int n)
{
    int i = 0, j = 0;
    cout << "The union is " << endl;
    while (i < m && j < n)
    {
        if (A1[i] < A2[j])
            cout << A1[i++] << " ";

        else if (A2[j] < A1[i])
            cout << A2[j++] << " ";

        else
        {
            cout << A2[j++] << " ";
            i++;
        }
    }
    while (i < m)
        cout << A1[i++] << " ";

    while (j < n)
        cout << A2[j++] << " ";
}
void printintersect(int A1[], int A2[], int m, int n)
{
    int i = 0, j = 0;
    cout <<endl<<"The intersection is " << endl;
    while (i < m && j < n)
    {
        if (A1[i] < A2[j])
        i=i+1;

        else if (A2[j] < A1[i])
        j=j+1;

        else
        {
                cout << A2[j++] << " ";
                i++;
        }
    }
}

int main()
{
    int m, n;
    cout << "Enter the size of 1st array ";
    cin >> m;
    cout << "Enter 1st sorted array elements " << endl;
    int A1[m];
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        A1[i] = a;
    }
    cout << "Enter the size of 2nd array ";
    cin >> n;
    cout << "Enter 2nd sorted array elements " << endl;
    int A2[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        A2[i] = a;
    }
    printunion(A1, A2, m, n);
    printintersect(A1, A2, m, n);

    return 0;
}