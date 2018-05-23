/********************************************************************************/
/*																				*/
/*  This file is part of source codes of program Graph.							*/
/*  Program was developed as an course work of subject "Graph theory".			*/
/*																				*/
/*	Contacts:																	*/
/*		E-mail:	arsen.gharagyozyn.96@gmail.com									*/
/*		Phone:	+374 77 006 861													*/
/*																				*/
/*  Copyright Arsen Gharagyozyan � 2018 Armenia, Yerevan						*/
/*																				*/
/********************************************************************************/

#ifndef CMD_GRAPH_SET
#define CMD_GRAPH_SET

#include "cmd_include.h"

class CCMDSet : public ICommand
{
public:
	// Constructor
	CCMDSet(ICommand *pParent = nullptr, std::string strIName = "set");
	// Destructor
	~CCMDSet() = default;
	// Execute CMD
	CResult Execute(IType *& pObject) override;
};

#endif