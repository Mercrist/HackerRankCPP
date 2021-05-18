#include <iostream>
#include <map>
using namespace std;

void mapQueries()
//https://www.hackerrank.com/contests/c-collections-prelab/challenges/cpp-maps
{
    map<string, int> students;
    int queries, operation, score;
    string name;

    cin >> queries;
    for(int i = 0; i < queries; i++)
    {
        cin >> operation;
        cin >> name;
        
        if(operation == 1){
            cin >> score;
            if(students.find(name) == students.end()) //havent added the student yet
                students[name] = score;
            else
                students[name] += score;
        }

        else if(operation == 2)
            students[name] = 0;
        
        else if(operation == 3)
            cout << students[name] << endl; //prints the students score
    }
}

int main()
{
    mapQueries();
    return 0;
}