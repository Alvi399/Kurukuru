#include <iostream>

//mengabungkan dua hetergenous/berbeda variabel menjadi satu unit
int main(int argc, char const *argv[])
{
    std::pair<std::string, double> prop;
    prop.first = "Alvi";
    prop.second = 18.2;
    
    std::cout << prop.first << std::endl;
    std::cout << prop.second << std::endl;
    return 0;
}
