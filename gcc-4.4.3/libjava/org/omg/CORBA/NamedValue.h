
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_NamedValue__
#define __org_omg_CORBA_NamedValue__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class NamedValue;
      }
    }
  }
}

class org::omg::CORBA::NamedValue : public ::java::lang::Object
{

public:
  NamedValue();
  virtual jint flags() = 0;
  virtual ::java::lang::String * name() = 0;
  virtual ::org::omg::CORBA::Any * value() = 0;
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_NamedValue__
