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

#include "cmd_exit.h"
#include "cmd_include.h"

CCMDExit::CCMDExit(ICommand *pParent, std::string strIName)
	: ICommand(pParent, strIName)
{
	SetCMD(this);

	if (GetArgument(true) == "help")
		SetCMD(new CCMDHelp(this));
}

CResult CCMDExit::Execute(IType *& pObject)
{
	if (GetCMD() != this)
		return GetCMD()->Execute(pObject);

	eFlags = Flags(eFlags | Exit);
	return CResult::Success;
}