#include <iostream> 
using namespace std;

class test1{
    public:
     int m;

     
int show(){
    cout<<"m = "<<this->m<<endl;}
    int gg(int m){
        this->m=m;
}


test1 change(){
    int k;
    k=m;
    }


};
   int main(){
       test1 a,b;
       a.gg(10);
       a.show();
       b.show();
       return 0;
   }


