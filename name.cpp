#include<iostream>
#include<string>
using namespace std;

class body
{
    public:
    string name;
    string haircolour;
    float height;
    string colour;
    
    void input()
    {
       cout<<"\nEnter name: ";
       cin>>haircolour;
       cout<<"Enter hair colour: ";
       cin>>haircolour;
       cout<<"Enter height: ";
       cin>>height;
       cout<<"Enter colour: ";
       cin>>colour;
    }
    
    void output()
    {
       cout<<"\nBhai tu chutiya hai"<<endl;
       cout<<"Hair colour: "<<haircolour<<endl;
       cout<<"Height: "<<height<<endl;
       cout<<"Colour: "<<colour<<endl;
       
    }
    
};

int main()
{
    body mahesh;
    mahesh.input();
    mahesh.output();
    
    return 0;
}