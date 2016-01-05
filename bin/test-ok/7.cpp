/*
** Lua binding: tmodule
** Generated automatically by tolua++-1.0.92 on 01/05/16 18:22:51.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_tmodule_open (lua_State* tolua_S);

#include "tmodule.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* get function: a */
#ifndef TOLUA_DISABLE_tolua_get_A_a
static int tolua_get_A_a(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a */
#ifndef TOLUA_DISABLE_tolua_set_A_a
static int tolua_set_A_a(lua_State* tolua_S)
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

/* get function: b */
#ifndef TOLUA_DISABLE_tolua_get_B_b
static int tolua_get_B_b(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b */
#ifndef TOLUA_DISABLE_tolua_set_B_b
static int tolua_set_B_b(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  b = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: c */
#ifndef TOLUA_DISABLE_tolua_get_C_c
static int tolua_get_C_c(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)c);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: c */
#ifndef TOLUA_DISABLE_tolua_set_C_c
static int tolua_set_C_c(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  c = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: d */
#ifndef TOLUA_DISABLE_tolua_get_A_d
static int tolua_get_A_d(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)d);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: d */
#ifndef TOLUA_DISABLE_tolua_set_A_d
static int tolua_set_A_d(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  d = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_tmodule_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"A",1);
  tolua_beginmodule(tolua_S,"A");
   tolua_variable(tolua_S,"a",tolua_get_A_a,tolua_set_A_a);
   tolua_module(tolua_S,"B",1);
   tolua_beginmodule(tolua_S,"B");
    tolua_variable(tolua_S,"b",tolua_get_B_b,tolua_set_B_b);
    tolua_module(tolua_S,"C",1);
    tolua_beginmodule(tolua_S,"C");
     tolua_variable(tolua_S,"c",tolua_get_C_c,tolua_set_C_c);
    tolua_endmodule(tolua_S);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"A",1);
  tolua_beginmodule(tolua_S,"A");
   tolua_variable(tolua_S,"d",tolua_get_A_d,tolua_set_A_d);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_tmodule (lua_State* tolua_S) {
 return tolua_tmodule_open(tolua_S);
};
#endif

