#include<iostream>
using namespace std;

struct Book
{
    int bookid;
    char title[20];
    float price;

    void inputBook()
    {
        cout<<"Enter bookid, title and price : ";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;
    }

    void displayBook()
    {
        cout<<endl;
        cout<<bookid<<" ";
        cout<<title<<" ";
        cout<<price<<" ";
        cout<<endl;
    }
};

// struct Book inputBook(){
//     struct Book b;
//     cout<<"Enter bookid, title and price : ";
//     cin>>b.bookid;
//     cin.ignore();
//     cin.getline(b.title,20);
//     cin>>b.price;
//     return b;
// }




int main()
{
    Book b1 = {1, "C in Depth", 225.0f};
    Book b2;
    b2.inputBook();
    b1.displayBook();
    b2.displayBook();
    return 0;
}