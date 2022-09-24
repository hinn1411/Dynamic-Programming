#include <iostream>
#include <utility>
#include <vector>
using namespace std;

double gridTraveler(int m, int n, vector<vector<int>> &cache)
{
    if (cache[m][n] > 0)
        return cache[m][n];
    if (m == 0 || n == 0)
        return 0;
    if (m == 1 || n == 1)
    {
        cache[m][n] = 1;
        return cache[m][n];
    }
    cache[m][n] = gridTraveler(m - 1, n, cache) + gridTraveler(m, n - 1, cache);
    return cache[m][n];
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> cache(m + 1, vector<int>(n + 1, 0));
    cout << gridTraveler(m, n, cache) << endl;
    return 0;
}
