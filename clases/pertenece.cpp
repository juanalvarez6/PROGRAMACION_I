#include <iostream>
#include <vector>

using namespace std;

bool pertenece(int a, vector<int> bp){
    for(int q = 0; q < bp.size(); q++)
        if(bp[q] == a) return true;
    return false;
}

int main(){
    cout << pertenece(2, {1,2,3,4}) << endl;
}