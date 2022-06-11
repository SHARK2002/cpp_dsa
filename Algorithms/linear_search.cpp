#include <iostream>

using namespace std;

//function for linear search
void linear_search(int *ptr,int key,int n)
{
    //looping through the array to find the element
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(*ptr==key)
        {
            flag=1;
            break;
        }
        ptr++;
        
    }
    if(flag==1)
    {
        cout<<"Element found"<<endl;

    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}



int main()
{
    int arr[5]={1,2,3,4,5};


    linear_search(arr,4,5);
}
