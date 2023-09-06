#include <iostream>
using namespace std;
    
 int main(){
    string str;
    cout<<"Enter the datatype:";
    cin>>str;
    
    if(str =="Character"){
         cout<< sizeof(char)<<"bytes"; 
    }
    else if(str=="Integer"){
        cout << sizeof(int)<<"bytes";
    }
    else if(str =="Float"){
        cout<< sizeof(float)<<"bytes";
    }
    else if(str== "Long"){
       cout<< sizeof(long)<<"bytes";
    }
    else if(str =="Double"){
        cout<< sizeof(double)<<"bytes"; 
    }
}
