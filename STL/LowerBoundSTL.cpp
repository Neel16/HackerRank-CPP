#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, queries , q, data;

    cin >> size;
    vector<int> vec(size);

    for(int i = 0; i< size ; i++)
    {
        cin>>vec[i];
        //You cant use push back here because then the vector will look like
        // this : 0 0 0 0 0 0 0 0 1 1 2 2 6 9 9 15 THis is because push back adds
        // elements to the end. so since our size was 8 it will begin adding from 
        //position 9
        
    }   

    // for(int i = 0; i<vec.size() ; i++) //print vector to check if push back works or not
                                           
    // {
    //     cout<<vec[i]<<" ";
    // }

    cin >> queries;
    
    for(int i = 0; i<queries ; i++)
    {
        cin>>q;
        vector<int>::iterator low;
        low = lower_bound(vec.begin(),vec.end(),q);

        // auto low=lower_bound(vec.begin(),vec.end(),q);
        // cout << (*low==q?"Yes ":"No ") << low-vec.begin()+1 << endl;

        if (vec[low - vec.begin()] == q)
           cout << "Yes " << (low - vec.begin()+1) << endl;
       else
           cout << "No " << (low - vec.begin()+1) << endl;
        
        
    }
    return 0;
}
