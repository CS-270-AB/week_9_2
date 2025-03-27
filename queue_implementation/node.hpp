#ifndef NODE_HPP
#define NODE_HPP

#include <cstdlib>

namespace CS270{
  template <class T>
  class Node {
    private:
      T data;
      Node<T>* next;
    public:
      Node(const T& data, Node<T>* next);
  
      T getData() const;

      Node<T>*& getNext();

      void setData(const T& data);

      void setNext(Node<T>* next);
  };
}
#include "node.ipp"

#endif