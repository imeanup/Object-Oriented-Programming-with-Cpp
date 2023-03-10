#include <iostream>
#include <vector>

using namespace std;

class Vector{
    private:
        vector<float> elements;
    public:
        Vector(vector<float> elems){
            elements = elems;
        }

        void setElements(int index, float values){
            elements[index] = values;
        }

        void scalarMultiply(float scalar){
            for (int i = 0; i < elements.size(); i++){
                elements[i] *= scalar;
            }
        }

        void display(){
            cout << "(";
            for (int i = 0; i < elements.size(); i++){
                cout << elements[i];
                if (i != elements.size() - 1){
                    cout << ", ";
                }
            }
            cout << ")" << endl;
        }
};

int main(){
    vector<float> elements = {10.5, 20.4, 30.7};
    Vector v(elements);
    /*
    // using complier before c++11 use: g++ 2.cpp -o 2, and replace the below code.
    vector<float> elements;
    elements.push_back(10.0);
    elements.push_back(20.0);
    elements.push_back(30.0);
    */
    v.display();

    v.setElements(1, 9.8);
    v.display();

    v.scalarMultiply(2.1);
    v.display();

    return 0;
}
/*
Write a class to represent a vector (a series of float values). Include member functions to perform the following tasks:
(a) To create the vector.
(b) To modify the value of a given element.
(c) To multiply by a scalar value
(d) To display the vector in the form (10, 20, 30, ...)
Write a program to test your class.

compling instruction using std c++ 11:
g++ -std=c++11 2.cpp -o 2
./2
(10.5, 20.4, 30.7)
(10.5, 9.8, 30.7)
(22.05, 20.58, 64.47)
*/