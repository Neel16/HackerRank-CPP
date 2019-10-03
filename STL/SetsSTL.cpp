#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    set<int> s;
    int queries;

    cin >> queries;
    
    int query, val;
    for(int i = 0; i < queries ; i++)
    {
        set<int>::iterator finder ;//= s.find(val);
        set<int>::iterator present ;//= s.find(val);
        cin>>query;
        switch(query)
        {
            case 1: cin>>val;
                    s.insert(val);
                    break;
            case 2: cin>>val;
                    finder = s.find(val);
                    if(finder == s.end())
                        break;
                    else
                        s.erase(val);
                    break;
            case 3: cin>>val;
                    present = s.find(val);
                    if(present != s.end())
                        cout<<"Yes"<<endl;
                    else cout<<"No"<<endl;
                    break;
        }   
    }
   
    return 0;
}



