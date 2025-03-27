#include <iostream>
#include "node.hpp"
#include "stack.hpp"
using namespace std;
using namespace CS270;

int main() { 
    stack<int> stack;
    stack.push(5);
    stack.push(10);
    stack.push(6);
    stack.push(7);


    cout << stack.size() << endl;
    return 0;
}