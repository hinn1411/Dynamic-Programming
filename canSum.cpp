#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool canSum(int target, vector<int> v, unordered_map<int, bool> &cache)
{
    if(cache.find(target) != cache.end())
        return cache[target];
    if (target < 0)
        return false;
    else if (target == 0)
        return true;
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (canSum(target - v[i], v, cache) == true)
            {
                cache[target] = true;
                return true;
            }
        }
    }
    cache[target] = false;
    return false;
}

int main()
{
    unordered_map<int, bool> cache;
    vector<int> v{7, 14};
    cout << canSum(300, v, cache) << endl;
    return 0;
}