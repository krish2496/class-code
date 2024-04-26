#include <iostream>
#include<iomanip>
using namespace std;
int x=0,y=0;
class product{
protected:
    int id;
    string name,manufacture;
    float price;
public:
     product( int id,string name,string manufacture,float price;)
    {
        cout<<"enter a product id:"<<endl;
        cin>>id;
        cout<<"enter a product name:"<<endl;
        cin>>name;
        cout<<"enter a product manufacture:"<<endl;
        cin>>manufacture;
        cout<<"enter a product price:"<<endl;
        cin>>price;
    }
    virtual void putdata()=0;
};
class smartwatch:public product
{
protected:
    float dial_size;
public:
     smartwatch()
    {    x++;
         product();
        cout<<"enter a dial size:"<<endl;
        cin>>dial_size;
    }
    void putdata()
    {

        cout<<id<<" :"<<name<<" :"<<manufacture<<" :"<<price<<" :"<<dial_size<<" :"<<endl;
    }
};
class bedsheet:public product
{
    protected:
        float width,height;
    public:
        bedsheet()
        {       y++;
             product();
             cout<<"enter a width and height:"<<endl;
             cin>>width>>height;
        }
        void putdata()
        {
             cout<<id<<" :"<<name<<" :"<<manufacture<<" :"<<price<<" :"<<width<<" :"<<height<<endl;
        }

};
int main()
{           smartwatch a[6];
              bedsheet b[6];
        int choise;

        cout<<"1. smart watch menu\n 2. bedsheet menu:"<<endl;
        cout<<"enter a choise"<<endl;
        cin>>choise;
        switch(choise)
        {
        case 1:
                   a[x].smartwatch();

                   for(int i=0;i<=x;i++)
                    {
                   a[x].putdata();
                   }

                   break;
        case 2:
                    b[y].bedsheet();

                      for(int i=0;i<=y;i++)
                        {
                    b[y].putdata();
                      }

                             break;
        }


    return 0;

}
