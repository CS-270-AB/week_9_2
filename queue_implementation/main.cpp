#include <iostream>
#include "node.hpp"
#include "queue.hpp"
using namespace std;
using namespace CS270;
int main() { 
    queue<int> queue;
    queue.push(5);
    queue.push(10);
    queue.push(6);
    queue.push(7);

    while (queue.get_front() != NULL){
        cout << queue.pop() << endl;
    }

    return 0;
}