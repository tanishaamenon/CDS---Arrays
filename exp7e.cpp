# include <iostream>
using namespace std;
int main()
{
    int n = 0,i = 0;
    int num = 0, sum = 0, avg = 0;
    int a[n];
    cout<<"Enter size of array: ";
    cin>>n;
    for(i = 0; i < n;i++)
    {
        cout<<"Enter element no. "<< i+1 <<" of  the array: ";
        cin>>a[i];
    }
    cout<<endl;
    for(i = 0; i < n;i++)
    {
        sum = sum + a[i];
    }
    avg = sum/n;
    cout<<"Sum of elements: "<<sum<<endl;
    cout<<"Average of elements: "<<avg<<endl;


}