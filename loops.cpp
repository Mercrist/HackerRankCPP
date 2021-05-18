#include <iostream>
#include <string>
using namespace std;

//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
void printNumsInRange()
{
    int a,b;
    string nums[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> a;
    cin >> b;

    for(int i = a; i <= b; i++)
    {
        if(i <= 9)
            cout << nums[i-1] << endl;

        else
            i%2 ? cout << "even" << endl : cout << "odd" << endl; 
    }
}

int main()
{
    printNumsInRange();
    return 0;
}
