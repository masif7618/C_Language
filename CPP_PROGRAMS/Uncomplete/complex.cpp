#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setData(int x, int y){ 
        a = x;
        b = y;
    }
    void showData();
    Complex add(Complex);
};

void Complex:: showData(){
        cout<<"\n"<<"a="<<a<<" b="<<b;
}

Complex Complex:: add(Complex c){
        c.a = a+c.a;
        c.b = b+c.b;
        return c;
}

int main(){
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3 = c1.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();
    cout<<endl;
    return 0;
}