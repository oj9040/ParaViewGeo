/*=========================================================================

  Program:   ParaView
  Module:    vtkPVPLOT3DReaderModule.h

  Copyright (c) Kitware, Inc.
  All rights reserved.
  See Copyright.txt or http://www.paraview.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
// .NAME vtkPVPLOT3DReaderModule - A class to handle the UI for PLOT3D readers
// .SECTION Description
// .SECTION See also
// vtkPVReaderModule vtkPVAdvancedReaderModule

#ifndef __vtkPVPLOT3DReaderModule_h
#define __vtkPVPLOT3DReaderModule_h

#include "vtkPVAdvancedReaderModule.h"

class VTK_EXPORT vtkPVPLOT3DReaderModule : public vtkPVAdvancedReaderModule
{
public:
  static vtkPVPLOT3DReaderModule* New();
  vtkTypeRevisionMacro(vtkPVPLOT3DReaderModule, vtkPVAdvancedReaderModule);
  void PrintSelf(ostream& os, vtkIndent indent);
    
  // Description:
  virtual void Accept() { this->Accept(0); }
  virtual void Accept(int hideFlag) { this->Accept(hideFlag, 1); }
  virtual void Accept(int hideFlag, int hideSource);

  // Description:
  // Update the "enable" state of the object and its internal parts.
  // Depending on different Ivars (this->Enabled, the application's 
  // Limited Edition Mode, etc.), the "enable" state of the object is updated
  // and propagated to its internal parts/subwidgets. This will, for example,
  // enable/disable parts of the widget UI, enable/disable the visibility
  // of 3D widgets, etc.
  virtual void UpdateEnableState();

protected:
  vtkPVPLOT3DReaderModule();
  ~vtkPVPLOT3DReaderModule();

  int AlreadyAccepted;

private:
  vtkPVPLOT3DReaderModule(const vtkPVPLOT3DReaderModule&); // Not implemented
  void operator=(const vtkPVPLOT3DReaderModule&); // Not implemented
};

#endif
