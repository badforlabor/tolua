/*
** Lua binding: tvariable
** Generated automatically by tolua++-1.0.92 on 01/16/15 22:44:53.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "../../../include/tolua++.h"

/* Exported function */
TOLUA_API int  tolua_tvariable_open (lua_State* tolua_S);

#include "tvariable.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* get function: i */
#ifndef TOLUA_DISABLE_tolua_get_i
static int tolua_get_i(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)i);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: i */
#ifndef TOLUA_DISABLE_tolua_set_i
static int tolua_set_i(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  i = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_tvariable_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,1);
 tolua_beginmodule(tolua_S,NULL);
  tolua_variable(tolua_S,"i",tolua_get_i,tolua_set_i);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_tvariable (lua_State* tolua_S) {
 return tolua_tvariable_open(tolua_S);
};
#endif

