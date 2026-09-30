#include <iostream>
using namespace std;
class person
{
  private:
    char name[20];
    char address[50];
    long phoneno;
    int age;

  public:
    void getdata()
    {
        cout << "Enter the name of the person: " << endl
             << "Enter address of the person: " << endl
             << "Enter phone number of the person: " << endl
             << "Enter age of the person: " << endl;
        cin >> name >> address >> phoneno >> age;
    }
    void putdata();
};
void person::putdata()
{
    cout << "Name: " << name << endl
         << "Address: " << address << endl
         << "Phone number: " << phoneno << endl
         << "Age: " << age << endl;
}
int main()
{
    person p1/*, p2, p3*/;
    p1.getdata();
    /*p2.getdata();
    p3.getdata();*/
    cout << "This is Person 1 data: " << endl;
    p1.putdata();
    /*cout << "This is Person 2 data: " << endl;
    p2.putdata();
    cout << "This is Person 3 data: " << endl;
    p3.putdata();*/
    return 0;
}
