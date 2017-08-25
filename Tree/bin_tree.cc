#include <iostream>
#include "bin_tree.hh"

using std::cout;
using std::endl;

void tree::r_insert(node* root, node* nd) {
    node*& target = (nd->key < root->key) ? root->left : root->right;
    if(target == nullptr) target = nd;
    else r_insert(target, nd);
}

void tree::r_print(node* nd) {
    cout << nd->key << " left: ";
    if (nd->left == nullptr) {
        cout << "npt";
    } else {
        cout << nd->left->key;
    }
    cout << " right: ";
    if (nd->right == nullptr) {
        cout << "npt" << endl;
    } else {
        cout << nd->right->key << endl;
    }
    //cout << " left: " << ((nd->left == nullptr) ? "npt" : (char*)nd->left->key);
    //cout << " right: " << ((nd->right == nullptr) ? "npt" : (char*)nd->right->key);
    if (nd->left != nullptr) r_print(nd->left);
    //cout << nd->key << endl;
    if (nd->right != nullptr) r_print(nd->right);
}

tree::tree(): guard(nullptr) {}

node* tree::insert(int key) {
    node* son = new node;
    son->key = key;

    if (guard == nullptr) {
        guard = son;
        return son;
    }
    r_insert(guard, son);
    return son;
}

void tree::print() {
    r_print(guard);
}

//friend std::ostream& operator << (std::ostream& fout, tree& tr);

/*std::ostream& operator << (std::ostream& fout, tree& tr) {
    fout <<
}*/
