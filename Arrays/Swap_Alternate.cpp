#include<iostream>
using namespace std;

int main()
{
    int arr[100000];
    cout<<"Enter the length of Array: ";
    int l;
    cin>>l;
    int s1 = 0, s2 = 1,  end = l-1;
    for(int i = 0; i < l; i++)
        cin>>arr[i];
    while(s2 <= end)
    {
        swap(arr[s1], arr[s2]);
        s1 += 2;
        s2 += 2;
    }
    for(int i = 0; i < l; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}