#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }
        void showData(){
            cout<<"\na="<<a<<" b="<<b;
        };
        Complex operator+(Complex c){
            Complex temp;
            temp.a = a+c.a;
            temp.b = b+c.b;
            return temp;
        }
        // Complex sub(Complex c){
        //     Complex temp;
        //     temp.a = a-c.a;
        //     temp.b = b-c.b;
        //     return temp;
        // }
        // Complex mul(Complex c){
        //     Complex temp;
        //     temp.a = a*c.a;
        //     temp.b = b*c.b;
        //     return temp;
        // }
        // Complex div(Complex c){
        //     Complex temp;
        //     temp.a = a/c.a;
        //     temp.b = b/c.b;
        //     return temp;
        // }
};


int main(){
    Complex b1,b2,c3;
    b1.setData(3,4);
    b2.setData(4,6);
    // b2.setData(5,6);
    c3 = b1+b2;
    // c4 = b1.sub(b2);
    // c5 = b1.mul(b2);
    // c6 = b1.div(b2);
    b1.showData();
    b2.showData();
    c3.showData();
    // c4.showData();
    // c4.showData();
    // c5.showData();
    // c6.showData();
    return 0;
}