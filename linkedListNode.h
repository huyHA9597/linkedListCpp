#ifndef LINKEDLISTNODE_H
#define LINKEDLISTNODE_H

#include <iostream>

using namespace std;

template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type> *link;
};

#endif