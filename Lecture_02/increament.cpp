#include<bits/stdc++.h>
using namespace std;
// void increment(int a){
//     a++;
//     return;
// }
// pass by pointer
void increament(int *a){
    (*a)++;
    return;
}
void increament(int &a){
    //(*a)++;
    a++;
    return;
    }
    


int main(){
    int i=11;
    increament(i);
    cout<<i<<endl;
}