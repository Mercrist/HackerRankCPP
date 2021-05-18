#include <iostream>
#include <set>
using namespace std;

void setQueries()
//https://www.hackerrank.com/contests/c-collections-prelab/challenges/cpp-sets
{
    set<int> currentSet;
    int numInputs, x, y;

    cin >> numInputs; //gets number of queries user will enter


    for(int i = 0; i < numInputs; i++)
    {
        cin >> y;
        cin >> x; //reads two numbers inputted

        if(y == 1)
            currentSet.insert(x);

        else if(y == 2)
            currentSet.erase(x); //wont throw an exception if element isnt in set
        
        else{
            if(currentSet.find(x) != currentSet.end()) //iterator arrive at the end of the set, value not found
                cout << "Yes" << endl;
            
            else
                cout << "No" << endl; //element not in set
        }


    }


}

int main() {
    setQueries();
    
    return 0;
}
