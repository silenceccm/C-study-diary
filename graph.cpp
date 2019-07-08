#include<iostream>
#include<stdlib.h>
#include<vector>
#include<windows.h>
using namespace std;
class Node
{
public:
    Node(char data=0);
    char cData;
    bool isvisited;
};
Node::Node(char data)
{
    cData = data;
    isvisited = false;
}


class Cmap
{
public:
    Cmap(int capacity);
    ~Cmap();
    bool addnode(Node *pnode);
    void resetnode();
    bool youxiangtu(int row,int col,int val=1);
    bool wuxiangtu(int row,int col,int val=1);

    void coutjz();//打印邻接矩阵

    void depth(int nodeindex);//深度优先
    void breadth(int nodeindex);//广度优先

private:
    bool getvalue(int row ,int col,int &val);//从矩阵中获取权值
    void breadthway(vector<int>preVec);//广度优先遍历实现函数

    int iCapacity;//图中可容纳最多的点数
    int inodecount;//已经添加的节点个数
    Node *pnodearray;
    int *pMatrix;

};
Cmap::Cmap(int capacity)
{
    iCapacity=capacity;
    inodecount=0;
    pnodearray=new Node[iCapacity];
    pMatrix=new int[iCapacity*iCapacity];
    memset(pMatrix,0,iCapacity*iCapacity*sizeof(int));//邻接矩阵初始化
}
Cmap::~Cmap()
{
    delete[]pMatrix;
    delete[]pnodearray;
}
bool Cmap:: addnode(Node *pnode)
{
    if(pnode == NULL)
    {
        return false;
    }
    pnodearray[inodecount].cData=pnode->cData;
    inodecount++;
    return true;

}
void Cmap::resetnode()
{
    for(int i = 0;i<inodecount;i++)
    {
        pnodearray[i].isvisited=false;
    }
}
bool Cmap:: youxiangtu(int row,int col,int val)
{
    if(row <0||row>=iCapacity)
    {
        return false;
    }
    if(col<0||col>=iCapacity)
    {
        return false;
    }
    pMatrix[row*iCapacity+col]=val;
    return true;
}
bool Cmap:: wuxiangtu(int row,int col,int val)
{
    if(row <0||row>=iCapacity)
    {
        return false;
    }
    if(col<0||col>=iCapacity)
    {
        return false;
    }
    pMatrix[row*iCapacity+col]=val;
    pMatrix[col*iCapacity+row]=val;
    return true;
}
bool Cmap:: getvalue(int row ,int col,int &val)
{
    if(row <0||row>=iCapacity)
    {
        return false;
    }
    if(col<0||col>=iCapacity)
    {
        return false;
    }
    val =pMatrix[row*iCapacity+col];
    return true;
}
void Cmap:: coutjz()
{
    for(int i=0;i<iCapacity;i++)
    {
        for(int k=0;k<iCapacity;k++)
        {
            cout<<pMatrix[i*iCapacity+k]<<' ';
        }
    cout <<endl;
    }
}

void Cmap:: depth(int nodeindex)
{

	int value =0;
	cout<<pnodearray[nodeindex].cData<<" ";
	pnodearray[nodeindex].isvisited=true;
	//通过邻接矩阵判断是否与其他的顶点 有连接
	for (int i=0;i<iCapacity;i++)
	{
		getvalue(nodeindex,i,value);
		if(value!=0)
		{
			if (pnodearray[i].isvisited)
			{
				continue;
			}
			else
			{
				depth(i);
			}
		}

	else
		{
			continue;
		}
	}

}

//深度优先搜索
//void Cmap:: depth(int nodeindex)
//{
//    int value=0;
//    cout << pnodearray[nodeindex].cData<<' ';
//    pnodearray[nodeindex].isvisited=true;
//    //通过邻接矩阵判断是否有其他顶点连接
//    for(int i =0;i<iCapacity;i++)
//    {
//        getvalue(nodeindex ,i,value);
//        if(value!=0)//判断有弧连接其他顶点
//        {
//            //判断该店是否被访问过
//            if(pnodearray[i].isvisited)
//            {
//                continue;
//            }
//            else
//            {
//                depth(i);
//            }
//        }
//        else
//        {
//            continue;
//        }
//    }
//}
//广度优先便利算法

void Cmap:: breadth(int nodeindex)
{
     cout << pnodearray[nodeindex].cData<<' ';
     pnodearray[nodeindex].isvisited=true;

     vector<int>curVec;
     curVec.push_back(nodeindex);

     breadthway(curVec);
}
void Cmap:: breadthway(vector<int>preVec)
{
    int value =0;
    vector<int>curVec;

    for(int j=0;j<(int)preVec.size();j++)
    {
        for(int i=0;i<iCapacity;i++)
        {
            getvalue(preVec[j],i,value);
            if(value!=0)
            {
                if(pnodearray[i].isvisited)
                {
                    continue;
                }
                else
                {
                    cout << pnodearray[i].cData<<" ";
                    pnodearray[i].isvisited=true;

                    curVec.push_back(i);
                }
            }
        }
    }
    if(curVec.size()==0)
    {
        return;
    }
    else
    {
        breadthway(curVec);
    }
}
int main()
{
    Cmap *pMap=new Cmap(8);

    Node *pnodea=new Node('A');
    Node *pnodeb=new Node('B');
    Node *pnodec=new Node('C');
    Node *pnoded=new Node('D');
    Node *pnodee=new Node('E');
    Node *pnodef=new Node('F');
    Node *pnodeg=new Node('G');
    Node *pnodeh=new Node('H');

    pMap->addnode(pnodea);
    pMap->addnode(pnodeb);
    pMap->addnode(pnodec);
    pMap->addnode(pnoded);
    pMap->addnode(pnodee);
    pMap->addnode(pnodef);
    pMap->addnode(pnodeg);
    pMap->addnode(pnodeh);

    pMap-> wuxiangtu(0,1);
    pMap-> wuxiangtu(0,3);
    pMap-> wuxiangtu(1,2);
    pMap-> wuxiangtu(1,5);
    pMap-> wuxiangtu(3,6);
    pMap-> wuxiangtu(3,7);
    pMap-> wuxiangtu(6,7);
    pMap-> wuxiangtu(2,4);
    pMap-> wuxiangtu(4,5);

    pMap->coutjz();
    cout << endl;

    pMap->resetnode();
    pMap->depth(0);
    cout << endl;

    pMap->resetnode();
    pMap->breadth(0);
    cout << endl;

   system("pause");
    return 0;


}