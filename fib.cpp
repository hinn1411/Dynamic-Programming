#include <iostream>
#include <vector>
using namespace std;
int fib(int n, vector<int> &store)
{
    if (store.size() > n)
        return store[n - 1];
    if (n <= 2)
    {
        store.push_back(1);
        return store.back();
    }
    store.push_back(fib(n - 1, store) + fib(n - 2, store));
    return store.back();
}

int main()
{
    int n;
    cin >> n;
    vector<int> store;
    cout << fib(n, store) << endl;
    for(int &i : store)
        cout << i << " ";
    cout << endl;
    return 0;
}