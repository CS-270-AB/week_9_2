#include "node.hpp"

namespace CS270{

template <typename T>
Node<T>::Node(const T& data, Node<T>* next){
     this -> data = data;
     this -> next = next;
}

template <typename T>
T Node<T>::getData() const {
     return data;
}

template <typename T>
Node<T>*& Node<T>::getNext() {
    return next;
}

template <typename T>
void Node<T>::setData(const T& data){
    this -> data = data;
}

template <typename T>
void Node<T>::setNext(Node<T>* next){
    this -> next = next;
} 


}