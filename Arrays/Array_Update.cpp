#include<iostream>
using namespace std;

int update(int arr[], int n)
{
    arr[0] = 120;
    for(int i = 0; i < n; i++)
        cout<<arr[i];
    return 0;
}
int main()
{
    int arr[3] = {2,7,11};
    update(arr,3);
    for(int i = 0; i < 3; i++)
        cout<<arr[i];
}