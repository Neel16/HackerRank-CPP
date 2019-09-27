#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);

    int temp = *max_element(vec.begin(),vec.end());

    return temp;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}