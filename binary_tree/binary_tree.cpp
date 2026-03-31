#include <iostream>

using namespace std;

struct Node {
    char data;
    double freq;
    Node *left, *right;

    Node(char d, double f){
        data = d;
        freq = f;
        left = nullptr;
        right = nullptr;
    };
};

string testData = "ABD##E##CF###";
int idx = 0;

Node* createTree(){
    char data;
    
};

int main(){
    Node* root = new Node('A', 0.5);
    Node* childL = new Node('B', 0.3);
    Node* childR = new Node('C', 0.2);

    root->left = childL;
    root->right = childR;

    cout << "左孩子的频率是：" << root->left->freq << endl;

    delete childL;
    delete childR;
    delete root;
    return 0;
}