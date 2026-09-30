#include <iostream>
using namespace std;
class bankaccount
{
  private:
    char name[20];
    double balance;
    char address[50];
    long phoneno;
    char email[50];

  public:
    void getdata()
    {
        cout << "Enter the name of the account holder name: " << endl
             << "Enter balance of the account holder name: " << endl
             << "Enter address of the account holder name: " << endl
             << "Enter phone number of the account holder name: " << endl
             << "Enter Email-ID of the account holder name: " << endl;
        cin >> name >> balance >> address >> phoneno >> email;
    }
    void checkbalance()
    {
        cout << "Current Amount: " << balance;
    }
    void depositdata()
    {
        double amount1;
        cout << "Enter amount to deposit: " << endl;
        cin >> amount1;
        balance += amount1;
        cout << "After deposit of amount, your current balance is: " << balance << endl;
    }
    void withdrawldata()
    {
        double amount2;
        cout << "Enter amount for withdrawl: " << endl;
        cin >> amount2;
        if (amount2 > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else if (amount2 <= 0)
        {
            cout << "Wrong withdrawl amount" << endl;
        }
        balance -= amount2;
        cout << "Withdrawl amount: " << amount2 << endl;
        cout << "New current balance: " << balance << endl;
    }
    void displayaccountdata()
    {
        cout << "Name: " << name << endl
             << "Address: " << address << endl
             << "Phone number: " << phoneno << endl
             << "Email-ID: " << email << endl;
    }
};
int main()
{
    bankaccount b1 /*, b2, b3*/;
    b1.getdata();
    /*b2.getdata();
    b3.getdata();*/
    cout << "This is Person 1 data: " << endl;
    b1.displayaccountdata();
    b1.depositdata();
    b1.withdrawldata();
    /*cout << "This is Person 2 data: " << endl;
    b2.depositdata();
    b2.withdrawldata();
    b2.displayaccountdata();
    cout << "This is Person 3 data: " << endl;
    b3.depositdata();
    b3.withdrawldata();
    b3.displayaccountdata();*/
    return 0;
}
