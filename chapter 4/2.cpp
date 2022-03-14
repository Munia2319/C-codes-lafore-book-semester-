#include <iostream>
#include<iomanip>
using namespace std;
struct point
{
    int xCo;
    int yCo;
};

int main()
{
    point p1, p2, p3;
    cout << " \n Enter coordinates for point1: ";
    cin >> p1.xCo >> p1.yCo;
    cout << "\n Enter coordinates for point2: ";
    cin >> p2.xCo >> p2.yCo;
    p3.xCo = p1.xCo + p2.xCo;
    p3.yCo = p1.yCo + p2.yCo;
    cout << "\n Coordinates of (p1 + p2) are: "
         << p3.xCo << ", " << p3.yCo << endl;
    return 0;
}

