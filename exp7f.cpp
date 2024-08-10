#include <iostream>
#include <string>
using namespace std; 

int main()
{
    //printing a string
    string s;
    cout<<"Enter a word: ";
    cin>>s;
    cout<<"Word entered by user is: "<<s<<endl;
    cout<<endl;

    //concatenation of a string
    string s1,s2;
    cout<<"Enter a word: ";
    cin>>s1;
    cout<<"Enter another word: ";
    cin>>s2;
    cout<<"Concatenated word is: "<<s1+s2<<endl;
    cout<<endl;

    //printing string in reverse
    string s3;
    int i = 0;
    cout<<"Enter a word: ";
    cin>>s3;
    cout<<"Reverse String: ";
    for (i = s3.length()-1; i>=0; i-- )
    {
        cout<<s3[i];
    }
    cout<<endl;
    cout<<endl;

    //checking if a string is a palindrome.
    string s4,rs;
    int j = 0;
    cout<<"Enter a word: ";
    cin>>s4;
    for (j = s4.length()-1; j>=0; j-- )
    {
        rs = rs + s4[j];
    }
    if (rs == s4)
    {
        cout<<"It is a palindrome."<<endl;
    }
    else
    {
        cout<<"It is not a palindrome."<<endl;   
    }
    cout<<endl;
}