#include <iostream>
class Road{
   public:
   double length;  int width;};
using namespace std;
int main(){
  Road a;
  a.length=12.5;
  a.width=3;
  cout<<"Road width is "<<a.width<<"\n";
  cout<<"Road length is "<<a.length;}
