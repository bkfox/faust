/************************************************************************
 ************************************************************************
    FAUST compiler
    Copyright (C) 2019 GRAME, Centre National de Creation Musicale
    ---------------------------------------------------------------------
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 ************************************************************************
 ************************************************************************/

#include "TMutex.h"
#include "export.hh"

extern TLockAble* gDSPFactoriesLock;

#define LOCK_API TLock lock(gDSPFactoriesLock);

extern "C" EXPORT bool startMTDSPFactories();
extern "C" EXPORT void stopMTDSPFactories();
