#include <iostream>
using namespace std;

int findPeak(int arr[], int s, int e) {
    if (s > e)
        return -1;

    int mid = (s + e) / 2;

    if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == e || arr[mid] >= arr[mid + 1]))
        return mid;
        
    else if (mid > 0 && arr[mid] < arr[mid + 1]) {
        return findPeak(arr, mid + 1, e);
    }
    
	else{
        return findPeak(arr, s, mid - 1);
    }
}

int main() {
    int arr[6] = {1, 3, 5, 7, 4, 2};

    int peakIndex = findPeak(arr, 0, 4);

    if (peakIndex != -1)
        cout << "The peak element is at index: " << peakIndex << endl;
    else
        cout << "No peak element found in the array." << endl;

    return 0;
}
