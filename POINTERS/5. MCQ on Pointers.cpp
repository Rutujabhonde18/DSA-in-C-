1) 
  int first = 8;
	int second = 18;
	int *ptr = &second;
	*ptr = 9;
	cout<<first<<" "<<second<<endl;

ANS : 8 9

2)
  int first = 6;
	int *p = &first;
	int *q = p;
	(*q)++;
	cout<<first<<endl;

ANS : 7

3)
  int first = 8;
	int *p = &first;
	cout<<(*p)++<<" ";
	cout<<first<<endl;

ANS : 8 9

4)
  int *p = 0;
	int first = 110;
	*p = first;
	cout<<*p<<endl;

ANS : Segmentation Fault

5)
  int first = 0;
	int second = 11;
	int *third = &second;
	first = *third;
	*third = *third + 2;
	cout<<first<<" "<<second;

ANS : 11 13

6)
  float f = 12.5;
	float p = 21.5;
	float *ptr = &f;
	(*ptr)++;
	*ptr = p;
	cout<<*ptr<<" "<<f<<" "<<p;

ANS : 21.5 21.5 21.5

7)
  int arr[5];
	int *ptr;
	cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;

ANS : 20 8

8)
  int arr[] = {11,21,13,14};
	cout<<*(arr)<<" "<<*(arr+1)<<endl;

ANS : 11 21

9)
  int arr[] = {11,12,31};
	cout<<arr<<" "<<&arr<<endl;

ANS : 0x6ffe10 0x6ffe10
  
10)
  int arr[] = {11,12,31};
	cout<<(arr+1)<<endl;

ANS : 0x6ffe14

11)
  int arr[6] = {11,21,31};
	int *p = arr;
	cout<<p[2]<<endl;

ANS : 31

12)
  int arr[6] = {11,12,13,14,15};
	cout<<*(arr)<<" "<<*(arr + 3);

ANS : 11 14

13)
  int arr[] = {11,21,31,41};
	int *ptr = arr++;
	cout<<*ptr;

ANS : Error -> array inc nahi hot

14)
  char ch = 'a';
	char *ptr = &ch;
	ch++;
	cout<<*ptr;

ANS : b

15)
  char arr[] = "abcde";
	char *p = &arr[0];
	cout<<p;

ANS : abcde

16)
  char arr[] = "abcde";
	char *p = &arr[0];
	p++;
	cout<<p;

ANS : bcde

17)
  char str[] = "rutuja";
	char *p = str;
	cout<<str[0]<<" "<<p[0]<<endl;

ANS : r r

18)
  void update(int *p)
  {
	  *p = *p * 2;
  }

  int main()
  {
  	int i=10;
	  update(&i);
	  cout<<i;
    
	  return 0;
  }

ANS : 20

19)
  void fun(int arr[]) 
  {
	  cout << arr[0] << " ";
  }

  int main()
  {
    int arr[] = {11, 12, 13, 14};
    fun(arr + 1);
    cout << arr[0] << endl;
  }

ANS : 12 11

20)
  void update(int *p){
        int a = 70;
        p = &a;
        *p = (*p) * (*p);
    }

    int main(){
        int a = 70;
        square(&a);
        cout << a << endl;
    }

ANS : Eror

21)
  int first = 10;
    int *p = &first;
    int **q = &p;
    int second = 20;
    *q = &second;
    (*p)++;
    cout << first << " " << second << endl;

ANS : 10 21

22)
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;

ANS : 111 119

23)
  int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;

ANS : 102 101

24)
  void increment(int **p)
  {
    ++(**p);
  }

  int main()
  {
	  int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;
    
    return 0;
  }

ANS : 111

25)
  int arr[] = {41, 52, 36, 74};
  int *p = (arr + 1);
  cout << *arr + 8;

ANS : 49

26)
  char *p; 
    char str[] = "pqrstuv";
    p = str;
    p += 3;
    cout << p;

ANS : stuv

27)
  char arr[20];
    int i;
    for(i = 0; i < 10; i++) 
	{
        *(arr + i) = 65 + i;
    }
    *(arr + i) = '\0';
    cout << arr;

ANS : ABCDEFGHIJ

28)
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;

ANS : 90.5 3

29)
  void Q(int z)
{
    z += z;
    cout<<z << " ";
}

void P(int *y) 
{
    int x = *y + 2;
    Q(x);
    *y = x - 1; 
    cout<<x << " ";
}

int main()
{
    int x = 5;
    P(&x);
    cout<<x;
    return 0;
}

ANS : 14 7 6
