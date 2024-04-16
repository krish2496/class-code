#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class student{
    private:
char student_id[8];
string student_name;
int semester;
    public:
        void getdata_stu()
        {
             cout<<"Enter Details Of Student"<<endl<<"Student ID : ";
    cin>>student_id;

    cout<<"Student Name : ";
    cin>>student_name;

    cout<<"Semester : ";
    cin>>semester;
    fflush(stdin);

        }
        void putdata_stu()
        {
             cout<<"Student ID : "<<student_id<<endl;
            cout<<"student name :"<<student_name<<endl;
    cout<<"Semester : "<<semester<<endl;
    cout<<setw(38)<<"Theory"<<setw(15)<<"Practical"<<endl;
        }

};
class result {
private:
 string subject_name[3];
int subject_credit[3];
int th_marks[3],th_credit[3];
int pr_marks[3],pr_credit[3];
string th_grade[10];
string pr_grade[10];
float sgpa;
public:
   void getdata_result()
   {
         for(int i=0;i<3;i++)
    {
     cout<<"Enter Name of subject "<<i+1<<" : ";
     getline(cin,subject_name[i]);
     fflush(stdin);
    cout<<"Enter th_Credit : ";
     cin>>th_credit[i];
     cout<<"Enter pr_Credit : ";
     cin>>pr_credit[i];
     fflush(stdin);
    }

    for(int i=0; i<3; i++)
    {
            cout<<"Enter Marks for Subject "<<i+1<<" : "<<endl;
            cout<<"Theory : ";
            cin>>th_marks[i];
            fflush(stdin);
            cout<<"Practical : ";
            cin>>pr_marks[i];
            fflush(stdin);
    }
   }
   void putdata_result()
   {
          for(int i=0; i<3; i++)
    {
        cout<<left<<setw(35)<<subject_name[i];
        if(th_marks[i]>=80)
            {
                cout<<setw(12)<<"AA";
                th_grade[i]=10;
            }
            else if(th_marks[i]>=73)
            {
                cout<<setw(12)<<"AB";
                th_grade[i]=9;
            }
            else if(th_marks[i]>=66)
            {
                cout<<setw(12)<<"BB";
                th_grade[i]=8;
            }
            else if(th_marks[i]>=60)
            {
                cout<<setw(12)<<"BC";
                th_grade[i]=7;
            }
            else if(th_marks[i]>=55)
            {
                cout<<setw(12)<<"CC";
                th_grade[i]=6;
            }
            else if(th_marks[i]>=50)
            {
                cout<<setw(12)<<"CD";
                th_grade[i]=5;
            }
            else if(th_marks[i]>=45)
            {
                cout<<setw(12)<<"DD";
                th_grade[i]=4;
            }
            else
            {
                cout<<setw(12)<<"FF";                           //this one
                th_grade[i]=0;
            }
             cout<<endl;
        }

               for(int i=0; i<3; i++)
            {
        if(pr_marks[i]>=80)
            {
                cout<<setw(12)<<"AA";
                pr_grade[i]=10;
            }
            else if(pr_marks[i]>=73)
            {
                cout<<setw(12)<<"AB";
                pr_grade[i]=9;
            }
            else if(pr_marks[i]>=66)
            {
                cout<<setw(12)<<"BB";
                pr_grade[i]=8;
            }
            else if(pr_marks[i]>=60)
            {
                cout<<setw(12)<<"BC";
                pr_grade[i]=7;
            }
            else if(pr_marks[i]>=55)
            {
                cout<<setw(12)<<"CC";
                pr_grade[i]=6;
            }
            else if(pr_marks[i]>=50)
            {
                cout<<setw(12)<<"CD";
                pr_grade[i]=5;
            }
            else if(pr_marks[i]>=45)
            {
                cout<<setw(12)<<"DD";
                pr_grade[i]=4;
            }
            else
            {
                cout<<setw(12)<<"FF";
                pr_grade[i]=0;
            }
             cout<<endl;
        }

        void calu();
   }
 void calu ()
 {
     int sum1,sum2;
     for(int i=0;i<2;i++)
        {
     sum1=sum1+((float)th_grade[i]*th_credit[i]/th_credit[i]+pr_credit[i]);
     sum2=sum2+((float)pr_grade[i]*pr_credit[i]/th_credit[i]+pr_credit[i]);
        }
        sgpa=(sum1+sum2)/2;
        cout<<sgpa;
 }
};

int main()
{
student a;
result b;
a.getdata_stu();
a.putdata_stu();
b.putdata_result();
b.putdata_result();
return 0;
}



