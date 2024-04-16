#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
static int count=0 ;
class circle
{   private:
    int r;


    public:
        circle ()
        {   r=1;
        count++;
        }
        circle (int r1)
        {
            r = r1;
            count++;
        }
        circle(circle & c)
        {

            r = c.r;
            count++;
        }
        void display()
        {
            cout<<"circle with radius r: "<<r<<"has area :"<<3.14 *r * r<<endl;
        }
        ~circle()
        {
            cout<<"one object is deleted"<<endl;
            count--;
            object();
        }
        void object()
        {
            cout<<"total active object is :"<<count<<endl;
        }
};
int main()
{       circle c1;
        c1.display();
        circle c2(20);
        c2.display();
        circle c3(c1);
        c3.display();

return 0;

}


