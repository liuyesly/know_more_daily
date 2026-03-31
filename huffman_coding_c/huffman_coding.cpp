#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <memory>

using namespace std;

struct Node {
    char data;
    double freq;
    Node *left, *right;

    Node(char d, double f) : data(d), freq(f), left(nullptr), right(nullptr){}
    bool operator>(const Node& other) const{
        return freq > other.freq;
    }
};

struct Compare{
    bool operator()(Node* l, Node* r) const{
        return l->freq > r->freq;
    }
};