#include <iostream>
using namespace std;
class vehicle{
  public:
  int price;
  private:
  int maxspeed;
  protected:
  int warranty;
};
class car:public vehicle{
  public:
  int numgears;
  void setwarranty(int n)
  {
      warranty=n;
  }
  void display()
  {
      cout<<"numgears:"<<numgears<<endl;
      cout<<"price:"<<price<<endl;
      cout<<"warranty:"<<warranty;
  }
};
int main()
{
   car c1;
   c1.price=1000000;
   c1.numgears=4;
   c1.setwarranty(10);
   c1.display();
    return 0;
}