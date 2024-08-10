# include <iostream>
using namespace std;
int main()
{
    int n = 0,i = 0;
    int a[n];
    int num = 0, maxi = 0, mini = a[0];
    
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
        if(a[i] > maxi)
        {
            maxi = a[i];
        }
        if(a[i] < mini)
        {
            mini = a[i];
        }
    }
    cout<<"Maximum value amongst the elements are: "<<maxi<<endl;
    cout<<"Minimum value amongst the elements are: "<<mini<<endl;


}