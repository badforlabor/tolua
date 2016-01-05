/*
** Lua binding: tconstant
** Generated automatically by tolua++-1.0.92 on 01/05/16 18:22:51.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_tconstant_open (lua_State* tolua_S);

#include "tconstant.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"A");
}

/* Open function */
TOLUA_API int tolua_tconstant_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"FIRST",FIRST);
  tolua_constant(tolua_S,"SECOND",SECOND);
  tolua_constant(tolua_S,"ONE",ONE);
  tolua_constant(tolua_S,"TWO",TWO);
  tolua_module(tolua_S,"M",0);
  tolua_beginmodule(tolua_S,"M");
   tolua_constant(tolua_S,"FIRST",M_FIRST);
   tolua_constant(tolua_S,"SECOND",M_SECOND);
   tolua_constant(tolua_S,"ONE",M_ONE);
   tolua_constant(tolua_S,"TWO",M_TWO);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"A","A","",NULL);
  tolua_beginmodule(tolua_S,"A");
   tolua_constant(tolua_S,"FIRST",FIRST);
   tolua_constant(tolua_S,"SECOND",SECOND);
   tolua_constant(tolua_S,"ONE",A::ONE);
   tolua_constant(tolua_S,"TWO",A::TWO);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_tconstant (lua_State* tolua_S) {
 return tolua_tconstant_open(tolua_S);
};
#endif

