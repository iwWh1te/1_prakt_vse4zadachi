#include <iostream>
class Road{
   public:
   double length;  int width;};
using namespace std;
int main(){
  Road a;
  cout<<"Enter the width of the road\n";
  cin>>a.width;
  cout<<"Enter the length of the road\n";
  cin>>a.length;
  cout<<"Road width is "<<a.width<<"\n";
  cout<<"Road length is "<<a.length;}
