void reverseArray(vector<int> &arr , int m)
{    
    int s = 0,  e = arr.size()-1;

        while(s <= e )

        {

                swap(arr[s++],arr[e--]);

        }
}
