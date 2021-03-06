// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_SpotLight_HeaderFile
#define _V3d_SpotLight_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_V3d_SpotLight_HeaderFile
#include <Handle_V3d_SpotLight.hxx>
#endif

#ifndef _V3d_PositionLight_HeaderFile
#include <V3d_PositionLight.hxx>
#endif
#ifndef _Handle_V3d_Viewer_HeaderFile
#include <Handle_V3d_Viewer.hxx>
#endif
#ifndef _V3d_Coordinate_HeaderFile
#include <V3d_Coordinate.hxx>
#endif
#ifndef _V3d_TypeOfOrientation_HeaderFile
#include <V3d_TypeOfOrientation.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Quantity_Coefficient_HeaderFile
#include <Quantity_Coefficient.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Quantity_Parameter_HeaderFile
#include <Quantity_Parameter.hxx>
#endif
#ifndef _Handle_V3d_View_HeaderFile
#include <Handle_V3d_View.hxx>
#endif
#ifndef _V3d_TypeOfRepresentation_HeaderFile
#include <V3d_TypeOfRepresentation.hxx>
#endif
#ifndef _Handle_Graphic3d_Group_HeaderFile
#include <Handle_Graphic3d_Group.hxx>
#endif
class V3d_BadValue;
class V3d_Viewer;
class V3d_View;
class Graphic3d_Group;


//! Creation and modification of a spot. <br>
class V3d_SpotLight : public V3d_PositionLight {

public:

  //! Creates a light source of the Spot type in the viewer. <br>
//!          The attenuation factor F which determines <br>
//!          the illumination of a surface depends on the following formula : <br>
//!          F = 1/(A1 + A2*Length) <br>
//!              A1,A2 being the 2 factors of attenuation <br>
//!              Length is the distance from the source to the surface. <br>
//!	    The default values (1.0,0.0) correspond to a minimum <br>
//!	    of attenuation . <br>
//!	    The concentration factor determines the dispersion <br>
//!	    of the light on the surface, the default value <br>
//!	    (1.0) corresponds to a minimum of dispersion . <br>//!  Warning! raises BadValue from V3d  - <br>
//!	If one of the coefficients is not between 0 and 1 . <br>
//!	If the lighting angle is <= 0 ou > PI . <br>
  Standard_EXPORT   V3d_SpotLight(const Handle(V3d_Viewer)& VM,const V3d_Coordinate X,const V3d_Coordinate Y,const V3d_Coordinate Z,const V3d_TypeOfOrientation Direction = V3d_XnegYnegZpos,const Quantity_NameOfColor Color = Quantity_NOC_WHITE,const Quantity_Coefficient Attenuation1 = 1.0,const Quantity_Coefficient Attenuation2 = 0.0,const Quantity_Coefficient Concentration = 1.0,const Quantity_PlaneAngle Angle = 0.523599);
  //! Creates a light source of the Spot type in the viewer. <br>
//!          Xt,Yt,Zt : Coordinate of light source Target. <br>
//!          Xp,Yp,Zp : Coordinate of light source Position. <br>
//!          The others parameters describe before. <br>//!  Warning! raises BadValue from V3d  - <br>
//!	If one of the coefficients is not between 0 and 1 . <br>
//!	If the lighting angle is <= 0 ou > PI . <br>
  Standard_EXPORT   V3d_SpotLight(const Handle(V3d_Viewer)& VM,const V3d_Coordinate Xt,const V3d_Coordinate Yt,const V3d_Coordinate Zt,const V3d_Coordinate Xp,const V3d_Coordinate Yp,const V3d_Coordinate Zp,const Quantity_NameOfColor Color = Quantity_NOC_WHITE,const Quantity_Coefficient Attenuation1 = 1.0,const Quantity_Coefficient Attenuation2 = 0.0,const Quantity_Coefficient Concentration = 1.0,const Quantity_PlaneAngle Angle = 0.523599);
  //! Defines the position of the light source. <br>
  Standard_EXPORT   virtual  void SetPosition(const V3d_Coordinate X,const V3d_Coordinate Y,const V3d_Coordinate Z) ;
  //! Defines the direction of the light source. <br>
//!	If the normal vector is NULL. <br>
  Standard_EXPORT     void SetDirection(const Quantity_Parameter Vx,const Quantity_Parameter Vy,const Quantity_Parameter Vz) ;
  //! Defines the direction of the light source <br>
//!	     according to a predefined directional vector. <br>
  Standard_EXPORT     void SetDirection(const V3d_TypeOfOrientation Orientation) ;
  //! Defines the coefficients of attenuation. <br>
//!  Warning! raises BadValue from V3d <br>
//!	    if one of the coefficient is <0 ou >1 . <br>
  Standard_EXPORT     void SetAttenuation(const Quantity_Coefficient A1,const Quantity_Coefficient A2) ;
  //! Defines the coefficient of concentration. <br>
//!	if the coefficient is <0 ou >1 . <br>
  Standard_EXPORT     void SetConcentration(const Quantity_Coefficient C) ;
  //! Defines the spot angle in RADIANS. <br>
//!  Warning: raises BadValue from from V3d <br>
//!	If the angle is <= 0 ou > PI . <br>
  Standard_EXPORT     void SetAngle(const Quantity_PlaneAngle Angle) ;
  //! Display the graphic structure of light source <br>
//!          in the choosen view. We have three type of representation <br>
//!          - SIMPLE   : Only the light source is displayed. <br>
//!          - PARTIAL  : The light source and the light space are <br>
//!                       displayed. <br>
//!          - COMPLETE : The light source, the light space and the <br>
//!                       radius of light space are displayed. <br>
//!          We can choose the "SAMELAST" as parameter of representation <br>
//!          In this case the graphic structure representation will be <br>
//!          the last displayed. <br>
  Standard_EXPORT     void Display(const Handle(V3d_View)& aView,const V3d_TypeOfRepresentation Representation) ;
  //! Returns the direction of the light source defined by Vx,Vy,Vz. <br>
  Standard_EXPORT     void Direction(Quantity_Parameter& Vx,Quantity_Parameter& Vy,Quantity_Parameter& Vz) const;
  //! Returns the position of the light source. <br>
  Standard_EXPORT     void Position(V3d_Coordinate& X,V3d_Coordinate& Y,V3d_Coordinate& Z) const;
  //! Returns the attenuation factors A1,A2 of the light source. <br>
  Standard_EXPORT     void Attenuation(Quantity_Coefficient& A1,Quantity_Coefficient& A2) const;
  
  Standard_EXPORT     Quantity_Coefficient Concentration() const;
  //! Returns the spot angle. <br>
  Standard_EXPORT     Quantity_PlaneAngle Angle() const;




  DEFINE_STANDARD_RTTI(V3d_SpotLight)

protected:




private: 

  //! Defines the representation of the spot light source. <br>
  Standard_EXPORT     void Symbol(const Handle(Graphic3d_Group)& gsymbol,const Handle(V3d_View)& aView) const;



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
