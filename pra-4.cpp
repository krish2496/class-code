//write a programm to clalulate area of rentangle and trigle ,square
//execute a programm with same return type and equal number of argument with different datatype
//execute the programm with different return type and equal number of argument
//execute the programm with different return type and equal number of argument of different datatype
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
float area(float a);
int area(int b,int c);
int area(int d,int e,int f);
int main()
{   float a;
    int b,c,d,e,f;
    cout<<"enter a circle raduis"<<endl;
    cin>>a;
    cout<<"circle area is :"<<area(a)<<endl;
    cout<<"enter a rentengel width"<<endl;
    cin>>b;
    cout<<"enter a rentengel hight"<<endl;
    cin>>c;
    cout<<"rentengle area is :"<<area(b,c)<<endl;
    cout<<"enter a cuboied hight"<<endl;
    cin>>d;
    cout<<"enter a cuboied lenght"<<endl;
    cin>>e;
    cout<<"enter a cuboied width"<<endl;
    cin>>f;
    cout<<"area of cuboied is:"<<area(d,e,f)<<endl;
}

float area(float a)
{   float area;
       area =3.14*a*a;
    return area;
}
int area(int b,int c)
{
    return((b*c));
}
int area(int d,int e,int f)
{
    return(d*e*f);
}
