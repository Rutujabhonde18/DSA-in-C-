#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int n)
{
	//base case
	if(n<=1)
		return ;
		
	//Recursive call
	insertionSort(arr+1, n-1);
	
	//Insert arr[0] to sorted part	
	int key = arr[0];
	int j = 1;
	
	//shift element
	while(j<n && arr[j]<key){
		arr[j-1] = arr[j];
		j++;
	}
	
	//place key in correct position
	arr[j-1] = key;
		
}

int main()
{
	int arr[5] = {33,22,86,01,23};
	
	insertionSort(arr, 5);
	
	//print
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
