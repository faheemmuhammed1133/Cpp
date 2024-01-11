#include"iostream"
using namespace std;
namespace mynamespace
{
    int a;
    void inc(int x){
        x++;
        cout<<x;

    }
}
using namespace mynamespace;
namespace mynamespace1{
    int a;
}
int main(){
    a=10; //scope is mynamespace
    mynamespace1::a=20;
    inc(a);
    cout<<a<<mynamespace1::a;
}