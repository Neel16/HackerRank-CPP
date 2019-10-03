#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    
    std::deque<int> Q(k); 
  
    /* Process first k (or first window) elements of array */
    int i; 
    for (i = 0; i < k; ++i) { 
        // For every element, the previous smaller elements are useless so 
        // remove them from Qi 
        while ((!Q.empty()) && arr[i] >= arr[Q.back()]) 
            Q.pop_back(); // Remove from rear 
  
        // Add new element at rear of queue 
        Q.push_back(i); 
    } 
  
    // Process rest of the elements, i.e., from arr[k] to arr[n-1] 
    for (; i < n; ++i) { 
        // The element at the front of the queue is the largest element of 
        // previous window, so print it 
        cout << arr[Q.front()] << " "; 
  
        // Remove the elements which are out of this window 
        while ((!Q.empty()) && Q.front() <= i - k) 
            Q.pop_front(); // Remove from front of queue 
  
        // Remove all elements smaller than the currently 
        // being added element (remove useless elements) 
        while ((!Q.empty()) && arr[i] >= arr[Q.back()]) 
            Q.pop_back(); 
  
        // Add current element at the rear of Qi 
        Q.push_back(i); 
    } 
  
    // Print the maximum element of last window 
    cout << arr[Q.front()]<<endl; 

}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i; 
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

