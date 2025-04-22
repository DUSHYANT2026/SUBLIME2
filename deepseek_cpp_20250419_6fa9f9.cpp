#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to find floor of x in a sorted vector
// Floor: largest element smaller than or equal to x
int findFloor(const vector<int>& vec, int x) {
    int low = 0, high = vec.size() - 1;
    int floor = INT_MIN; // Initialize with minimum possible value
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (vec[mid] == x) {
            return vec[mid]; // exact match found
        } else if (vec[mid] < x) {
            floor = vec[mid]; // potential floor found
            low = mid + 1;   // search in right half
        } else {
            high = mid - 1;   // search in left half
        }
    }
    
    return floor; // returns INT_MIN if no floor exists (x is smaller than all elements)
}

// Function to find ceil of x in a sorted vector
// Ceil: smallest element larger than or equal to x
int findCeil(const vector<int>& vec, int x) {
    int low = 0, high = vec.size() - 1;
    int ceil = INT_MAX; // Initialize with maximum possible value
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (vec[mid] == x) {
            return vec[mid]; // exact match found
        } else if (vec[mid] > x) {
            ceil = vec[mid]; // potential ceil found
            high = mid - 1;   // search in left half
        } else {
            low = mid + 1;    // search in right half
        }
    }
    
    return ceil; // returns INT_MAX if no ceil exists (x is larger than all elements)
}

int main() {
    vector<int> vec = {1, 2, 3, 5, 7, 8, 10};
    int x = 6;
    
    int floor_val = findFloor(vec, x);
    int ceil_val = findCeil(vec, x);
    
    cout << "Vector: ";
    for (int num : vec) cout << num << " ";
    cout << "\n";
    
    cout << "For x = " << x << ":\n";
    cout << "Floor: " << (floor_val == INT_MIN ? "Doesn't exist" : to_string(floor_val)) << "\n";
    cout << "Ceil: " << (ceil_val == INT_MAX ? "Doesn't exist" : to_string(ceil_val)) << "\n";
    
    return 0;
}