#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int lo = 0, hi = arr.size() - 1;
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        
        if (arr[mid] == target) {
            cout << "Found at index " << mid;
            return 0;
        }
        
        // Check if the left half is sorted
        if (arr[lo] <= arr[mid]) {
            // Target lies in the sorted left half
            if (arr[lo] <= target && target < arr[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        } 
        // Otherwise, the right half must be sorted
        else {
            // Target lies in the sorted right half
            if (arr[mid] < target && target <= arr[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    
    cout << "Target not found";
    return 0;
}
