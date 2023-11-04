#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <list>
#include <array>

using namespace std;

bool isexistInset(const int a, set<int> &myset)
{
    return myset.find(a) != myset.end();
}
bool isexistInsetIter(const int &a, set<int>::iterator begin, set<int>::iterator end)
{
    return find(begin, end, a) != end;
}

template <typename Iterator, typename T>
bool IsExist(Iterator start, Iterator end, T value)
{
    return find(start, end, value) != end;
}


int main(int argc, char const *argv[])
{
    set<int> intSet;
    for (int i = 1; i <= 100; i++)
        intSet.insert(i);

    vector<string> strVector = {"un", "deux", "trois"};
    list<int> intList = {1, 2, 3};
    array<float, 3> floatArray = {1.0f, 2.0f, 3.0f};

    bool foundInVector = IsExist(strVector.begin(), strVector.end(), string("deux"));
    bool foundInList = IsExist(intList.begin(), intList.end(), 2);
    bool foundInArray = IsExist(floatArray.begin(), floatArray.end(), 2.0f);

    std::cout << "trouver on vector: " << foundInVector << '\n';
    std::cout << "trouver on list: " << foundInList << '\n';
    std::cout << "trouver on tableau: " << foundInArray << '\n';
    return 0;
}
