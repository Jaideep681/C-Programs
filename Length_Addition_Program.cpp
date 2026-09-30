//LENGTH ADDING PROGRAM
#include <iostream>
using namespace std;
class complex{
    private:
        int feet,inch;
    public:
        void length(){
            cout<<"Enter feet part: ";
            cin>>feet;
            cout<<"Enter inch part: ";
            cin>>inch;
        }
        void display(){
            cout<<feet<<" feet "<<inch<<" inches"<<endl;
        }
        friend complex length_add(complex,complex);
};
complex length_add(complex x,complex y){
    complex temp;
    temp.feet=x.feet+y.feet;
    temp.inch=x.inch+y.inch;
    if(temp.inch>=12){
        temp.feet+=temp.inch/12;
        temp.inch%=12;
    }
    return temp;
}
int main() {
    complex t1,t2,t3;
    cout<<"Enter 1st length: "<<endl;
    t1.length();
    cout<<"Enter 2nd length: "<<endl;
    t2.length();
    t3=length_add(t1,t2);
    cout<<"Your length addition: ";
    t3.display();
    return 0;
}