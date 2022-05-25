tree.h

#pragma once
#include<iostream>


template<typename T>
struct node {
	T key;
	node* left, * right;
	node() : left(nullptr), right(nullptr) {}
};

template<typename T>
class tree {
	node<T>* root;
public:
	tree() :root(nullptr) {}
	void push(const T& val);
	void show();
private:
	void push(node<T>* ptr, const T& val);
	void show(node<T>* ptr);
};


template<typename T>
inline void tree<T>::push(const T& val)
{
	if (root != nullptr) {
		push(root, val);
	}
	else
	{
		root = new node<T>();
		root->key = val;
		/*root->left = NULL;
		root->right = NULL;*/
	}
}

template<typename T>
inline void tree<T>::show()
{
	if (root == nullptr) {
		std::cout << "net data" << std::endl;
	}
	else {
		show(root);
	}
	
}

template<typename T>
inline void tree<T>::push(node<T>* ptr, const T& val)
{
	if (ptr->key > val) {
		if (ptr->left != nullptr) {
			push(ptr->left, val);
		}
		else {
			ptr->left = new node<T>();
			ptr->left->key = val;
		}
	}
	if (ptr->key < val) {
		if (ptr->right != nullptr) {
			push(ptr->right, val);
		}
		else {
			ptr->right = new node<T>();
			ptr->right->key = val;
		}
	}
}

template<typename T>
inline void tree<T>::show(node<T>* ptr)
{
	
	if (ptr->left != nullptr) {
		show(ptr->left);
	}
	std::cout << ptr->key << std::endl;
	if (ptr->right != nullptr) {
		show(ptr->right);
	}
	
}

main

#include <iostream>
#include "tree.h"

int main()
{
	tree<int> a;
	a.push(45);
	a.push(30);
	a.push(50);
	a.push(27);
	a.push(39);
	a.push(15);
	a.push(90);
	a.push(103);
	a.push(70);

	a.show();
}
