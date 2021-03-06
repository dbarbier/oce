// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_OrdinateDimension_HeaderFile
#define _IGESDimen_OrdinateDimension_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_OrdinateDimension_HeaderFile
#include <Handle_IGESDimen_OrdinateDimension.hxx>
#endif

#ifndef _Handle_IGESDimen_GeneralNote_HeaderFile
#include <Handle_IGESDimen_GeneralNote.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESDimen_WitnessLine_HeaderFile
#include <Handle_IGESDimen_WitnessLine.hxx>
#endif
#ifndef _Handle_IGESDimen_LeaderArrow_HeaderFile
#include <Handle_IGESDimen_LeaderArrow.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class IGESDimen_GeneralNote;
class IGESDimen_WitnessLine;
class IGESDimen_LeaderArrow;


//! defines IGES Ordinate Dimension, Type <218> Form <0, 1>, <br>
//!          in package IGESDimen <br>
//! Note   : The ordinate dimension entity is used to <br>
//!          indicate dimensions from a common base line. <br>
//!          Dimensioning is only permitted along the XT <br>
//!          or YT axis. <br>
class IGESDimen_OrdinateDimension : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_OrdinateDimension();
  
  Standard_EXPORT     void Init(const Handle(IGESDimen_GeneralNote)& aNote,const Standard_Boolean aType,const Handle(IGESDimen_WitnessLine)& aLine,const Handle(IGESDimen_LeaderArrow)& anArrow) ;
  //! returns True if Witness Line and False if Leader (only for Form 0) <br>
  Standard_EXPORT     Standard_Boolean IsLine() const;
  //! returns True if Leader and False if Witness Line (only for Form 0) <br>
  Standard_EXPORT     Standard_Boolean IsLeader() const;
  //! returns the General Note entity associated. <br>
  Standard_EXPORT     Handle_IGESDimen_GeneralNote Note() const;
  //! returns the Witness Line associated or Null handle <br>
  Standard_EXPORT     Handle_IGESDimen_WitnessLine WitnessLine() const;
  //! returns the Leader associated or Null handle <br>
  Standard_EXPORT     Handle_IGESDimen_LeaderArrow Leader() const;




  DEFINE_STANDARD_RTTI(IGESDimen_OrdinateDimension)

protected:




private: 


Handle_IGESDimen_GeneralNote theNote;
Standard_Boolean isItLine;
Handle_IGESDimen_WitnessLine theWitnessLine;
Handle_IGESDimen_LeaderArrow theLeader;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
