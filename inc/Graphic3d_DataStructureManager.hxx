// Created by: CAL
// Copyright (c) 1995-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _Graphic3d_DataStructureManager_HeaderFile
#define _Graphic3d_DataStructureManager_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <MMgt_TShared.hxx>


class Graphic3d_DataStructureManager;
DEFINE_STANDARD_HANDLE(Graphic3d_DataStructureManager, MMgt_TShared)

//! This class allows the definition of a manager to
//! which the graphic objects are associated.
//! It allows them to be globally manipulated.
//! It defines the global attributes.
class Graphic3d_DataStructureManager : public MMgt_TShared
{

public:

  DEFINE_STANDARD_RTTIEXT(Graphic3d_DataStructureManager,MMgt_TShared)

protected:

  
  //! Initializes the manager <me>.
  Standard_EXPORT Graphic3d_DataStructureManager();



private:




};







#endif // _Graphic3d_DataStructureManager_HeaderFile
