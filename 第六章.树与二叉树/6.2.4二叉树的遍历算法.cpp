//https://www.cnblogs.com/SHERO-Vae/p/5800363.html参考

#include<iostream>
#include<stack>
#include"6.2.3二叉树的存储结构.cpp"
using namespace std;

void visit(BTNode *p){
    cout<<p->data<<endl;
}

/*
递归算法
*/

//先序遍历  中左右
void preorder(BTNode *p){
    
    if(p){
        visit(p);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

//中序遍历 左中右
void inorder(BTNode *P){

    if(p){
        preorder(p->lchild);
        visit(p);
        preorder(p->rchild);
    }
}

//后序遍历 左右中
void postorder(BTNode *P){

    if(p){
        preorder(p->lchild);
        preorder(p->rchild);
        visit(p);
    }
}


/*
非递归算法
*/

//先序遍历非递归
/*
1.从根节点开始，如果非空则入栈，指针指向该节点的左子树；
2.若指针为空，则出栈并且指针指向该节点的右子树；若非空，则入栈，指针指向该节点的左子树
*/
void preorder_2(BTNode *root){
    stack<BTNode*> s; //s是存放BTNode*类型的栈
    BTNode *p = root;

    while(p||!s.empty()){
        while(p){
            visit(p);
            s.push(p);
            p = p->lchild;
        }
        if(!s.empty()){
            p = s.top();
            s.pop();
            p = p->rchild;
        }
    }
}

//中序遍历非递归
/*
1.从根节点的左子树开始，若非空则入栈，指针指向该节点的左子树
2.循环到节点为空，则出栈，visit,指针指向右节点，接着又当作是根节点，操作同上
*/
void inorder_2(BTNode *root){
    stack<BTNode*> s;
    BTNode *p = root;

    while(p||!s.empty()){
        while(p){
            s.push(p);
            p = p->lchild;
        }
        if(!s.empty()){
            p = s.top();
            s.pop();
            visit(p);
            p = p->rchild;
        }
    }
}

//后序遍历非递归
/*

*/
void postorder_2(BTNode* root){
    stack<BTNode*> s;
    BTNode *cur = root;
    BTNode *visited = NULL;
    BTNode *tmp;

    while(cur||!s.empty()){
        while(cur){
            s.push(cur);
            cur = cur->lchild;
        }
        tmp = s.top();
        if(tmp->rchild==NULL||visited == tmp->rchild){
            visit(tmp);
            s.pop();
            visited = tmp;
        }
        else{
            cur = cur->rchild;
        }

    }
    
}