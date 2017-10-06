#pragma once 

typedef int TElemType;

typedef struct CSNode
{
	TElemType data;
	struct CSNode *firstchild, *rightsib;
}CSnode, *CSTree;