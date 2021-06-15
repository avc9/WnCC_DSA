#include<iostream>
using namespace std;


class bst{

	int val;
	bst *left,* right;

	public:


	bst(int val){
		this->val=val;
		left=nullptr;
		right=nullptr;
	}

	void insert_element(bst* &root,int val){
		if(root==nullptr){
			root=new bst(val);
			



		}

		else if(root->val>val)
			root->insert_element(root->left,val);
		else
			root->insert_element(root->right,val);

	}

	bool search_val(bst* &root,int val){
		if(root==nullptr)
			return false;

		else if(root->val==val)
			return true;
		else if(root->val>val)
			return search_val(root->left,val);
		else
			return search_val(root->right,val);
	}

	void print_inorder(){
		if(this==nullptr)
			return;

		this->left->print_inorder();

		cout<<this->val<<endl;

		
		this->right->print_inorder();

	}
		

};




int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	bst* root1=new bst(10);
	root1->insert_element(root1,9);
	root1->insert_element(root1,15);
	root1->insert_element(root1,110);
	root1->insert_element(root1,2);
	root1->insert_element(root1,1);

	root1->print_inorder();

	cout<<endl;

	cout<<root1->search_val(root1,9)<<endl<<root1->search_val(root1,1);

}
