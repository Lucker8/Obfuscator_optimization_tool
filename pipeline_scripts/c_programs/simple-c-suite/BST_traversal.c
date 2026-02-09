// if n then n integers inserted into BST.
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int key;
    struct Node *left, *right;
} Node;

static Node* new_node(int key) {
    Node *n = (Node*)malloc(sizeof(Node));
    n->key = key; n->left = NULL; n->right = NULL;
    return n;
}

static Node* insert(Node *root, int key) {
    if (!root) return new_node(key);
    if (key < root->key) root->left = insert(root->left, key);
    else root->right = insert(root->right, key);
    return root;
}

static void inorder(Node *r) {
    if (!r) return;
    inorder(r->left);
    printf("%d ", r->key);
    inorder(r->right);
}
static void preorder(Node *r) {
    if (!r) return;
    printf("%d ", r->key);
    preorder(r->left);
    preorder(r->right);
}
static void postorder(Node *r) {
    if (!r) return;
    postorder(r->left);
    postorder(r->right);
    printf("%d ", r->key);
}

static void free_tree(Node *r) {
    if (!r) return;
    free_tree(r->left);
    free_tree(r->right);
    free(r);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 0;

    Node *root = NULL;
    for (int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        root = insert(root, x);
    }

    inorder(root);   putchar('\n');
    preorder(root);  putchar('\n');
    postorder(root); putchar('\n');

    free_tree(root);
    return 0;
}
