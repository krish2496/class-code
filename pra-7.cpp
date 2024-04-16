#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class complex{
    private:
        int x,y;
    public:
        complex()
        {
            x=0;
            y=0;
        }
        complex(int x1,int y1)
        {
            x=x1;
            y=y1;
        }
        complex operator+(complex &h )
        {
            complex temp;
            temp.x=x+h.x;
            temp.y=y+h.y;
            return temp;
        }
        complex operator-(complex &h)
         {
            complex temp;
            temp.x=x-h.x;
            temp.y=y-h.y;
            return temp;
        }
        complex operator!()
        {
            complex temp;
            temp.x=-x;
            temp.y=-y;
            return temp;
        }
        friend  complex operator* ( complex &k,complex &h );
       friend  complex operator/ ( complex &k,complex &h);
       void display()
       {
           cout<<x<<"+"<<y<<endl;
       }

};
      complex operator* (complex &k,complex &h)
     {
         complex temp;
         temp.x=(k.x*h.x)-(k.y*h.y);
         temp.y=(k.x*h.y)-(k.y*h.x);
         return temp;
     }
        complex operator/ (complex &k,complex &h )
        {
          complex temp;
          temp.x=(((k.x*h.x)+(k.y*h.y))/(((h.x)*(h.x))+((h.y)*(h.y))));
          temp.y=(((k.y*h.x)-(k.x*h.y))/(((h.x)*(h.x))+((h.y)*(h.y))));
          return temp;

        }

int main()
{
    int a,b,choise;
    complex c1(10,20),c2(3,-7),c3,c4;
    c1.display();
    c2.display();
    cout<<"enter a choise"<<endl;
    cin>>choise;
    switch(choise)
    {
    case 1:
        c3=c1+c2;
    c3.display();
    break;
    case 2:
        c3=c1-c2;
    c3.display();
     break;
    case 3:
        c3= c1*c2;
        c3.display();
         break;
         case 4:
         c3= c1/c2;
        c3.display();
        break;
         case 5:
            c3=!c1;
            c3.display();
            c4=!c2;
            c4.display();
         break;

    }



}
