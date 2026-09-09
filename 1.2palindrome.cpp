#include<iostream>
#include<string>
#include<cctype>  
using namespace std;
int main()
{
    string s;
    cout<<"Enter  a Word";
    cin>>s;
    cout<<"Length:"<<s.length()<<endl;
    cout<<"Upper:";
    for(char &c:s)
    cout<<(char)toupper(c);
    cout<<endl;
    bool pal=true;
    for(size_t i=0; i<s.size()/2; ++i)
    if(s[i]!=s[s.size()-1-i])
    {
        pal=false;
        break;

    }
    cout<<s<<(pal?"IS":"is NOT")<<"a palindrome\n";
    size_t pos=s.find("an");
    if(pos!=string::npos)
        cout<<"an found at index"<<pos<<endl;
    else
        cout<<"an not found\n";

    return 0;
}