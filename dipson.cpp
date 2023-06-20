#include<iostream>
using namespace std;
namespace first{
    int x=5;
    int y=10;
}
namespace second{
    float x=15.5;
    float y=20.5;
}
int main(){

    using namespace first;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<first::y<<endl;
    cout<<second::x<<endl;
    return 0;
}