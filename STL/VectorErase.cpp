#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    
    int size, q1, range1, range2;

    cin >> size;

    vector<int> vec(size) ;
    vector<int>::iterator it;
    for(int i=0;i<size;i++)
    {
        cin>>vec[i];
    } 
    
    cin >> q1;
    vec.erase(vec.begin()+(q1-1));

    cin >> range1 >> range2;
    vec.erase(vec.begin()+(range1-1), vec.begin()+(range2-1));

    cout<<vec.size()<<endl;
    for(it = vec.begin(); it != vec.end() ; it++)
    {
        cout<<*it <<" ";
    }

    return 0;
}
