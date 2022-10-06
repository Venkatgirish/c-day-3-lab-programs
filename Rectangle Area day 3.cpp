#include <iostream>
using namespace std;
class Rectangle
{
    int l,b;
  public:
    Rectangle(int x, int y)
    {
        l=x;
        b=y;
    }
    void area()
    {
        cout<<l*b<< endl;
    }

    void perimeter()
    {
        cout<<2*(l+b)<<endl;
    }
};

class Square:public Rectangle
{
 public:
    Square(int z):Rectangle(z,z)
    {}
};
int main()
{
    Rectangle r(8,4);
    Square s(4);
    r.area();
    r.perimeter();
    s.area();
    s.perimeter();
}
