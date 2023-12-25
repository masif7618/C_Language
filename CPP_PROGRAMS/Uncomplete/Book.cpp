#include<iostream>
using namespace std;

struct Book
{
    private : 
    int bookid;
    char title[20];
    float price;
    public :
    void displayBook(){
        cout<<bookid<<" "<<title<<" "<<price;
        cout<<endl;
    }
    void inputBook(){
        cout<<"Enter bookid, title and price : ";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;
    }
};

int main(){
    // struct Book b1={1,"C in depth", 225.0f};
    struct Book b2;
    b2.inputBook();
    // b1.displayBook();
    b2.displayBook();
    cout<<endl;
    return 0;
}
