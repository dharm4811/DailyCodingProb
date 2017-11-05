#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	public:
	int data;
	node *left;
	node *right;
}*start;
class tree
{
	public:
	tree()   //consturctor
	{
		start = NULL;
	}

node *create_node(int value)
{
	node *t = new node();
	t->data = value;
	t->left = NULL;
	t->right = NULL;
	return t;
}
void insert_tree(node *temp,int val)
{
	
	node *p;
	if(start==NULL)
	{   
		temp= create_node(val);
		start = temp;
	
		return ;		
	}
	temp = start;
while(temp!=NULL)	{
	if(val<temp->data)
	{
p = temp;
temp = temp->left;
	}
  else
  {
  	p =temp;
  	temp = temp->right;
  }


}

if(p->data < val)
{
	p->right = create_node(val);
}
else
{
	p->left = create_node(val);
}
return ;
}
void inorder(node *start)
{  
if(start ==NULL)
{
	return;
}

	
		cout<<start->data<<" ";
	
	inorder(start->left);
	inorder(start->right);
 
	
	}
	
	void search()
{
	node *t = start;
	node *p =NULL;            //p pointer keep parent node
	cout<<"\nenter searching key ";
	int key;
	cin>>key;
while(t!=NULL && t->data!=key)
{
	p=t;     //where p is moving behind the t (current place) therefore p remains at parent node always
	if(key<t->data)
	{
		t=t->left;
	}
	else
	{
		t=t->right;
	}
	if(t==NULL)
	{
		cout<<"\n key not found ";
		return ;
	}
	if( p==NULL) 
	{
		cout<<" \nfound at root node \n";
	}
	else
	{
		if(key<p->data)
		{
			cout<<" given key smaller than root is in left node  "<<p->data;  //given key is smaller than root node so it can be in left
		
		}
		else
		{
			cout<<" given key is in right node "<<p->data; // opposite of above
		}
		
	}
	}

}
};
int main()
{  int num,ch;
	tree sl;
	
while(1)	
{
		cout<<"\nenter choice :";
	cout<<"\n1. insertion\t\t\t\t2. searching\n";
	cout<<"\n3.traverse(inorder)\t\t\t4.Exit\n";
	cin>>ch;
	switch(ch)
	{
	
	case 1:
	{
	  cout<<"\nenter value in tree\n";
		cin>>num;
		sl.insert_tree(start,num);
		break;
	}
	case 2:
		{
			sl.search();
			break;
		}
		

	case 3:
	{
		sl.inorder(start);
		break;
		}
		
	case 4:
	{
		return 0;
			}
			default:
			{
				cout<<"\nwrong choice...";
					}		
}
}

}

