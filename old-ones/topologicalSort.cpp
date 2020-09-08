#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    char ch;
    Node *next[26];

    Node (char c){
        ch = c;
        for(int i = 0; i < 26; i++)
            next[i] = NULL;
    }
};

int index(Node *node){
    return (int)(node->ch - 'a');
}

void TopologicalSortUtil(Node *node, map<char, bool> visited, stack<Node*>& s){
    visited[node->ch] = true;
    for(int i = 0; i < 26; i++){
        if(node->next[i] != NULL and !visited[node->next[i]->ch]){
           TopologicalSortUtil(node->next[i], visited, s); 
        }
    }
    s.push(node);
}

stack<Node*> s;
void TopologicalSort(vector<Node*> root){
    map<char, bool> visited;
    for(char i = 'a'; i < 'z'; i++)
        visited[i] = false;

    for(auto node:root){
        if(!visited[node->ch]){
            TopologicalSortUtil(node, visited, s);
        }
    }
}

int main(){
    Node *a = new Node('A');
    Node *b = new Node('B');
    Node *c = new Node('C');
    Node *d = new Node('D');
    Node *e = new Node('E');
    Node *f = new Node('F');
    Node *g = new Node('G');
    Node *h = new Node('H');

    vector<Node*> root;
    root.push_back(a);
    root.push_back(b);
    root.push_back(c);
    root.push_back(d);
    root.push_back(e);
    root.push_back(f);
    root.push_back(g);
    root.push_back(h);

    a->next[0] = c;
    b->next[0] = c;
    b->next[1] = d;
    c->next[0] = e;
    d->next[0] = f;
    e->next[0] = f;
    e->next[1] = h;
    f->next[0] = g;
    Node *x = new Node('x');
    Node *y = new Node('y');
    x->next[0] = y;
    vector<Node*> temp{x, y};
    //cout << a->ch << endl;

    TopologicalSort(temp);

    while(!s.empty()){
        cout << s.top()->ch <<' ';
        s.pop();
    }
}
