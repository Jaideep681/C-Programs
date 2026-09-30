#include <iostream>
using namespace std;

class Room
{
  private:
    double length;
    double width;
    double height;
    double costpersqft;
    int numdoors;
    double doorlen;
    double doorwidth;
    int numwindows;
    double winlen;
    double winwidth;

  public:
    Room(double l = 0, double w = 0, double h = 0, double cost = 0,
         int nd = 0, double dlen = 0, double dwidth = 0,
         int nw = 0, double winl = 0, double winw = 0)
    {
        length = l;
        width = w;
        height = h;
        costpersqft = cost;
        numdoors = nd;
        doorlen = dlen;
        doorwidth = dwidth;
        numwindows = nw;
        winlen = winl;
        winwidth = winw;
    }

    double calculatedoorArea()
    {
        return numdoors * doorlen * doorwidth;
    }

    double calculatewindowArea()
    {
        return numwindows * winlen * winwidth;
    }

    double calculateArea()
    {
        double wallArea = 2 * height * (length + width);
        return wallArea - calculatedoorArea() - calculatewindowArea();
    }

    double calculateCost()
    {
        return calculateArea() * costpersqft;
    }
};

int main()
{
    double length, width, height, costpersqft;
    int numdoors, numwindows;
    double doorlen, doorwidth, winlen, winwidth;

    cout << "Enter the length of the room: " << endl;
    cin >> length;

    cout << "Enter the width of the room: " << endl;
    cin >> width;

    cout << "Enter the height of the room: " << endl;
    cin >> height;

    cout << "Enter cost of painting per square foot: " << endl;
    cin >> costpersqft;

    cout << "Enter the number of doors in the Room: " << endl;
    cin >> numdoors;

    cout << "Enter the length of the Door: " << endl;
    cin >> doorlen;

    cout << "Enter the width of the Door: " << endl;
    cin >> doorwidth;

    cout << "Enter the number of windows in the Room: " << endl;
    cin >> numwindows;

    cout << "Enter the length of the Window: " << endl;
    cin >> winlen;

    cout << "Enter the width of the Window: " << endl;
    cin >> winwidth;

    Room myRoom(length, width, height, costpersqft, numdoors,
                doorlen, doorwidth, numwindows, winlen, winwidth);

    cout << "Total surface area to paint: " << myRoom.calculateArea() << " sq.ft" << endl;
    cout << "Total painting cost: " << myRoom.calculateCost() << endl;

    return 0;
}