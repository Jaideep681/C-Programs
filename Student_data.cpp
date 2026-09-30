#include <iostream>
using namespace std;
class student
{
  private:
    char name[20];
    long rollno;
    int marks[5];
    char grade;
    float total = 0;
    float percentage;
  public:
    void getdata()
    {
        cout << "Enter the name of the student: " << endl
             << "Enter roll number of the student: " << endl;
        cin >> name >> rollno;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Enter " << i << " subject marks: " << endl;
            cin >> marks[i];
        }
        for (int i = 1; i <= 5; i++)
        {
            total += marks[i];
        }
        percentage = total / 5;
        computedata();
    }
    void computedata()
    {
        if (percentage >= 90)
        {
            grade = 'A';
        }
        else if (percentage >= 75)
        {
            grade = 'B';
        }
        else if (percentage >= 60)
        {
            grade = 'C';
        }
        else if (percentage >= 45)
        {
            grade = 'D';
        }
    }
    void putdata()
    {
        cout << "Name: " << name << endl
             << "Roll number: " << rollno << endl
             << "Total marks: " << total << endl
             << "Percentage: " << percentage << endl
             << "Grade: " << grade << endl;
    }
};
int main()
{
    student s1/*, s2, s3*/;
    s1.getdata();
    /*s2.getdata();
    s3.getdata();*/
    cout << "This is Person 1 data: " << endl;
    s1.putdata();
    /*cout << "This is Person 2 data: " << endl;
    s2.putdata();
    cout << "This is Person 3 data: " << endl;
    s3.putdata();*/
    return 0;
}
