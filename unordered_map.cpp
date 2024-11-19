#include <bits/stdc++.h>
/*
    unorder map map adalah sebuh library bawaan dari bahasa cpp dan termasuk kedalah STL (Standar Template Library) bisa dibilang ini adalah fungsi 
    dari segi complexity unordered map memliki complexity O(1) sd O(n) akan bertambaha seiring dengan banyak bilangan prima  yang diesekusi 
*/
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_map<string, int> umap;
    umap["tescase1"] = 12;
    umap["lesson"] = 27;
    umap["scissors"] = 17;

    for (auto x: umap)
    {
        cout << x.first << " : " << x.second << endl;
    }
    
    return 0;
}
