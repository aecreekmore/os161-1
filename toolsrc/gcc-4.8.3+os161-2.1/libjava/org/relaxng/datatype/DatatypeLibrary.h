
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_relaxng_datatype_DatatypeLibrary__
#define __org_relaxng_datatype_DatatypeLibrary__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace relaxng
    {
      namespace datatype
      {
          class Datatype;
          class DatatypeBuilder;
          class DatatypeLibrary;
      }
    }
  }
}

class org::relaxng::datatype::DatatypeLibrary : public ::java::lang::Object
{

public:
  virtual ::org::relaxng::datatype::DatatypeBuilder * createDatatypeBuilder(::java::lang::String *) = 0;
  virtual ::org::relaxng::datatype::Datatype * createDatatype(::java::lang::String *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_relaxng_datatype_DatatypeLibrary__