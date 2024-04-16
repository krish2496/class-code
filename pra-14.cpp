#include <iostream>
#include<iomanip>
using namespace std;
int a=0,j=0;
class lit{
private:
    long int id;
    string title;
public:
    void getdata()
    {   cout<<"enter a id:"<<endl;
        cin>>id;
        cout<<"enter a title:"<<endl;
        cin>>title;

    }
    void putdata()
    {
         cout<<id<<endl;
        cout<<title<<endl;
    }

};
class e_lit:public virtual lit
{
    private:
        string doi;
    public:
         void e_getdata()
         {

                cout<<"enter a doi:"<<endl;
                cin>>doi;
         }
         void e_putdata()
         {

        cout<<doi<<endl;
         }
};
class hb_lit:public virtual lit
{
private:
    int no_copy;
public:
           void hb_getdata()
           {

                    cout<<"enter a number of copy:"<<endl;
                    cin>>no_copy;
           }
             void hb_putdata()
             {

                 cout<<no_copy;

             }


};
class book :public e_lit,public hb_lit
{
    private:
        int isbn;
        char tb;
    public:
        void book_getdata()
        {       a++;
            getdata();
            cout<<"enter a isbn number:"<<endl;
            cin>>isbn;

             char c;
        cout<<"enter h for hard bound and for e bond enter e  :";
        cin>>c;
         if(c=='h')
        {
            tb = 'h';
            hb_getdata();
        }
        else
        {
            tb = 'e';
            e_getdata();
        }

        }
        void book_putdata()
        {

                  putdata();
                   cout<<"isbn no of book is :"<<isbn;
                  if (tb=='h')
             hb_putdata();
        else
             e_putdata();

        }
};
class mag:public e_lit,public hb_lit
{
     private:
         int issn;
         char tm;
     public:
        void mag_getdata()
        {
                    j++;
              getdata();

               cout<<"enter a issn number:"<<endl;
               cin>>issn;

               char c;
                cout<<"enter h for hard bound and for e bond enter e";
        cin>>c;
        if(c=='h')
        {
            tm='h';
             hb_getdata();
        }
        if(c=='e')
        {
            tm='e';
              e_getdata();
        }

        }
         void mag_putdata()
         {
                 putdata();
        cout<<"issn no of mag :"<<issn;
        if (tm=='h')
             hb_putdata();
        else
             e_putdata();

         }
};
 int main()
 {
     book x[15];
    mag y[15];
     int choise,a,j;
     char c,z;
     do{
     cout<<"enter 1: add book data"<<endl;
     cout<<"enter 2: add magazine data"<<endl;
     cout<<"enter 3: list all book"<<endl;
     cout<<"enter 4: list all magazine"<<endl;
     cout<<"enter a choise"<<endl;
     cin>>choise;
     switch(choise)
    {
    case 1:
            x[a].book_getdata();


          break;
    case 2:
                y[j].mag_getdata();

          break;
    case 3:

    for(int i=0;i<=a;i++)
    {

        x[i].book_putdata();
    }
    break;
    case 4:
  for(int i=0;i<=j;i++)
  {

        y[i].mag_putdata();
  }
  break;
    default:
        break;

    }
    cout<<"enter y or n:"<<endl;
    cin>>z;
     }while(z=='y'||z=='Y');
     return 0;

 }
