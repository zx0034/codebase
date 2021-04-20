#include <iostream>
#include <cstdio>

#include "node.h"

template <typename T>
class LinkList
{
private:
    Node<T> *head;
    int length;
public:
    LinkList() {
        head = new Node<T>;
        head->_next = NULL;
        length = 0;
    };
    ~LinkList(){
        Node<T> *tmp = NULL;

    while(head) {
        tmp = head->_next;
        delete head;
        head = tmp;
    }
    };

    bool clear(){
        ~LinkList();
    LinkList();
    };
    int size(){
        return length;
    };
    bool append(T const &t){
        Node<T> *cur = head; 
    while(cur != NULL && cur->_next != NULL) {
        cur = cur->_next;
    }
    Node<T> *node = new Node<T>;
    node->_next = NULL;
    node->_val = t;
    cur->_next = node;
    length++;
    return true;
    };
};

