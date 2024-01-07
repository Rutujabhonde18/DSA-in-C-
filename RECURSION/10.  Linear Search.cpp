#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
	//base case
	if(size == 0)
		return false;
		
	if(arr[0] == key)
		return true;
		
	else{
		bool rp = linearSearch(arr+1, size-1, key);
		return rp;
	}
}

int main()
{
	int arr[5] = {2,4,6,10,9};
	int size =  5;
	int key = 20;
	
	bool ans = linearSearch(arr, size, key);
	
	if(ans){
		cout<<"Present";
	}
	
	else{
		cout<<"Absent";
	}
	
	return 0;
}
