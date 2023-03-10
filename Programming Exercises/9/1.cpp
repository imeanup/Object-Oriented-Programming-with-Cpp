#include <iostream>
using namespace std;

class Shape{
    protected:
        double x, y;
    public:
        void get_data(){
            cout << "Enter the value of x and y (i.e. x y): ";
            cin >> x >> y;
        }
        virtual void display_area(){
            cout << "Area is undefined for the base class Shape." << endl;
        }
};

class Triangle : public Shape{
    public:
        void display_area(){
            cout << "Area of triangle: " << (0.5 * x * y) << endl;
        }
};

class Rectangle: public Shape{
    public:
        void display_area(){
            cout << "Area of rectangle: " << (x*y) << endl;
        }
};

int main(){
    Shape *shape;
    char choice;
    do {
        cout << "Enter 'r' for rectangle, 't' for triangle: ";
        cin >> choice;
        if (choice == 'r') {
            shape = new Rectangle;
        } else if (choice == 't') {
            shape = new Triangle;
        } else {
            cout << "Invalid choice." << endl;
            continue;
        }
        shape->get_data();
        shape->display_area();
        delete shape;
        cout << "Enter 'y' to continue, any other key to exit: ";
        cin >> choice;
    } while (choice == 'y');
    return 0;
}

/*
Enter 'r' for rectangle, 't' for triangle: r       
Enter the value of x and y (i.e. x y): 3 4
Area of rectangle: 12
Enter 'y' to continue, any other key to exit: y
Enter 'r' for rectangle, 't' for triangle: r
Enter the value of x and y (i.e. x y): 3 4
Area of rectangle: 12
Enter 'y' to continue, any other key to exit: 0
*/