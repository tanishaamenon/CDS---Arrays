# include <iostream>
using namespace std;
int main()
{
    int n = 0,i = 0;
    int num = 0, co = 0, flag = 0;
    int a[n];
    cout<<"Enter size of array: ";
    cin>>n;
    for(i = 0; i < n;i++)
    {
        cout<<"Enter element no. "<< i+1 <<" of  the array: ";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Enter the number you want to check: ";
    cin>>num;
    for(i = 0; i < n;i++)
    {
        if(a[i] == num)
        {
            co++;
            flag++;

        }
    }
    if (flag == 0)
    {
        cout<<"Element was not found.";
    }
    else
    {
        cout<<"The element was found "<<co<<" times.";
    }

}