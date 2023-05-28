//  to calculate subarray sum
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> psum(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        i == 0 ? psum[i] = a[i] : psum[i] = psum[i - 1] + a[i];
    }

    int queries, left, right;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        cin >> left >> right;
        cout << psum[right] - psum[left - 1] << endl;
    }

    return 0;
}