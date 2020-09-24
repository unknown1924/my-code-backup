#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node *root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << ' ';
    inorder(root->right);
}

map<int, list<int>> ml;
void vertical(Node *root, int index){
    if(root == NULL) return;
    ml[index].push_back(root->data);
    vertical(root->left, index-1);
    vertical(root->right, index+1);
}

int main(){
    Node *root = new Node(1);
    Node *left = new Node(3);
    Node *right = new Node(2);
    root->left = left;
    root->right = right;
    //inorder(root);
    vertical(root, 0);
    for(auto it = ml.begin(); it != ml.end(); it++){
        cout << (it->second).back() << endl;
    }
}

