#include <iostream>
#include <time.h>
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

int rpg(int a[], int l, int h)
{
    int random = l + rand() % (l - h);
    cout<<random<<endl;
    swap(a[random], a[h]);
    int pvt = partition(a, l, h);
    return pvt;
}

void quickSort(int a[], int l, int h)
{
    if (l >= h)
        return;
    int pi = rpg(a, l, h);
    quickSort(a, l, pi - 1);
    quickSort(a, pi, h);
    
}

int main()
{
    int n;
    cout << "Enter array size " << endl;
    cin >> n;
    cout << "Enter array elements" << endl;
    int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}