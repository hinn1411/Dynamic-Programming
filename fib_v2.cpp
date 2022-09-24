#include<iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int> &store)
{
    if(n <= 0)
        return -1;
    else if(n <= 2)
        return store[n - 1];

    if(store.size() >= n)
        return store[n - 1];
    store.push_back(fib(n - 1, store) + fib(n - 2, store));
    return store.back();
}

int main()
{
    vector<int> store;
    store.push_back(1);
    store.push_back(1);
    int n;
    cin >> n;
    cout << fib(n, store) << endl;
    for(int &i : store)
        cout << i << " ";
    cout << endl;
    return 0;
}