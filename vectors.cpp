#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/vector-sort/problem
void sortVector()
{
    vector<int> vect;
    int vectorSize, nums;

    cin >> vectorSize;
    for (int j = 0; j < vectorSize; j++)
    {
        cin >> nums;
        vect.push_back(nums);
    }

    sort(vect.begin(), vect.end());
    
    for (int i = 0; i < vect.size(); i++)
    {
        cout << to_string(vect[i]) + " ";
    }
}

//https://www.hackerrank.com/challenges/vector-erase/problem?h_r=next-challenge&h_v=zen
void vectorErase()
{
    vector<int> vect;
    vector<int> rangeVect;
    int vectorSize, nums, posDelete, range;

    cin >> vectorSize;
    for (int j = 0; j < vectorSize; j++)
    {
        cin >> nums;
        vect.push_back(nums);
    }

    cin >> posDelete;
    for (int k = 0; k < 2; k++)
    {
        cin >> range;
        rangeVect.push_back(range);
    }

    vect.erase(vect.begin()+posDelete-1);
    vect.erase(vect.begin()+rangeVect[0]-1, vect.begin()+rangeVect[1]-1);

    cout << vect.size() << endl;
    for (int i = 0; i < vect.size(); i++)
    {
        cout << to_string(vect[i]) + " ";
    }
}

//https://www.hackerrank.com/challenges/cpp-lower-bound/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
void numSearch()
{
    vector<int> vect;
    vector<int> query;
    int vectSize, nums, querySize, queryNums;

    cin >> vectSize;
    for(int h = 0; h < vectSize; h++)
    {
        cin >> nums;
        vect.push_back(nums);
    }

    cin >> querySize;
    for(int k = 0; k < querySize; k++)
    {
        cin >> queryNums;
        query.push_back(queryNums);
    }

    for (int i=0; i < query.size(); i++)
    {
       vector<int>::iterator low = lower_bound(vect.begin(), vect.end(), query[i]);
       if (vect[low - vect.begin()] == query[i])
           cout << "Yes " << (low - vect.begin()+1) << endl;
       else
           cout << "No " << (low - vect.begin()+1) << endl;
    }
}

int main()
{
    // sortVector();
    // vectorErase();
    numSearch();
    return 0;
}