#include<iostream>
using namespace std;
int main()
{
    int n,key,j=0;
    cout<<"enter the size of an array and key element"<<endl;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        j++;
       if(arr[i]==key)
       {
           cout<<"YES"<<endl;
           cout<<"no. of com[arison "<<j<<endl;
           return 0;
       }
    }
    cout<<"NO"<<endl;
    return 0;

}