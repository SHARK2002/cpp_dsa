#include <iostream>

using namespace std;

//function for binary search
void binary_search(int arr[],int key,int n)
{

    int high=n,low=0,mid;

    while(high>=low)
    {
        mid=(high+low)/2;

        if(arr[mid]==key)
        {
            cout<<"Element found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high = mid-1;
        }

    }
}


int main()
{
    int arr[5]={1,2,3,4,5};

    binary_search(arr,5,5);
}