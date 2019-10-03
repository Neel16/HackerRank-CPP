#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> vec;
    vector<int>::iterator it ;

    int temp;
    int size;
    cin>>size; //just taking size here so that it doesnt interfere with my vector input. Alternatively, can also run for loop with size instead of while loop

    while(cin>>temp)
        vec.push_back(temp);

    sort(vec.begin(),vec.end());

    for(it = vec.begin() ; it != vec.end() ; it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
