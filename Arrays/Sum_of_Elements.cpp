#include<iostream>
using namespace std;

int main()
{
    int n[100000];
    int l, sum = 0;
    cout<<"Enter the length of Array: ";
    cin>>l;
    cout<<"Enter the Elements: ";
    for(int i = 0; i < l; i++)
    {
        cin>>n[i];
        sum += n[i];
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}