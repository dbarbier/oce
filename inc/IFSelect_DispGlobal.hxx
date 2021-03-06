// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_DispGlobal_HeaderFile
#define _IFSelect_DispGlobal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_DispGlobal_HeaderFile
#include <Handle_IFSelect_DispGlobal.hxx>
#endif

#ifndef _IFSelect_Dispatch_HeaderFile
#include <IFSelect_Dispatch.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TCollection_AsciiString;
class Interface_Graph;
class IFGraph_SubPartsIterator;


//! A DispGlobal gathers all the input Entities into only one <br>
//!           global Packet <br>
class IFSelect_DispGlobal : public IFSelect_Dispatch {

public:

  //! Creates a DispGlobal <br>
  Standard_EXPORT   IFSelect_DispGlobal();
  //! Returns as Label, "One File for all Input" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;
  //! Returns True : maximum equates 1 <br>
  Standard_EXPORT   virtual  Standard_Boolean LimitedMax(const Standard_Integer nbent,Standard_Integer& max) const;
  //! Returns True (count of packets is well known) and count is 1 <br>
  Standard_EXPORT   virtual  Standard_Integer PacketsCount(const Interface_Graph& G,Standard_Integer& count) const;
  //! Computes the list of produced Packets. It is made of only ONE <br>
//!           Packet, which gets the RootResult from the Final Selection. <br>
//!           Remark : the inherited exception raising is never activated. <br>
  Standard_EXPORT     void Packets(const Interface_Graph& G,IFGraph_SubPartsIterator& packs) const;




  DEFINE_STANDARD_RTTI(IFSelect_DispGlobal)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
