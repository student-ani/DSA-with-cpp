#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *left, *right;
};

struct node *newNode(int item) {
    struct node *temporary = new struct node;
    temporary->data = item;
    temporary->left = temporary->right = NULL;
    return temporary;
}

void preorder(struct node *root) {
    if (root != NULL) {
        cout << root->data << "\t";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << "\t";
    }
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << "\t";
        inorder(root->right);
    }
}

struct node *insert(struct node *node, int data) {
    if (node == NULL) {
        return newNode(data);
    } else {
        if (data < node->data) {
            node->left = insert(node->left, data);
        } else if (data > node->data) {
            node->right = insert(node->right, data);
        }
        return node;
    }
}

int main() {
    struct node *root = NULL;
    int choice, value;
    
    do {
        cout << "1. Insert\n2. Preorder Traversal\n3. Postorder Traversal\n4. Inorder Traversal\n5. Exit..";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                root = insert(root, value);
                break;
            case 2:
                cout << "The Pre-Order is:\n";
                preorder(root);
                cout << endl;
                break;
            case 3:
                cout << "The Post-Order is:\n";
                postorder(root);
                cout << endl;
                break;
            case 4:
                cout << "The In-Order is:\n";
                inorder(root);
                cout << endl;
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
