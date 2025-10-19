#include<iostream>
#include<climits>
using namespace std;

int getMIN(int n[], int k)
{
    int min = INT_MAX;
    for(int i = 0; i < k; i++)
    {
        if(n[i] < min)
            min = n[i];
    }
    return min;
}
int getMAX(int n[], int k)
{
    int max = INT_MIN;
    for(int i = 0; i < k; i++)
    {
        if(n[i] > max)
            max = n[i];
    }
    return max;
}
int main()
{
    int n[100];
    int l;
    cout<<"Enter the size of array: ";
    cin>>l;
    for(int i = 0; i < l; i++)
        cin>>n[i];
    cout<<"The Max : "<<getMAX(n,l)<<endl;
    cout<<"The Min : "<<getMIN(n,l)<<endl;
    return 0;
}