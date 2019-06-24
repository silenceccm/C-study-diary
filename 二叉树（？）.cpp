 
/************************************************************
二叉树（链表表示）
课程要求：完成二叉树的基本操作
    1，树的创建和销毁
    2，树中结点的搜索
    3，树中结点的添加与删除
    4，树中结点的遍历
     
    Tree();   //创建树
    ~Tree();               //销毁树
    Node *SearchNode(Tree *pTree,int nodeindex);  //根据索引寻找结点 
    bool AddNode(Tree *pTree,int nodeindex,int direction,Node *pNode);  //添加结点
    bool DeleteNode(Tree *pTree,int nodeindex,Node *pNode);            //删除结点
    void preorderTraverse();               //先序遍历二叉树
    void InorderTraverse();               //中序遍历二叉树
    void PosorderTraverse();               //后序遍历二叉树
 
结点要素：索引、数据、左孩子指针、右孩子指针、父结点指针 
     
            3(0)
             
     5(1)          8(2)
      
2(3)     6(4)   9(5)   7(6)
     
那个direction是“0”时表示插入到左孩子，是“1”时表示插入到右孩子 
先序遍历结果（根----左----右）0 1 3 4 2 5 6  
中序遍历结果（左----根----右）3 1 4 0 5 2 6    
后序遍历结果（左----右----根）3 4 1 5 6 2 0
 
*************************************************************/
 
#include<iostream>
#include<stdio.h>
 
using namespace std;
 
class Node
{
public:
    Node();//构造函数 
    Node *SearchNode(int nodeindex);
    void DeleteNode();
    void preorderTraverse();               //先序遍历二叉树
    void InorderTraverse();               //中序遍历二叉树
    void PosorderTraverse();               //后序遍历二叉树
    int index;
    int data;
    Node *pLChild;
    Node *pRChild;
    Node *pParent;    
};
 
class Tree
{
public:
    Tree();                                //创建树 
    ~Tree();                               //销毁树 
    Node *SearchNode(int nodeindex);       //搜索结点 
    bool AddNode(int nodeindex,int direction,Node *pNode);   //添加结点 
    bool DeleteNode(int nodeindex,Node *pNode);              //删除结点 
    void preorderTraverse();               //先序遍历二叉树
    void InorderTraverse();               //中序遍历二叉树
    void PosorderTraverse();               //后序遍历二叉树
private:
    Node *m_pRoot;   
};
 
Node::Node()
{
    index=0;
    data=0;
    pLChild=NULL;
    pRChild=NULL;
    pParent=NULL;    
} 
 
Tree::Tree()
{
    m_pRoot=new Node();
}
 
Tree::~Tree()
{
    //DeleteNode(0,NULL);//方法一 
    m_pRoot->DeleteNode();//方法二 
}
 
Node *Node::SearchNode(int nodeindex)
{
    if(this->index==nodeindex)//查找当前节点
        return this; 
    if(this->pLChild!=NULL)//查找左子节点
    {
        if(this->pLChild->index==nodeindex)
            return this->pLChild; 
		else if (this->pLChild->SearchNode(nodeindex))
			return this->pLChild->SearchNode(nodeindex);

		else//查找右子节点
		{
			if(this->pRChild!=NULL)
			{
				if(this->pRChild->index==nodeindex)
					return this->pRChild;
				if(this->pRChild->SearchNode(nodeindex))
					return this->pRChild->SearchNode(nodeindex);
			}
		}
    }
    return NULL;
}
 
//Node *Node::SearchNode(int nodeindex)
//{
//	if(this->index==nodeindex)
//		return this; 
//	
//	if(this->pLChild!=NULL)
//	{
//		if(this->pLChild->index==nodeindex)
//			return this->pLChild;
//		if(this->pLChild->SearchNode(nodeindex))
//			{
//				return this->pLChild->SearchNode(nodeindex);
//			}
//	}
//
//	if(this->pRChild!=NULL)
//	{
//		if(this->pRChild->index==nodeindex)
//			return this->pRChild;
//		if(this->pRChild->SearchNode(nodeindex))
//			{
//				return this->pRChild->SearchNode(nodeindex);
//			}
//	}
//	return NULL;
//	
//}

Node *Tree::SearchNode(int nodeindex)
{
    return m_pRoot->SearchNode(nodeindex);
}
 
bool Tree::AddNode(int nodeindex,int direction,Node *pNode)
{
    Node *temp=SearchNode(nodeindex);
    if(temp==NULL)
        return false;
    Node *node=new Node();
    if(node==NULL)
        return false;
    node->index=pNode->index;
    node->data=pNode->data;
     
    node->pParent=temp;
    if(direction==0)
        temp->pLChild=node;
    if(direction==1)
        temp->pRChild=node;
    return true;
}
 
bool Tree::DeleteNode(int nodeindex,Node *pNode)
{
    Node *temp=SearchNode(nodeindex);
    if(temp==NULL)
        return false;
    if(pNode!=NULL)
    {
        pNode->data=temp->data;
    }
    temp->DeleteNode();
    return true;
}
 
void Node::DeleteNode()
{
    if(this->pLChild!=NULL)
        this->pLChild->DeleteNode();
    if(this->pRChild!=NULL)
        this->pRChild->DeleteNode();
    if(this->pParent!=NULL)
    {
		//此处无法确认自己是左孩子还是右孩子，所以要判断是否为null
        if(this->pParent->pLChild==this)
            this->pParent->pLChild=NULL;
        if(this->pParent->pRChild==this)
            this->pParent->pRChild=NULL;
    }
    delete this;
}
 
void Node::preorderTraverse()
{
    cout << this->index << "   " << this->data << endl;
    if(this->pLChild!=NULL)
        this->pLChild->preorderTraverse();
    if(this->pRChild!=NULL)
        this->pRChild->preorderTraverse();
} 
 
void Node::InorderTraverse()
{
    if(this->pLChild!=NULL)
        this->pLChild->InorderTraverse();
         
    cout << this->index << "   " << this->data << endl;
     
    if(this->pRChild!=NULL)
        this->pRChild->InorderTraverse();
}
void Node::PosorderTraverse()
{
    if(this->pLChild!=NULL)
        this->pLChild->PosorderTraverse();
     
    if(this->pRChild!=NULL)
        this->pRChild->PosorderTraverse();
         
    cout << this->index << "   " << this->data << endl;
}
 
void Tree::preorderTraverse()
{
    m_pRoot->preorderTraverse();
} 
 
void Tree::InorderTraverse()
{
    m_pRoot->InorderTraverse();
} 
 
void Tree::PosorderTraverse()
{
    m_pRoot->PosorderTraverse();
} 
 
int main()
{
    Node *node1=new Node();
    node1->index=1;
    node1->data=5;
     
    Node *node2=new Node();
    node2->index=2;
    node2->data=8;
     
    Node *node3=new Node();
    node3->index=3;
    node3->data=2;
     
    Node *node4=new Node();
    node4->index=4;
    node4->data=6;
     
    Node *node5=new Node();
    node5->index=5;
    node5->data=9;
     
    Node *node6=new Node();
    node6->index=6;
    node6->data=7;
	   
    Node *node7=new Node();
    node7->index=7;
    node7->data=11;

	Node *node8=new Node();
    node8->index=8;
    node8->data=12;

	Node *node9=new Node();
     
    Tree *tree=new Tree();
     
    tree->AddNode(0,0,node1);
    tree->AddNode(0,1,node2);
     
    tree->AddNode(1,0,node3);
    tree->AddNode(1,1,node4);
     
    tree->AddNode(2,0,node5);
    tree->AddNode(2,1,node6);

	//node9=tree->SearchNode(2);

	//cout<<node9->index<<endl<<node9->data<<endl;
	tree->AddNode(3,0,node7);
	tree->AddNode(3,1,node8);
     
	 tree->PosorderTraverse();

    //printf("删除最后一个结点：\n");
    //tree->DeleteNode(6,NULL);
     
    printf("删除中间某个结点：\n");
    tree->DeleteNode(2,NULL);
//    printf("前序遍历的结果：\n");
//    tree->preorderTraverse();
     
//    printf("中序遍历的结果：\n");
//    tree->InorderTraverse(); 
     
    printf("后序遍历的结果：\n");
    tree->PosorderTraverse(); 
    delete tree;
	system("pause");
    return 0;
}
