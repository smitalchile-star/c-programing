#include<iostream>
#include<string>
using namespace std;
class Student
{
protected:
  int rollNo;
  string name;
  string studentclass;
public:
  void getData()
  {
    cout << "enter Roll number:";
    cin >> rollNo;
    
    cout << "enter Name:";
    cin >> name;
    
    cout << "enter class:";
    cin >> studentclass;
    }
  };
class Student_Marks:public Student
{
protected:
  int marks[5];
  int totalMarks;
public:
  void getMarks()
  {
     totalMarks=0;
     cout<<"\n enter marks for 5 subject:\n";
     for(int i=0; i<5; i++)
     {
       cout << "subject" << i+1 <<":";
       cin >> marks[i];
       totalMarks += marks[i];
       }
    }
};
class Student_percentage:public Student_Marks
{
private:
    float percentage;
public:
    void calculate_percentage()
    {
      percentage = (totalMarks / 500.0)*100;
    }
    
    void display_Info()
    {
    cout << "\n Student Information \n";
    cout <<"Roll Number:" << rollNo << endl;
    cout << "Name:" << name << endl;
    cout << "Class:" << studentclass <<  endl;
    cout <<"\n Marks:\n";
    for(int i=0; i<5; i++)
    {
      cout<<"Subject" <<i+1 <<":" << marks[i] << endl;
      }
    cout << "\n Total Marks:"<< totalMarks <<"/500" << endl;
    cout << "percentage:"<< percentage <<"%" << endl;
    }
};
int main()
{
   Student_percentage student;
   
   student.getData();
   student.getMarks();
   student.calculate_percentage();
   student.display_Info();
   return 0;
}
      
