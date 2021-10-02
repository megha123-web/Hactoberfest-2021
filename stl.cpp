#include <iostream>

#include <vector>
#include <string>
#include <utility>
#include <set>

#include <algorithm>
#include <map>
struct Interval
{
    int st;
    int et;
};
bool compare(Interval j1, Interval j2)
{
    return j1.st < j2.st;
}

using namespace std;

int main()
{

    // vector<int> v(5, 1);

    // for (int i = 0; i < 5; i++)
    // {
    //     v.push_back(i + 2);
    // }

    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // string s = "Nirbhay";
    // string s1(s, 2, 4);

    // string s2 = s.substr(1, 4);
    // cout << s2 << endl;
    // if (s1.compare(s2) == 0)
    // {
    //     cout << "they are equal";
    // }
    // else
    // {
    //     cout << "They are nt equal";
    // }

    // pair<int, char> p;
    // p = make_pair(2, 'b');

    // cout << p.first << " " << p.second;

    // set<int> s;
    // int arr[] = {1, 2, 3, 4, 5, 6};
    // for (int i = 0; i < 6; i++)
    // {
    //     s.insert(arr[i]);
    // }

    // set<int>::iterator it;
    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // if (s.find(7) == s.end())
    // {
    //     cout << "Element not found";
    // }
    // else
    // {
    //     cout << "Element found";
    // }
    // int arr[] = {1, 2, 3, 4, 5};
    // map<int, int> m;
    // for (int i = 0; i < 5; i++)
    // {
    //     m[arr[i]] = m[arr[i]] + 1;
    // }
    // map<int, int>::iterator it;

    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << (*it).second << endl;
    // }
    // m.erase(1);

    //unordered map is just like map the only thing is that implmentation of map is with the help of balanced binary search tree which is why it maintains the order whereas the implementation of unordered map is with the help of hashtable hence the time complexity is o1 in average without order.
    // int arr[] = {154, 3, 2, 55, 33};
    // sort(arr, arr + 5, greater<int>());
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    Interval arr[] = {{6, 4}, {3, 4}, {4, 6}, {8, 13}};
    sort(arr, arr + 4, compare);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i].st << endl;
    }
}
