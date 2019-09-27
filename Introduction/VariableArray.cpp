#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;

    // create vector of vectors
    vector<vector<int>> a(n);

    // fill each 2D vector i with k_i values
    for (int i = 0; i < n; i++) {
        // get the length k of the vector at a[i]
        int k;
        cin >> k;

        // fill the vector with k values
        a[i].resize(k);  // since the first element read in each vector is going to be the size of that vector we just resize the vector to that size.
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];      //here i is the number of vector and then j is used to iterate throught the position in each 1D vector
        }
    }

    // run queries on a
    for (int q_num = 0; q_num < q; q_num++) {
        // get i, j as the 'query' to get a value from a
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    return 0;
}
