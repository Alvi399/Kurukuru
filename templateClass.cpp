#include <iostream>

using namespace std;
template <typename T>

bool sort( T a, T b) {
    return (a > b);
}

template <typename T> class Array {
    private:
        T *ptr;
        int size;
    public:
        Array(T arr[], int s);
        void Print();
};

template <typename T> Array <T> ::Array(T arr[], int s) {
    
}
int main(int argc, char const *argv[])
{
    bool steatment1 = sort(1,3);
    bool steatment2 = sort('a', 'b');
    bool steatment3 = sort(9.0,  8.7);
    cout << steatment1 << endl;
    cout << steatment2 << endl;
    cout << steatment3 << endl;
    return 0;
}
