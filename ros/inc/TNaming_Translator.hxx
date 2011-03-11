// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_Translator_HeaderFile
#define _TNaming_Translator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TColStd_IndexedDataMapOfTransientTransient_HeaderFile
#include <TColStd_IndexedDataMapOfTransientTransient.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#include <TopTools_DataMapOfShapeShape.hxx>
#endif
class TopoDS_Shape;
class TopTools_DataMapOfShapeShape;



class TNaming_Translator  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   TNaming_Translator();
  
  Standard_EXPORT     void Add(const TopoDS_Shape& aShape) ;
  
  Standard_EXPORT     void Perform() ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! returns copied  shape <br>
  Standard_EXPORT    const TopoDS_Shape Copied(const TopoDS_Shape& aShape) const;
  //! returns  DataMap  of  results;  (shape <-> copied  shape) <br>
  Standard_EXPORT    const TopTools_DataMapOfShapeShape& Copied() const;
  
  Standard_EXPORT     void DumpMap(const Standard_Boolean isWrite = Standard_False) const;





protected:





private:



Standard_Boolean myIsDone;
TColStd_IndexedDataMapOfTransientTransient myMap;
TopTools_DataMapOfShapeShape myDataMapOfResults;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif