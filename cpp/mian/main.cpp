#include <iostream>
#include <cstdio>

#include "../template/link_list.h"

int main() {
    using namespace std;
    LinkList<int> int_list;
    std::cout<<"empty linklist size="<<int_list.size()<<std::endl;
    int_list.append(7);
    std::cout<<"linklist after append size="<<int_list.size()<<std::endl;
    int_list.append(7);
    std::cout<<"linklist after append size="<<int_list.size()<<std::endl;
    return 0;
}