
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_ls_WriterOutputStream__
#define __gnu_xml_dom_ls_WriterOutputStream__

#pragma interface

#include <java/io/OutputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
        namespace ls
        {
            class WriterOutputStream;
        }
      }
    }
  }
}

class gnu::xml::dom::ls::WriterOutputStream : public ::java::io::OutputStream
{

public:
  WriterOutputStream(::java::io::Writer *);
public: // actually package-private
  virtual void setEncoding(::java::lang::String *);
public:
  virtual void write(jint);
  virtual void write(JArray< jbyte > *);
  virtual void write(JArray< jbyte > *, jint, jint);
  virtual void close();
  virtual void flush();
private:
  ::java::io::Writer * __attribute__((aligned(__alignof__( ::java::io::OutputStream)))) writer;
  ::java::lang::String * encoding;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_ls_WriterOutputStream__
