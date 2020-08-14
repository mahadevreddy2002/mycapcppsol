//Author:Mahadev Hatti
//project (step-13) : Lets code arrays !


#include <iostream>

using namespace std;

int main()
{
    
    cout<<"Enter how many elements you want to input"<<endl;
    int n;
    cin>>n;
    int i;
    int arr[n];
    cout<<"Enter the "<<n<<" elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int *ptr;
    ptr = arr;
    cout<<"You entered :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }

    return 0;
}
