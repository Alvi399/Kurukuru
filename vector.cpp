#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> numbers = {1,2,3,4,5,6};

    //insert elemen 
    numbers.push_back(12);
    numbers.insert(numbers.begin(), 30);
    // cout << numbers.at(0) << endl;
    // cout << numbers.at(6) << endl;
    // cout << numbers.at(7) << endl;
    // for (int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers.at(i);
    //     cout << numbers[i];
    // }

    //deleting element 
    vector <char> himpunan = {'a','b','b','c','b','b','c'};
    himpunan.pop_back();
    // for (int i = 0; i < himpunan.size(); i++)
    // {
    //     cout << himpunan[i];
    // }
    himpunan.erase(find(himpunan.begin(), himpunan.end(),'a'));
    // for (int i = 0; i < himpunan.size(); i++)
    // {
    //     cout << himpunan[i];
    // }

    //acsess 
    char awal = himpunan.front();
    char akhir = himpunan.back();
    cout << awal << endl;
    cout << akhir << endl;

    //swap 
    vector<int> other_numbers = {10, 20, 30};
    numbers.swap(other_numbers);
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // resize
    numbers.resize(10, 100);
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // check if empty
    if (numbers.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        cout << "Vector is not empty" << endl;
    }

    // clear the vector
    numbers.clear();
    if (numbers.empty()) {
        cout << "Vector is empty after clear" << endl;
    } else {
        cout << "Vector is not empty after clear" << endl;
    }

    // reserve capacity
    numbers.reserve(20);
    cout << "Capacity after reserve: " << numbers.capacity() << endl;

    // shrink to fit
    numbers.shrink_to_fit();
    cout << "Capacity after shrink_to_fit: " << numbers.capacity() << endl;
}
