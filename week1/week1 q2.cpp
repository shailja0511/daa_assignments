#include<iostream>
using namespace std;
int main()
{
    int n,key,j=1;
    cout<<"enter the size of an array and key element"<<endl;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0;
    int e=n;
    while(s<=e)
    { j++;
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            cout<<"YES"<<endl;
            cout<<"no. of comparison"<<j; 
            return 0;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<"NO"<<endl;
    cout<<"no. of comparison"<<j; 
return 0;
}