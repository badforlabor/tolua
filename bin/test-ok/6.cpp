/*
** Lua binding: tfunction
** Generated automatically by tolua++-1.0.92 on 01/05/16 18:22:51.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_tfunction_open (lua_State* tolua_S);

#include "tfunction.h"
#include "tfunction.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Point (lua_State* tolua_S)
{
 Point* self = (Point*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_ColorPoint (lua_State* tolua_S)
{
 ColorPoint* self = (ColorPoint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Point");
 tolua_usertype(tolua_S,"ColorPoint");
}

/* method: new of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_new00
static int tolua_tfunction_Point_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   Point* tolua_ret = (Point*)  Mtolua_new((Point)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Point");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_new00_local
static int tolua_tfunction_Point_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   Point* tolua_ret = (Point*)  Mtolua_new((Point)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_delete00
static int tolua_tfunction_Point_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_set00
static int tolua_tfunction_Point_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
   self->set(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_set01
static int tolua_tfunction_Point_set01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
  float v[2];
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'", NULL);
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,2,1,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<2;i++)
    v[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   self->set(v);
  }
  {
   int i;
   for(i=0; i<2;i++)
    tolua_pushfieldnumber(tolua_S,2,i+1,(lua_Number) v[i]);
  }
 }
 return 0;
tolua_lerror:
 return tolua_tfunction_Point_set00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setpointer of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_setpointer00
static int tolua_tfunction_Point_setpointer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Point",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
  Point* p = ((Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setpointer'", NULL);
#endif
  {
   self->setpointer(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setpointer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setref of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_setref00
static int tolua_tfunction_Point_setref00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
  Point* p = ((Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setref'", NULL);
#endif
  {
   self->setref(*p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setref'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setvalue of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_setvalue00
static int tolua_tfunction_Point_setvalue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
  Point p = *((Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setvalue'", NULL);
#endif
  {
   self->setvalue(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setvalue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setconst of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_setconst00
static int tolua_tfunction_Point_setconst00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
  const Point* p = ((const Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setconst'", NULL);
#endif
  {
   self->setconst(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setconst'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setname of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_setname00
static int tolua_tfunction_Point_setname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
  const char* s = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setname'", NULL);
#endif
  {
   self->setname(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_get00
static int tolua_tfunction_Point_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   self->get(&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_get01
static int tolua_tfunction_Point_get01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  float v[2];
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,2,1,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<2;i++)
    v[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   self->get(v);
  }
  {
   int i;
   for(i=0; i<2;i++)
    tolua_pushfieldnumber(tolua_S,2,i+1,(lua_Number) v[i]);
  }
 }
 return 0;
tolua_lerror:
 return tolua_tfunction_Point_get00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getpointer of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_getpointer00
static int tolua_tfunction_Point_getpointer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getpointer'", NULL);
#endif
  {
   Point* tolua_ret = (Point*)  self->getpointer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Point");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getpointer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getref of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_getref00
static int tolua_tfunction_Point_getref00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getref'", NULL);
#endif
  {
   Point& tolua_ret = (Point&)  self->getref();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Point");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getref'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getvalue of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_getvalue00
static int tolua_tfunction_Point_getvalue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getvalue'", NULL);
#endif
  {
   Point tolua_ret = (Point)  self->getvalue();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getvalue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getconst of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_getconst00
static int tolua_tfunction_Point_getconst00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getconst'", NULL);
#endif
  {
   const Point* tolua_ret = (const Point*)  self->getconst();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const Point");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getconst'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getname of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_getname00
static int tolua_tfunction_Point_getname00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getname'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getname();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getname'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__add00
static int tolua_tfunction_Point__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  const Point* p = ((const Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Point tolua_ret = (Point)  self->operator+(*p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__sub00
static int tolua_tfunction_Point__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  const Point* p = ((const Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Point tolua_ret = (Point)  self->operator-(*p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__mul00
static int tolua_tfunction_Point__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  const Point* p = ((const Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Point tolua_ret = (Point)  self->operator*(*p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__div00
static int tolua_tfunction_Point__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  float n = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Point tolua_ret = (Point)  self->operator/(n);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__lt00
static int tolua_tfunction_Point__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  const Point* p = ((const Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*p);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator<= of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__le00
static int tolua_tfunction_Point__le00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  const Point* p = ((const Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<=(*p);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.le'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__eq00
static int tolua_tfunction_Point__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  const Point* p = ((const Point*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*p);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__geti00
static int tolua_tfunction_Point__geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* self = (const Point*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   float tolua_ret = (float)  self->operator[](i);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__seti00
static int tolua_tfunction_Point__seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  float tolua_value = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](i) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point__geti01
static int tolua_tfunction_Point__geti01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Point* self = (Point*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   float tolua_ret = (float)  self->operator[](i);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_tfunction_Point__geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: echo of class  Point */
#ifndef TOLUA_DISABLE_tolua_tfunction_Point_echo00
static int tolua_tfunction_Point_echo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point::Error e = ((Point::Error) (int)  tolua_tonumber(tolua_S,2,0));
  {
   Point::Error tolua_ret = (Point::Error)  Point::echo(e);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'echo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_tfunction_alg_add00
static int tolua_tfunction_alg_add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* p1 = ((const Point*)  tolua_tousertype(tolua_S,1,0));
  const Point* p2 = ((const Point*)  tolua_tousertype(tolua_S,2,0));
  {
   Point tolua_ret = (Point)  add(*p1,*p2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_tfunction_alg_sub00
static int tolua_tfunction_alg_sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* p1 = ((const Point*)  tolua_tousertype(tolua_S,1,0));
  const Point* p2 = ((const Point*)  tolua_tousertype(tolua_S,2,0));
  {
   Point tolua_ret = (Point)  sub(*p1,*p2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: mult */
#ifndef TOLUA_DISABLE_tolua_tfunction_alg_mult00
static int tolua_tfunction_alg_mult00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Point",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* p1 = ((const Point*)  tolua_tousertype(tolua_S,1,0));
  const Point* p2 = ((const Point*)  tolua_tousertype(tolua_S,2,0));
  {
   Point tolua_ret = (Point)  mult(*p1,*p2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mult'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: div */
#ifndef TOLUA_DISABLE_tolua_tfunction_alg_div00
static int tolua_tfunction_alg_div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* p1 = ((const Point*)  tolua_tousertype(tolua_S,1,0));
  float n = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Point tolua_ret = (Point)  div(*p1,n);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: getpoint */
#ifndef TOLUA_DISABLE_tolua_tfunction_getpoint00
static int tolua_tfunction_getpoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Point* p = ((const Point*)  tolua_tousertype(tolua_S,1,0));
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   getpoint(p,&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getpoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: setpoint */
#ifndef TOLUA_DISABLE_tolua_tfunction_setpoint00
static int tolua_tfunction_setpoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Point",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Point* p = ((Point*)  tolua_tousertype(tolua_S,1,0));
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   setpoint(p,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setpoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: average */
#ifndef TOLUA_DISABLE_tolua_tfunction_average00
static int tolua_tfunction_average00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int n = ((int)  tolua_tonumber(tolua_S,1,0));
#ifdef __cplusplus
  Point* v = Mtolua_new_dim(Point, n);
#else
  Point* v = (Point*) malloc((n)*sizeof(Point));
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,2,"Point",n,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<n;i++)
    v[i] = *((Point*)  tolua_tofieldusertype(tolua_S,2,i+1,0));
   }
  }
  {
   Point tolua_ret = (Point)  average(n,v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
  {
   int i;
   for(i=0; i<n;i++)
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(v[i]));
    tolua_pushfieldusertype_and_takeownership(tolua_S,2,i+1,tolua_obj,"Point");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)& v[i],sizeof(Point));
    tolua_pushfieldusertype(tolua_S,2,i+1,tolua_obj,"Point");
#endif
   }
  }
#ifdef __cplusplus
  Mtolua_delete_dim(v);
#else
  free(v);
#endif
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'average'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: averagepointer */
#ifndef TOLUA_DISABLE_tolua_tfunction_averagepointer00
static int tolua_tfunction_averagepointer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int n = ((int)  tolua_tonumber(tolua_S,1,0));
#ifdef __cplusplus
  Point** v = Mtolua_new_dim(Point*, n);
#else
  Point** v = (Point**) malloc((n)*sizeof(Point*));
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,2,"Point",n,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<n;i++)
    v[i] = ((Point*)  tolua_tofieldusertype(tolua_S,2,i+1,0));
   }
  }
  {
   Point tolua_ret = (Point)  averagepointer(n,v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Point));
     tolua_pushusertype(tolua_S,tolua_obj,"Point");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
  {
   int i;
   for(i=0; i<n;i++)
   tolua_pushfieldusertype(tolua_S,2,i+1,(void*) v[i],"Point");
  }
#ifdef __cplusplus
  Mtolua_delete_dim(v);
#else
  free(v);
#endif
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'averagepointer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: copyvector */
#ifndef TOLUA_DISABLE_tolua_tfunction_copyvector00
static int tolua_tfunction_copyvector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int n = ((int)  tolua_tonumber(tolua_S,1,0));
#ifdef __cplusplus
  Point* v = Mtolua_new_dim(Point, n);
#else
  Point* v = (Point*) malloc((n)*sizeof(Point));
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,2,"Point",n,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<n;i++)
    v[i] = *((Point*)  tolua_tofieldusertype(tolua_S,2,i+1,0));
   }
  }
  {
   copyvector(n,v);
  }
#ifdef __cplusplus
  Mtolua_delete_dim(v);
#else
  free(v);
#endif
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'copyvector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: copyvector */
#ifndef TOLUA_DISABLE_tolua_tfunction_copyvector01
static int tolua_tfunction_copyvector01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_istable(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int n = ((int)  tolua_tonumber(tolua_S,1,0));
#ifdef __cplusplus
  Point* v = Mtolua_new_dim(Point, n);
#else
  Point* v = (Point*) malloc((n)*sizeof(Point));
#endif
#ifdef __cplusplus
  Point* u = Mtolua_new_dim(Point, n);
#else
  Point* u = (Point*) malloc((n)*sizeof(Point));
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,2,"Point",n,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<n;i++)
    v[i] = *((Point*)  tolua_tofieldusertype(tolua_S,2,i+1,0));
   }
  }
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,3,"Point",n,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<n;i++)
    u[i] = *((Point*)  tolua_tofieldusertype(tolua_S,3,i+1,0));
   }
  }
  {
   copyvector(n,v,u);
  }
  {
   int i;
   for(i=0; i<n;i++)
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Point)(u[i]));
    tolua_pushfieldusertype_and_takeownership(tolua_S,3,i+1,tolua_obj,"Point");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)& u[i],sizeof(Point));
    tolua_pushfieldusertype(tolua_S,3,i+1,tolua_obj,"Point");
#endif
   }
  }
#ifdef __cplusplus
  Mtolua_delete_dim(v);
#else
  free(v);
#endif
#ifdef __cplusplus
  Mtolua_delete_dim(u);
#else
  free(u);
#endif
 }
 return 0;
tolua_lerror:
 return tolua_tfunction_copyvector00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: invert */
#ifndef TOLUA_DISABLE_tolua_tfunction_invert00
static int tolua_tfunction_invert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Order o = ((Order) (int)  tolua_tonumber(tolua_S,1,0));
  {
   Order tolua_ret = (Order)  invert(o);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'invert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  ColorPoint */
#ifndef TOLUA_DISABLE_tolua_tfunction_ColorPoint_new00
static int tolua_tfunction_ColorPoint_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ColorPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float px = ((float)  tolua_tonumber(tolua_S,2,0));
  float py = ((float)  tolua_tonumber(tolua_S,3,0));
  float cr = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  float cg = ((float)  tolua_tonumber(tolua_S,5,0.0f));
  float cb = ((float)  tolua_tonumber(tolua_S,6,0.0f));
  {
   ColorPoint* tolua_ret = (ColorPoint*)  Mtolua_new((ColorPoint)(px,py,cr,cg,cb));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ColorPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  ColorPoint */
#ifndef TOLUA_DISABLE_tolua_tfunction_ColorPoint_new00_local
static int tolua_tfunction_ColorPoint_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ColorPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float px = ((float)  tolua_tonumber(tolua_S,2,0));
  float py = ((float)  tolua_tonumber(tolua_S,3,0));
  float cr = ((float)  tolua_tonumber(tolua_S,4,0.0f));
  float cg = ((float)  tolua_tonumber(tolua_S,5,0.0f));
  float cb = ((float)  tolua_tonumber(tolua_S,6,0.0f));
  {
   ColorPoint* tolua_ret = (ColorPoint*)  Mtolua_new((ColorPoint)(px,py,cr,cg,cb));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ColorPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ColorPoint */
#ifndef TOLUA_DISABLE_tolua_tfunction_ColorPoint_delete00
static int tolua_tfunction_ColorPoint_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ColorPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ColorPoint* self = (ColorPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getcolor of class  ColorPoint */
#ifndef TOLUA_DISABLE_tolua_tfunction_ColorPoint_getcolor00
static int tolua_tfunction_ColorPoint_getcolor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ColorPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ColorPoint* self = (const ColorPoint*)  tolua_tousertype(tolua_S,1,0);
  float red = ((float)  tolua_tonumber(tolua_S,2,0));
  float green = ((float)  tolua_tonumber(tolua_S,3,0));
  float blue = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getcolor'", NULL);
#endif
  {
   self->getcolor(&red,&green,&blue);
   tolua_pushnumber(tolua_S,(lua_Number)red);
   tolua_pushnumber(tolua_S,(lua_Number)green);
   tolua_pushnumber(tolua_S,(lua_Number)blue);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getcolor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MakeRed of class  ColorPoint */
#ifndef TOLUA_DISABLE_tolua_tfunction_ColorPoint_MakeRed00
static int tolua_tfunction_ColorPoint_MakeRed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ColorPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   ColorPoint* tolua_ret = (ColorPoint*)  ColorPoint::MakeRed(x,y);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ColorPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MakeRed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_tfunction_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"FIRST",FIRST);
  tolua_constant(tolua_S,"SECOND",SECOND);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Point","Point","",tolua_collect_Point);
  #else
  tolua_cclass(tolua_S,"Point","Point","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Point");
   tolua_constant(tolua_S,"SUCCESS",Point::SUCCESS);
   tolua_constant(tolua_S,"ERROR",Point::ERROR);
   tolua_function(tolua_S,"new",tolua_tfunction_Point_new00);
   tolua_function(tolua_S,"new_local",tolua_tfunction_Point_new00_local);
   tolua_function(tolua_S,".call",tolua_tfunction_Point_new00_local);
   tolua_function(tolua_S,"delete",tolua_tfunction_Point_delete00);
   tolua_function(tolua_S,"set",tolua_tfunction_Point_set00);
   tolua_function(tolua_S,"set",tolua_tfunction_Point_set01);
   tolua_function(tolua_S,"setpointer",tolua_tfunction_Point_setpointer00);
   tolua_function(tolua_S,"setref",tolua_tfunction_Point_setref00);
   tolua_function(tolua_S,"setvalue",tolua_tfunction_Point_setvalue00);
   tolua_function(tolua_S,"setconst",tolua_tfunction_Point_setconst00);
   tolua_function(tolua_S,"setname",tolua_tfunction_Point_setname00);
   tolua_function(tolua_S,"get",tolua_tfunction_Point_get00);
   tolua_function(tolua_S,"get",tolua_tfunction_Point_get01);
   tolua_function(tolua_S,"getpointer",tolua_tfunction_Point_getpointer00);
   tolua_function(tolua_S,"getref",tolua_tfunction_Point_getref00);
   tolua_function(tolua_S,"getvalue",tolua_tfunction_Point_getvalue00);
   tolua_function(tolua_S,"getconst",tolua_tfunction_Point_getconst00);
   tolua_function(tolua_S,"getname",tolua_tfunction_Point_getname00);
   tolua_function(tolua_S,".add",tolua_tfunction_Point__add00);
   tolua_function(tolua_S,".sub",tolua_tfunction_Point__sub00);
   tolua_function(tolua_S,".mul",tolua_tfunction_Point__mul00);
   tolua_function(tolua_S,".div",tolua_tfunction_Point__div00);
   tolua_function(tolua_S,".lt",tolua_tfunction_Point__lt00);
   tolua_function(tolua_S,".le",tolua_tfunction_Point__le00);
   tolua_function(tolua_S,".eq",tolua_tfunction_Point__eq00);
   tolua_function(tolua_S,".geti",tolua_tfunction_Point__geti00);
   tolua_function(tolua_S,".seti",tolua_tfunction_Point__seti00);
   tolua_function(tolua_S,".geti",tolua_tfunction_Point__geti01);
   tolua_function(tolua_S,"echo",tolua_tfunction_Point_echo00);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"alg",0);
  tolua_beginmodule(tolua_S,"alg");
   tolua_function(tolua_S,"add",tolua_tfunction_alg_add00);
   tolua_function(tolua_S,"sub",tolua_tfunction_alg_sub00);
   tolua_function(tolua_S,"mult",tolua_tfunction_alg_mult00);
   tolua_function(tolua_S,"div",tolua_tfunction_alg_div00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"getpoint",tolua_tfunction_getpoint00);
  tolua_function(tolua_S,"setpoint",tolua_tfunction_setpoint00);
  tolua_function(tolua_S,"average",tolua_tfunction_average00);
  tolua_function(tolua_S,"averagepointer",tolua_tfunction_averagepointer00);
  tolua_function(tolua_S,"copyvector",tolua_tfunction_copyvector00);
  tolua_function(tolua_S,"copyvector",tolua_tfunction_copyvector01);
  tolua_function(tolua_S,"invert",tolua_tfunction_invert00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ColorPoint","ColorPoint","Point",tolua_collect_ColorPoint);
  #else
  tolua_cclass(tolua_S,"ColorPoint","ColorPoint","Point",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ColorPoint");
   tolua_function(tolua_S,"new",tolua_tfunction_ColorPoint_new00);
   tolua_function(tolua_S,"new_local",tolua_tfunction_ColorPoint_new00_local);
   tolua_function(tolua_S,".call",tolua_tfunction_ColorPoint_new00_local);
   tolua_function(tolua_S,"delete",tolua_tfunction_ColorPoint_delete00);
   tolua_function(tolua_S,"getcolor",tolua_tfunction_ColorPoint_getcolor00);
   tolua_function(tolua_S,"MakeRed",tolua_tfunction_ColorPoint_MakeRed00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_tfunction (lua_State* tolua_S) {
 return tolua_tfunction_open(tolua_S);
};
#endif

