//COMPLEX NUMBER PROGRAM
#include <iostream>
using namespace std;
class complex{
    private:
        int real,imag;
    public:
        void read(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>imag;
        }
        void display(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        friend complex complex_add(complex,complex);
};
complex complex_add(complex x,complex y){
    complex temp;
    temp.real=x.real+y.real;
    temp.imag=x.imag+y.imag;
    return temp;
}
int main() {
    complex c1,c2,c3;
    cout<<"Enter 1st complex: "<<endl;
    c1.read();
    cout<<"Enter 2nd complex: "<<endl;
    c2.read();
    c3=complex_add(c1,c2);
    cout<<"Your complex answer: ";
    c3.display();
    return 0;
}