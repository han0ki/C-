#include <iostream> 
using namespace std;

class test1{

    public:
     int n; 
     int show(){ 
     cout<<"test = "<<n<<endl;} };

int main(){

    test1 a,b;
    test1 *paq,*qap;
    paq=&a;
    qap=&b;
    paq->n=2022;
    (*qap).n=4011;
    paq->show();
    (*qap).show();
    return 0;
}

