#include <iostream>
using namespace std;
class address
{
  private:
    char flat_name[5];
    int floor;
    char society[50];
    char city[10];
    char state[10];
    int pincode;

  public:
    void get_address()
    {

        cout << "Enter the details of the address:-" << endl;
        cout << "Enter the flat name of the address: " << endl;
        cout << "Enter the floor of the address: " << endl;
        cout << "Enter the society of the address: " << endl;
        cout << "Enter the city of the address: " << endl;
        cout << "Enter the state of the address: " << endl;
        cout << "Enter the pincode of the address: " << endl;
        cin >> flat_name >> floor >> society >> city >> state >> pincode;
    }
    void put_address()
    {
        cout << "Enter the flat name of the address: " << flat_name << endl;
        cout << "Enter the floor of the address: " << floor << endl;
        cout << "Enter the society of the address: " << society << endl;
        cout << "Enter the city of the address: " << city << endl;
        cout << "Enter the state of the address: " << state << endl;
        cout << "Enter the pincode of the address: " << pincode << endl;
    }
};
class person
{
  private:
    char name[20];
    int age;
    char gender[20];
    address *aob; //FORWARD REFERENCING
  public:
    void get_data(address *temp)
    {
        aob = temp;
        cout << "Enter the details of person:-" << endl;
        cout << "Enter the name of person: " << endl;
        cout << "Enter the age of person: " << endl;
        cout << "Enter the gender of person: " << endl;
        cin >> name >> age >> gender;
        aob->get_address();
    }
    void put_data()
    {
        cout << "Enter the name of the person: " << name << endl;
        cout << "Enter the age of the person: " << age << endl;
        cout << "Enter the gender of the person: " << gender << endl;
        cout << "Enter the address of the person: ";
        aob->put_address();
    }
};

int main()
{
    person p1;
    address al;
    p1.get_data(&al);
    cout << "This is person 1 data: " << endl;
    p1.put_data();
    return 0;
}