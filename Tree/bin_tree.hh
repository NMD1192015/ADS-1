#ifndef BIN_TREE_HH_INCLUDE_GUARD
#define BIN_TREE_HH_INCLUDE_GUARD

struct node {
    int key;
    node* left;
    node* right;
};

class tree {
private:
    node* guard;

    void r_insert(node* root, node* nd);
    void r_print(node* nd);

public:
    tree();
    node* insert(int key);
    void print();
    //friend std::ostream& operator << (std::ostream& fout, tree& tr);
};

#endif //BIN_TREE_HH_INCLUDE_GUARD
