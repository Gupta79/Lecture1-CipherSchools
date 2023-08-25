#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> numbers {1, 2, 3, 4, 5};

    vector<int>::iterator itr = numbers.begin();
    cout << "First Element: " << *itr << "  "<<endl;

    itr = numbers.end() - 1;
    cout << "Last Element: " << *itr;

    return 0;  
}
