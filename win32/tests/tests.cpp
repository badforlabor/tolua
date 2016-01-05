/*********************************************************************************
  @ Copyright(C), 2013-2014, ConnorAndTheirFriendsCompany.inc
  @ FileName:	  tests.cpp
  @ Author:		  Connor
  @ Version:	  1.0.0
  @ Date:		  2015-01-15
  @ Description:  usage for tolua++
  @ Others:  
  @ Function List: 
     1.
  @ History: 
     1.Date:
       Author:
       Modification:
**********************************************************************************/

#include "stdafx.h"
#include <stdlib.h>

extern "C"
{
	#include "../../lua/include/lua.h"
	#include "../../lua/include/lualib.h"
	#include "../../lua/include/lauxlib.h"
};

#pragma comment(lib, "../../lib/lua5.1.lib")
#pragma comment(lib, "../../lib/tolua++.lib")

#include "tests/tvariable.h"

int i = 1;


int _tmain(int argc, _TCHAR* argv[])
{
	i = 1024;

	int  tolua_tvariable_open(lua_State*);
	
	lua_State* L = lua_open();
	luaopen_base(L);

	tolua_tvariable_open(L);

	luaL_dofile(L, "tests/tvariable.lua");

	lua_close(L);

	system( "pause" );

	return 0;
}

