#include <iostream>
using namespace std;

class Point{
    int x;
    int y;
public:
    Point(){
        x = 0;
        y = 0;
    }
    Point operator+=(Point& p){
        this->x += p.x;
        this->y += p.y;
        return *this;
    }
};

template<class T, int size>
class MyArray{
    T* arr = new T[size];
public:
    MyArray(){
        arr = nullptr;
    }
    ~MyArray(){
        delete[] arr;
    }
    T sum(){
        T sum = 0;
        for (int i; i < size; i++){
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    
}
