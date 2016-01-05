/*
** Lua binding: tdirectivepkg
** Generated automatically by tolua++-1.0.92 on 01/05/16 18:22:51.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_tdirectivepkg_open (lua_State* tolua_S);


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* get function: a */
#ifndef TOLUA_DISABLE_tolua_get_a
static int tolua_get_a(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a */
#ifndef TOLUA_DISABLE_tolua_set_a
static int tolua_set_a(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  a = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_tdirectivepkg_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,1);
 tolua_beginmodule(tolua_S,NULL);
  tolua_variable(tolua_S,"a",tolua_get_a,tolua_set_a);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_tdirectivepkg (lua_State* tolua_S) {
 return tolua_tdirectivepkg_open(tolua_S);
};
#endif

