/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkPVImageReader.h
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

Copyright (c) 1998-1999 Kitware Inc. 469 Clifton Corporate Parkway,
Clifton Park, NY, 12065, USA.

All rights reserved. No part of this software may be reproduced, distributed,
or modified, in any form or by any means, without permission in writing from
Kitware Inc.

IN NO EVENT SHALL THE AUTHORS OR DISTRIBUTORS BE LIABLE TO ANY PARTY FOR
DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
OF THE USE OF THIS SOFTWARE, ITS DOCUMENTATION, OR ANY DERIVATIVES THEREOF,
EVEN IF THE AUTHORS HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

THE AUTHORS AND DISTRIBUTORS SPECIFICALLY DISCLAIM ANY WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
PARTICULAR PURPOSE, AND NON-INFRINGEMENT.  THIS SOFTWARE IS PROVIDED ON AN
"AS IS" BASIS, AND THE AUTHORS AND DISTRIBUTORS HAVE NO OBLIGATION TO PROVIDE
MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.

=========================================================================*/

#ifndef __vtkPVImageReader_h
#define __vtkPVImageReader_h

#include "vtkKWLabel.h"
#include "vtkKWEntry.h"
#include "vtkKWPushButton.h"
#include "vtkImageReader.h"
#include "vtkPVSource.h"

class vtkPVImage;


class VTK_EXPORT vtkPVImageReader : public vtkPVSource
{
public:
  static vtkPVImageReader* New();
  vtkTypeMacro(vtkPVImageReader, vtkPVSource);

  // Description:
  // You will need to clone this object before you create it.
  void CreateProperties();
  
  // Description:
  // For now you have to set the output explicitly.  This allows you to manage
  // the object creation/tcl-names in the other processes.
  void SetOutput(vtkPVImage *pvi);
  vtkPVImage *GetOutput();
  
  vtkGetObjectMacro(ImageReader, vtkImageReader);
  
  void ReadImage();
  void ImageAccepted();
  void OpenFile();
  
protected:
  vtkPVImageReader();
  ~vtkPVImageReader();
  vtkPVImageReader(const vtkPVImageReader&) {};
  void operator=(const vtkPVImageReader&) {};
  
  vtkKWPushButton *Accept;
  vtkKWPushButton *Open;
  vtkKWLabel *XLabel;
  vtkKWEntry *XDimension;
  vtkKWLabel *YLabel;
  vtkKWEntry *YDimension;
  vtkKWLabel *ZLabel;
  vtkKWEntry *ZDimension;
  
  vtkImageReader *ImageReader;
};

#endif
