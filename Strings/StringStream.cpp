#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> temp;
    stringstream s(str);
    char ch;
    int tempInt;
    //s>>a>>ch>>b>>ch>>c;
    while(s.rdbuf()->in_avail() != 0)
    {
        s>>tempInt>>ch;
        temp.push_back(tempInt);
    }
    // temp.push_back(a);
    // temp.push_back(b);
    // temp.push_back(c);

    return temp;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
