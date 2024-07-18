#include <iostream>
using namespace std;

int main() {
   int a;
   int b;
   cout<<"ARITHMETIC OPERATIONS"<<endl;
   cout<<"Enter the first number:";
   cin >> a;
   cout<<"Enter the second number:";
   cin >> b;
   int c = a+b;
   int d = a-b;
   int e = a*b;
   int f = a/b;
   int g = a%b;
   cout<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl;

   cout<<"RELATIONAL OPERATIONS"<<endl;
   bool h = a==b;
   bool i = a>b;
   bool j = a<b;
   bool k = a>=b;
   bool l = a<=b;
   bool m = a!=b;
   cout<<h<<endl<<i<<endl<<j<<endl<<k<<endl<<l<<endl<<m<<endl;

   cout<<"LOGICAL OPERATIONS"<<endl;
   bool n = l && m;
   bool o = i || j;
   bool p = ! h;
   cout<<n<<endl<<o<<endl<<p<<endl;
}
