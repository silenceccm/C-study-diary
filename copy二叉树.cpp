 
/************************************************************
�������������ʾ��
�γ�Ҫ����ɶ������Ļ�������
    1�����Ĵ���������
    2�����н�������
    3�����н��������ɾ��
    4�����н��ı���
     
    Tree();   //������
    ~Tree();               //������
    Node *SearchNode(Tree *pTree,int nodeindex);  //��������Ѱ�ҽ�� 
    bool AddNode(Tree *pTree,int nodeindex,int direction,Node *pNode);  //��ӽ��
    bool DeleteNode(Tree *pTree,int nodeindex,Node *pNode);            //ɾ�����
    void preorderTraverse();               //�������������
    void InorderTraverse();               //�������������
    void PosorderTraverse();               //�������������
 
���Ҫ�أ����������ݡ�����ָ�롢�Һ���ָ�롢�����ָ�� 
     
            3(0)
             
     5(1)          8(2)
      
2(3)     6(4)   9(5)   7(6)
     
�Ǹ�direction�ǡ�0��ʱ��ʾ���뵽���ӣ��ǡ�1��ʱ��ʾ���뵽�Һ��� 
��������������----��----�ң�0 1 3 4 2 5 6  
��������������----��----�ң�3 1 4 0 5 2 6    
��������������----��----����3 4 1 5 6 2 0
 
*************************************************************/
 
#include<iostream>
#include<stdio.h>
 
using namespace std;
 
class Node
{
public:
    Node();//���캯�� 
    Node *SearchNode(int nodeindex);
    void DeleteNode();
    void preorderTraverse();               //�������������
    void InorderTraverse();               //�������������
    void PosorderTraverse();               //�������������
    int index;
    int data;
    Node *pLChild;
    Node *pRChild;
    Node *pParent;    
};
 
class Tree
{
public:
    Tree();                                //������ 
    ~Tree();                               //������ 
    Node *SearchNode(int nodeindex);       //������� 
    bool AddNode(int nodeindex,int direction,Node *pNode);   //��ӽ�� 
    bool DeleteNode(int nodeindex,Node *pNode);              //ɾ����� 
    void preorderTraverse();               //�������������
    void InorderTraverse();               //�������������
    void PosorderTraverse();               //�������������
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
    //DeleteNode(0,NULL);//����һ 
    m_pRoot->DeleteNode();//������ 
}
 
Node *Node::SearchNode(int nodeindex)
{
    if(this->index==nodeindex)//���ҵ�ǰ�ڵ�
        return this; 
    if(this->pLChild!=NULL)//�������ӽڵ�
    {
        if(this->pLChild->index==nodeindex)
            return this->pLChild; 
		else if (this->pLChild->SearchNode(nodeindex))
			return this->pLChild->SearchNode(nodeindex);

		else//�������ӽڵ�
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
		//�˴��޷�ȷ���Լ������ӻ����Һ��ӣ�����Ҫ�ж��Ƿ�Ϊnull
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

    //printf("ɾ�����һ����㣺\n");
    //tree->DeleteNode(6,NULL);
     
    printf("ɾ���м�ĳ����㣺\n");
    tree->DeleteNode(2,NULL);
//    printf("ǰ������Ľ����\n");
//    tree->preorderTraverse();
     
//    printf("��������Ľ����\n");
//    tree->InorderTraverse(); 
     
    printf("��������Ľ����\n");
    tree->PosorderTraverse(); 
    delete tree;
	system("pause");
    return 0;
}
