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
        cout<<"Enter element no. "<< i <<" of  the array: ";
        cin>>a[i];

    }
    cout<<endl;
    cout<<"The array defined by the user: "<<endl;
    cout<<"{";
    for(i = 0; i < n;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<"}";
    cout<<endl;

    return 0;
}