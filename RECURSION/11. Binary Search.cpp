#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{
	//base case
	
	//element not found
	if(s>e)
		return false;
	
	int mid = s + (e-s)/2;
		
	//element found
	if(arr[mid] == k)
		return true;
	
	if(arr[mid] < k){
		return binarySearch(arr, mid+1, e, k);
	}
	else{
		return binarySearch(arr, s, mid-1, k);
	}
}

int main()
{
	int arr[6] = {2,4,6,10,14,16};
	int size =  6;
	int key = 14;
	
	cout<<"Present or not.....  "<<binarySearch(arr, 0, 5, key);
	
	return 0;
}
