//TIME ADDING PROGRAM
#include <iostream>
using namespace std;
class complex{
    private:
        int hour,min;
    public:
        void time(){
            cout<<"Enter hour part: ";
            cin>>hour;
            cout<<"Enter minute part: ";
            cin>>min;
        }
        void display(){
            cout<<hour<<" hr "<<min<<" min"<<endl;
        }
        friend complex time_add(complex,complex);
};
complex time_add(complex x,complex y){
    complex temp;
    temp.min=x.min+y.min;
    temp.hour=x.hour+y.hour;
    if(temp.min>=60){
        temp.hour+=temp.min/60;
        temp.min%=60;
    }
    return temp;
}
int main() {
    complex t1,t2,t3;
    cout<<"Enter 1st time: "<<endl;
    t1.time();
    cout<<"Enter 2nd time: "<<endl;
    t2.time();
    t3=time_add(t1,t2);
    cout<<"Your addition time: ";
    t3.display();
    return 0;
}