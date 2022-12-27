#include <iostream>
using namespace std;

void isSubsetSum(int w[], int n, int target, int tempsum, int x[], int k, int total_sum)
{

    if (k < n)
    {
        x[k] = 1;
        if (tempsum + w[k] == target)
        {
            for (int i = 0; i < n; i++)
            {
                cout << x[i] << " ";
            }
            cout << endl;
        }

        else if (tempsum + w[k] + w[k + 1] <= target)
        {
            isSubsetSum(w, n, target, tempsum + w[k], x, k + 1, total_sum - w[k]);
        }

        else if ((tempsum + w[k + 1] <= target) && (tempsum + total_sum - w[k] >= target))
        {
            x[k] = 0;
            isSubsetSum(w, n, target, tempsum, x, k + 1, total_sum - w[k]);
        }
    }
}

int main()
{
    int n, target, total_sum = 0;
    cout << "Enter size of array " << endl;
    cin >> n;
    int w[n];
    int x[n] = {0};
    cout << "ENter array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        total_sum = total_sum + w[i];
    }
    cout << "Enter the target sum " << endl;
    cin >> target;
    isSubsetSum(w, n, target, 0, x, 0, total_sum);

    return 0;
}