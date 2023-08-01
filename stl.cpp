#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> a = {1, 2};
    pair<int, int> b = {3, 4};

    cout << a.first << " " << a.second << endl;

    a.swap(b);
    cout << a.first << " " << a.second << endl;

    pair<int, int> c;
    c.first = 5;

    cout << c.first << " " << c.second << endl;

    c.second = 6;
    cout << c.first << " " << c.second << endl;

    pair<int, pair<int, int>> d = {7, {8, 9}};

    cout << d.first << " " << d.second.first << " " << d.second.second << endl;

    pair<int, int> e[] = {{10, 11}, {12, 13}};

    cout << e[0].first << " " << e[0].second << endl;

    e[2] = {14, 15};
    cout << e[2].first << " " << e[2].second << endl;
};

void explainVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v4{1, 2, 3, 4, 5};
    cout << v4.front() << endl; // geting first element
    cout << v4.back() << endl;  // getting last element

    // define vector with size
    vector<int> v1(5);
    for (auto it : v1)
    {
        cout << it << endl;
    }

    // define size with with default initialization
    vector<int> v2(5, 100);
    for (auto it : v2)
    {
        cout << it << endl;
    }

    // copy vector from another vector
    vector<int> v3(v1);

    // accessing the element of vector
    // 1)direct access
    cout << v3[0] << " " << v3.at(0) << endl;

    // 2)access through iterator [iterator is same like pointer]
    vector<int>::iterator it = v.begin(); // vector.begin() points to first element of vector
    cout << *(it) << endl;

    vector<int>::iterator end = v.end(); // vector.end() points memory after last element. its dereferencing will give garbage value.
    cout << *(end) << endl;

    vector<int> v5 = {1, 2, 3, 4, 5};

    for (vector<int>::iterator i = v5.begin(); i != v5.end(); i++)
    {
        cout << *i << endl;
    }

    for (auto i = v5.begin(); i != v5.end(); i++)
    {
        cout << *i << endl;
    }
}

int main()
{
    // explainPair();
    explainVector();
    return 0;
}