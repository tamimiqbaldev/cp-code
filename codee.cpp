// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int key;
//     Node* left;
//     Node* right;
//     Node(int val) {
//         key = val;
//         left = right = nullptr;
//     }
// };

// class BST {
// private:
//     Node* root;

//     Node* insert(Node* node, int key) {
//         if (!node) return new Node(key);
//         if (key < node->key) node->left = insert(node->left, key);
//         else if (key > node->key) node->right = insert(node->right, key);
//         return node;
//     }

//     Node* findMin(Node* node) {
//         while (node && node->left) node = node->left;
//         return node;
//     }

//     Node* deleteNode(Node* node, int key) {
//         if (!node) return node;

//         if (key < node->key) node->left = deleteNode(node->left, key);
//         else if (key > node->key) node->right = deleteNode(node->right, key);
//         else {
//             if (!node->left && !node->right) {
//                 delete node;
//                 return nullptr;
//             }
//             else if (!node->left) {
//                 Node* temp = node->right;
//                 delete node;
//                 return temp;
//             }
//             else if (!node->right) {
//                 Node* temp = node->left;
//                 delete node;
//                 return temp;
//             }
//             else {
//                 Node* temp = findMin(node->right);
//                 node->key = temp->key;
//                 node->right = deleteNode(node->right, temp->key);
//             }
//         }
//         return node;
//     }

//     void inorder(Node* node) {
//         if (!node) return;
//         inorder(node->left);
//         cout << node->key << " ";
//         inorder(node->right);
//     }

// public:
//     BST() { root = nullptr; }

//     void insert(int key) { root = insert(root, key); }
//     void deleteKey(int key) { root = deleteNode(root, key); }
//     void inorderTraversal() { inorder(root); cout << "\n"; }
// };

// int main() {
//     BST tree;
//     int choice, val;

//     while (true) {
//         cout << "\n--- Binary Search Tree Menu ---\n";
//         cout << "1. Insert\n";
//         cout << "2. Delete\n";
//         cout << "3. Display (Inorder)\n";
//         cout << "4. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter value to insert: ";
//                 cin >> val;
//                 tree.insert(val);
//                 break;

//             case 2:
//                 cout << "Enter value to delete: ";
//                 cin >> val;
//                 tree.deleteKey(val);
//                 break;

//             case 3:
//                 cout << "Inorder Traversal: ";
//                 tree.inorderTraversal();
//                 break;

//             case 4:
//                 cout << "Exiting...\n";
//                 return 0;

//             default:
//                 cout << "Invalid choice! Try again.\n";
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node *left, *right;
    Node(char c, int f) {
        ch = c;
        freq = f;
        left = right = nullptr;
    }
};

struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

void generateCodes(Node* root, string code, map<char, string> &codes) {
    if (!root) return;
    if (!root->left && !root->right && root->ch != '\0') {
        codes[root->ch] = code;
    }
    generateCodes(root->left, code + "0", codes);
    generateCodes(root->right, code + "1", codes);
}

int main() {
    string s;
    cin >> s;

    map<char, int> freq;
    for (char c : s) freq[c]++;

    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (auto it : freq) pq.push(new Node(it.first, it.second));

    while (pq.size() > 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();

        Node* parent = new Node('\0', left->freq + right->freq);
        parent->left = left;
        parent->right = right;

        pq.push(parent);
    }

    Node* root = pq.top();
    map<char, string> codes;
    generateCodes(root, "", codes);

    for (auto it : codes) {
        cout << it.first << " : " << it.second << "\n";
    }
}