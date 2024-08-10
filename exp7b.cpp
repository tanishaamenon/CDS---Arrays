# include <iostream>
using namespace std;
int main()
{
    int n = 0,i = 0;
    int a[n];
    cout<<"Enter size of array: ";
    cin>>n;
    for(i = 0; i < n;i++)
    {
        cout<<"Enter element no. "<< i+1 <<" of  the array: ";
        cin>>a[i];

    }
    cout<<endl;
    cout<<"The array defined by the user: "<<endl;
    for(i = 0; i < n;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;

    cout<<"The array reversed: "<<endl;
    cout<<"{ ";
    for(i = n-1 ; i > -1 ;i--)
    {
        cout<<a[i]<<" ";

    }
    cout<<"}";
    cout<<endl;

    return 0;
}