#include <iostream>
using namespace std;

int main()
{
    int size,n,i,j=0;
    
    cout<<"how many values you want to insert in array : ";
    cin>>size;
    
    int a[size],b[size];
    
    cout<<"Enter the array values : ";
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    
    cout<<"Enter the n rotation to left side of the array : ";
    cin>>n;
    
    for(i=n;i<size;i++,j++){
        b[j]=a[i];
    }
    
    for(i=0;i<n;i++,j++){
        b[j]=a[i];
    }
    
    cout<<"left rotated array is ";
    for(i=0;i<size;i++){
        cout<<b[i]<<" ";
    }

    return 0;
}