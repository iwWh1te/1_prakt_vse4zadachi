#include <iostream>
class Road{
   public:
   double length;  int width;};
using namespace std;
int main(){
  Road a;
  FILE *fIn;
  fIn=fopen("input.txt","r");
  fscanf(fIn,"%lf %d",&a.length,&a.width);
  fclose(fIn);
  cout<<"Road width is "<<a.width<<"\n";
  cout<<"Road length is "<<a.length;}
