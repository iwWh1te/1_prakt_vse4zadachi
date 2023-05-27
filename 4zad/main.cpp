#include <iostream>
#include <string>
class TBook{
   public:
   std::string Author,Name;
   int Count;};
using namespace std;
int main(){
   TBook a;
   cout<<"Enter the author of the book\n";
   getline(std::cin,a.Author);
   cout<<"Enter the name of the book\n";
   getline(std::cin,a.Name);
   cout<<"Enter the count of the books\n";
   cin>>a.Count;
   cout<<"The author of the book is "<<a.Author<<"\n";
   cout<<"The name of the book is "<<a.Name<<"\n";
   cout<<"The count of the books is "<<a.Count<<"\n";
}