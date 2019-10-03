#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> m;

    int queries;
    cin>>queries;

    int query, marks;
    string name;

    for(int i = 0; i < queries ; i++)
    {
        cin>>query;
        map<string,int>::iterator it;
        switch(query)
        {
            case 1: cin>>name;
                    cin>>marks;
                    it=m.find(name);
                    if(it==m.end())  //if it == m.end that means the pair is not in the map, we need to insert it
                      m.insert(make_pair(name, marks));
                    else
                        it->second += marks;  // if pair is in the map we add the marks to that students existing marks.
                    break;
            case 2: cin>>name;
                    m.erase(name);
                    break;
            case 3: cin>>name;
                    it = m.find(name);
                    if(it != m.end())
                    {
                        cout<<it->second<<endl;
                    }
                    else
                    {
                        cout<< 0 << endl;
                    }
                    break;
        }
    }

    return 0;
}



