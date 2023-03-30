#include <iostream>

using namespace std;
enum  class size { XXS = 34, XS = 36, S = 38, M = 40, L = 42, XL = 46, XXL = 50, XXXL = 52, XXXXL = 54 };
int main()
{
   size item1{ size::M };
   cout << static_cast<int>(item1)<<endl;
   cout<<endl;
   size item2{size::L};
   switch(item2)
   {
       case size::XXS:
       case size::XS:
       case size::S:cout<<"Small size"<<endl;break;
       case size::M:
       case size::L:cout<<"Medium size"<<endl;break;
       case size::XL:
       case size::XXL:cout<<"Large size"<<endl;break;
       case size::XXXL:
       case size::XXXXL:cout<<"Extra large size"<<endl;break;
   }
   
}