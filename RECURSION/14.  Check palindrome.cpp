#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
	//base case
	if(i>j)
		return true;
		
	if(str[i] != str[j])
		return false;
	
	else{
		//Recursive call
		return checkPalindrome(str, i+1, j-1);
	}
}

int main()
{
	string name = "nitin";
	
	bool isPalindrome = checkPalindrome(name, 0, name.length()-1);
	
	if(isPalindrome){
		cout<<"It's a Palindrome"<<endl;
	}
	else{
		cout<<"Not Palindrome"<<endl;
	}
	
	return 0;
}
