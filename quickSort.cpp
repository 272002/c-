#include <iostream>
using namespace std;

int partition(int b[], int s, int e)
{
    int pivot = b[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (b[i] <= pivot)
        {
            cnt++;
        }
    }
    int pivotindex = s + cnt;
    swap(b[s], b[pivotindex]);

    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (b[i] < pivot)
        {
            i++;
        }
        while (b[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(b[i++], b[j--]);
        }
    }
    return pivotindex;
}



void quickSort(int a[], int s, int e)
{
    if (s >= e)
        return;
    int p = partition(a, s, e);
    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}


int main()
{
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}