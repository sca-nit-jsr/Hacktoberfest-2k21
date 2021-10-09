#include<bits/stdc++.h>
using namespace std;

class Node {

public:
	int data;
	Node* left;
	Node* right;

	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};
Node *takeInputLevelwise()
{
	int data;
	cout << "Enter root data: ";
	cin >> data;
	if (data == -1)
		return NULL;
	Node *root = new Node(data);
	queue<Node*> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0)
	{
		Node* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter the left child of " << front->data << ":";
		int leftchild;	cin >> leftchild;
		if (leftchild != -1)
		{
			Node *child = new Node(leftchild);
			front->left = child;
			pendingNodes.push(child);
		}
		cout << "Enter the rightt child of " << front->data << ": " ;
		int rightchild;	cin >> rightchild;
		if (rightchild != -1)
		{
			Node *child = new Node(rightchild);
			front->right = child;
			pendingNodes.push(child);
		}
	}
	return root;
}

void diagonalPrintHelper(Node *root, int d, map<int, vector<int>> &diagonalPrint) {
	if (!root)
		return;
	diagonalPrint[d].push_back(root->data);

	diagonalPrintHelper(root->left, d + 1, diagonalPrint);

	diagonalPrintHelper(root->right, d, diagonalPrint);
}

void diagonalPrint(Node* root) {
	map<int, vector<int>> diagonalPrint;

	diagonalPrintHelper(root, 0, diagonalPrint);

	cout << "\nDiagonal Traversal of binary tree: \n";

	for (auto i : diagonalPrint) {
		vector<int> v = i.second;

		for (auto i : v)
			cout << i << " ";
		cout << endl;
	}
}

int main() {
	Node *root = takeInputLevelwise();
	diagonalPrint(root);
}
