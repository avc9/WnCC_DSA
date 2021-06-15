#include<iostream>
using namespace std;


class bst{

	int val;
	bst *left,* right;

	public:

	bst(){

	}
	bst(int val){
		this->val=val;
		left=nullptr;
		right=nullptr;
	}

	bst* insert_element(bst* root,int val){
		if(root==nullptr){
			root=new bst(val);

			return root;
		}
	
		else if(root->val>val)
			 root->left=insert_element(root->left,val);
		else
			root->right=insert_element(root->right,val);

	}

	bool search_val(int val){
		if(this==nullptr)
			return false;

		else if(this->val==val)
			return true;
		else if(this->val>val)
			return left->search_val(val);
		else
			return right->search_val(val);
	}

	void print_inorder(){
		if(this==nullptr)
			return;

		left->print_inorder();

		cout<<val<<endl;

		
		right->print_inorder();

	}
		

};




int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	bst b,*root1=nullptr;
	root1=b.insert_element(root1,10);
	root1=b.insert_element(root1,9);
	root1=b.insert_element(root1,15);
	root1=b.insert_element(root1,110);
	root1=b.insert_element(root1,2);
	root1=b.insert_element(root1,1);

	root1->print_inorder();

	cout<<endl;

	cout<<root1->search_val(9)<<endl<<root1->search_val(1);

}
