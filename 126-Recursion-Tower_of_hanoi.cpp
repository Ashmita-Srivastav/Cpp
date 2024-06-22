#include<bits/stdc++.h>

using namespace std;
void tower_hanoi(int n, char source, char auxi, char dest){
    if(n==0){
        return;
    }
    tower_hanoi(n-1,source,dest,auxi);
    cout<<"Move disk "<< n <<" from "<< source <<" to "<< dest <<endl;
    tower_hanoi(n-1,auxi,source,dest);
} 
int main(){
    int n;
    cout<<"Enter the number of disks:";
    cin>>n;
    tower_hanoi(n,'A','B','C');
}