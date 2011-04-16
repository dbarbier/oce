// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_FaceEdgeInterference_HeaderFile
#define _TopOpeBRepDS_FaceEdgeInterference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_FaceEdgeInterference_HeaderFile
#include <Handle_TopOpeBRepDS_FaceEdgeInterference.hxx>
#endif

#ifndef _TopOpeBRepDS_ShapeShapeInterference_HeaderFile
#include <TopOpeBRepDS_ShapeShapeInterference.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopOpeBRepDS_Config_HeaderFile
#include <TopOpeBRepDS_Config.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TopOpeBRepDS_Transition;



class TopOpeBRepDS_FaceEdgeInterference : public TopOpeBRepDS_ShapeShapeInterference {

public:

  //! Create an interference of EDGE <G> on FACE <S>. <br>
  Standard_EXPORT   TopOpeBRepDS_FaceEdgeInterference(const TopOpeBRepDS_Transition& T,const Standard_Integer S,const Standard_Integer G,const Standard_Boolean GIsBound,const TopOpeBRepDS_Config C);
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& OS) const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_FaceEdgeInterference)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif