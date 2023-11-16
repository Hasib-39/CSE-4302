#include <iostream>
using namespace std;
class Product
{
protected:
    string title;
    int id;
    static int no_of_product;

public:
    virtual void displayInfo() const = 0;
    int get_no_of_products() { return no_of_product; }
    bool operator<(Product const &obj) const;
    bool operator>(Product const &obj) const;
    bool operator==(Product const &obj) const;
};

bool Product::operator<(Product const &obj) const
{
    return (id < obj.id);
}
bool Product::operator>(Product const &obj) const
{
    return (id > obj.id);
}
bool Product::operator==(Product const &obj) const
{
    return (id == obj.id);
}

class Book : public Product
{
private:
    string author;

public:
    Book(string _title, string _author)
    {
        title = _title;
        author = _author;
        id = ++no_of_product;
    }
    void displayInfo() const override
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ID: " << id << endl;
    }
};
class DVD : public Product
{
private:
    string director;

public:
    DVD(string _title, string _director)
    {
        title = _title;
        director = _director;
        id = ++no_of_product;
    }
    void displayInfo() const override
    {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "ID: " << id << endl;
    }
};

int Product::no_of_product = 0;
int main()
{
    Product *p[10];

    Book b1("hello", "bye");
    Book b2 = b1; // copy constructor
    Book b3("abul", "kabul");
    b3 = b2;
    b1.displayInfo();
    b2.displayInfo();
    b3.displayInfo();
    // this is not suitable because 3 different objects are
    // consisting of the same id which is not ok
    int i = 0;
    while (1)
    {
        cout << "Enter choice:" << endl;
        cout << "1. add dvd" << endl;
        cout << "2. add book" << endl;
        cout << "3. display all product" << endl;
        cout << "4. exit" << endl;
        int c;
        cin >> c;
        cout << endl;
        if (c == 1)
        {
            cout << "Product no." << p[0]->get_no_of_products() + 1 << endl;
            cout << "Enter DVD info:" << endl;
            cout << "Title: ";
            string t;
            cin >> t;
            cout << "Director: ";
            string d;
            cin >> d;
            p[i] = new DVD(t, d);
            i++;
            cout << endl;
        }
        else if (c == 2)
        {
            cout << "Product no." << p[0]->get_no_of_products() + 1 << endl;
            cout << "Enter Book info:" << endl;
            cout << "Title: ";
            string t;
            cin >> t;
            cout << "Author: ";
            string d;
            cin >> d;
            p[i] = new Book(t, d);
            i++;
            cout << endl;
        }
        else if (c == 3)
        {
            int x = p[0]->get_no_of_products();
            cout << endl;
            for (int i = 0; i < x; i++)
            {
                cout << "Product no." << p[0]->get_no_of_products() << endl;
                p[i]->displayInfo();
                cout << endl;
            }
            cout << endl;
        }
        else if (c == 4)
        {
            break;
        }
        else
        {
            cout << "invalid input" << endl;
        }
    }

    cout << "Total no of products: " << p[0]->get_no_of_products() << endl;
}