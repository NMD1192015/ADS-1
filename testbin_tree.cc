#include "bin_tree.hh"

int main() {
    tree test;
    test.insert(3);
    test.insert(2);
    test.insert(0);
    test.insert(4);
    test.insert(1);
    test.print();
}

//////////////////////////
//          3
//        2   4
//      0
//        1
