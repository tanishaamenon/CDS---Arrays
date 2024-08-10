# Experiment 7
**Aim:** <br>
Downloading and Installing VS Code, (Hello World and Calculator program)<br>
<br>
**Theory:** <br>
C++ arrays are collections of elements with mutually inclusive types which stay together in one contiguous memory space. They can be declared by presenting the type of these elements followed by square brackets that hold their numbers. In other words, arrays begin counting from zero; thus for instance character zero on array becomes the first one while second one becomes character one and so forth. C++ arrays have fixed sizes that must be determined at compile time.<br>
In C++, strings are managed through either C-style string or by utilizing the _string_ class which is included in the Standard Library. In this programming language, strings are made up of groups of characters terminated by a null character (‘\0’). Actions on C-styled strings are done by functions from C standard library like _strlen_, _strcpy_ and _strcat_.<br>
<br>
**Code:** <br>
a.<br> 
```
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
```

<br>

b. <br>
```
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
```
<br>

c. <br>
```
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
```
<br>


