// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPDS_FaceInfo_HeaderFile
#define _BOPDS_FaceInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOPDS_IndexedMapOfPaveBlock_HeaderFile
#include <BOPDS_IndexedMapOfPaveBlock.hxx>
#endif
#ifndef _BOPCol_MapOfInteger_HeaderFile
#include <BOPCol_MapOfInteger.hxx>
#endif



//! The class BOPDS_FaceInfo is to store <br>
//! handy information about state of face <br>
class BOPDS_FaceInfo  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty contructor <br>
//! <br>
      BOPDS_FaceInfo();
virtual ~BOPDS_FaceInfo();
  
//!  Contructor <br>
//!  theAllocator - the allocator to manage the memory <br>
//! <br>
      BOPDS_FaceInfo(const BOPCol_BaseAllocator& theAllocator);
  
//!  Clears the contents <br>
  Standard_EXPORT     void Clear() ;
  
//! Modifier <br>
//! Sets the index of the face <theI> <br>
        void SetIndex(const Standard_Integer theI) ;
  
//! Selector <br>
//! Returns the index of the face <br>
//! <br>
//! In <br>
//! <br>
        Standard_Integer Index() const;
  
//! Selector <br>
//! Returns the pave blocks of the face <br>
//! that  have state In <br>
       const BOPDS_IndexedMapOfPaveBlock& PaveBlocksIn() const;
  
//! Selector/Modifier <br>
//! Returns the pave blocks <br>
//!  of the face <br>
//! that  have state In <br>
        BOPDS_IndexedMapOfPaveBlock& ChangePaveBlocksIn() ;
  
//! Selector <br>
//! Returns the list of indices for vertices <br>
//!  of the face <br>
//! that have state In <br>
       const BOPCol_MapOfInteger& VerticesIn() const;
  
//! Selector/Modifier <br>
//! Returns the list of indices for vertices <br>
//!  of the face <br>
//! that have state In <br>
//! <br>
//! On <br>
//! <br>
        BOPCol_MapOfInteger& ChangeVerticesIn() ;
  
//! Selector <br>
//! Returns the pave blocks of the face <br>
//! that  have state On <br>
       const BOPDS_IndexedMapOfPaveBlock& PaveBlocksOn() const;
  
//! Selector/Modifier <br>
//! Returns the pave blocks <br>
//!  of the face <br>
//! that  have state On <br>
        BOPDS_IndexedMapOfPaveBlock& ChangePaveBlocksOn() ;
  
//! Selector <br>
//! Returns the list of indices for vertices <br>
//!  of the face <br>
//! that have state On <br>
       const BOPCol_MapOfInteger& VerticesOn() const;
  
//! Selector/Modifier <br>
//! Returns the list of indices for vertices <br>
//!  of the face <br>
//! that have state On <br>
//! <br>
//! Sections <br>
//! <br>
        BOPCol_MapOfInteger& ChangeVerticesOn() ;
  
//! Selector <br>
//! Returns the pave blocks of the face <br>
//! that are  pave blocks of section edges <br>
       const BOPDS_IndexedMapOfPaveBlock& PaveBlocksSc() const;
  
        BOPDS_IndexedMapOfPaveBlock& ChangePaveBlocksSc() ;
  
//! Selector <br>
//! Returns the list of indices for section  vertices <br>
//!  of the face <br>
       const BOPCol_MapOfInteger& VerticesSc() const;
  
//! Selector/Modifier <br>
//! Returns the list of indices for section  vertices <br>
//!  of the face <br>
//! <br>
//! Others <br>
//! <br>
        BOPCol_MapOfInteger& ChangeVerticesSc() ;





protected:



BOPCol_BaseAllocator myAllocator;
Standard_Integer myIndex;
BOPDS_IndexedMapOfPaveBlock myPaveBlocksIn;
BOPCol_MapOfInteger myVerticesIn;
BOPDS_IndexedMapOfPaveBlock myPaveBlocksOn;
BOPCol_MapOfInteger myVerticesOn;
BOPDS_IndexedMapOfPaveBlock myPaveBlocksSc;
BOPCol_MapOfInteger myVerticesSc;


private:





};


#include <BOPDS_FaceInfo.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
