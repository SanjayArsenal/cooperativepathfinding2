// AStarNode.h: interface for the AStarNode class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ASTARNODE_H__237CCA64_06E4_11D7_B15F_000476A2DA44__INCLUDED_)
#define AFX_ASTARNODE_H__237CCA64_06E4_11D7_B15F_000476A2DA44__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "defs.h"
#include "jMap.h"

class AStarNode  
{
protected:
	int m_Cost;
	locstruct TARGETSTATE;
	//locstruct STARTSTATE;

public:
	AStarNode();
	void setTarget(locstruct TARGETSTATE);
	virtual ~AStarNode();
	double f();
	void Generate(int currentTime);
	double Manhattan();
	double AirDistance();
	int SameTiles(locstruct other);
	bool isWall();
	bool isBlocked();
	void Print();
	void TracePath();
	void Update();
	void setCost(int cost);
	
	AStarNode *parent;
	AStarNode *kids[8]; // A maximum of four moves are possible
	locstruct loc;
	double gsteps;
	double hestimate;

};



const locstruct generator[8] = 
{
	{-1, -1},
	{-1,  0},
	{-1, +1},
	{ 0, -1},
	{ 0, +1},
	{+1, -1},
	{+1,  0},
	{+1, +1}
};



#endif // !defined(AFX_ASTARNODE_H__237CCA64_06E4_11D7_B15F_000476A2DA44__INCLUDED_)
