
#include <iostream>
#include <vector> // Include vector for storing children

using namespace std;

class Tree {
public:
    int data;
    vector<Tree*> children; // Use vector to store children

    Tree(int data) {
        this->data = data;
    }

    void takeInput() {
        int n;
        cout << "Enter the number of children for node " << data << ": ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            int childData;
            cout << "Enter data for child " << i + 1 << ": ";
            cin >> childData;

            Tree* child = new Tree(childData);
            children.push_back(child); // Add child to the parent's children
            child->takeInput(); // Recursively take input for the child
        }
    }

    void printTree() {
        cout << data << ": ";
        for (Tree* child : children) {
            cout << child->data << " ";
        }
        cout << endl;

        for (Tree* child : children) {
            child->printTree(); // Recursively print children
        }
    }
};

int main() {
    int rootData;
    cout << "Enter data for the root node: ";
    cin >> rootData;

    Tree* rootNode = new Tree(rootData);
    rootNode->takeInput();

    cout << "Tree structure:" << endl;
    rootNode->printTree();

    // Clean up memory (optional)
    delete rootNode;
    return 0;
}

