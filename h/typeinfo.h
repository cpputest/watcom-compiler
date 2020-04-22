///////////////////////////////////////////////////////////////////////////
// FILE: typeinfo.h/typeinfo (RTTI support)
//
// =========================================================================
//
//                          Open Watcom Project
//
//    Copyright (c) 2002-2010 Open Watcom Contributors. All Rights Reserved.
//    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
//
//    This file is automatically generated. Do not edit directly.
//
// =========================================================================
//
// Description: This header is part of the C++ standard library. It
//              defines some classes and exceptions that pertain to
//              run time type identification support.
///////////////////////////////////////////////////////////////////////////
#ifndef _TYPEINFO_H_INCLUDED
#define _TYPEINFO_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifndef _TYPEINFO_INCLUDED
 #include <typeinfo>
#endif
using std::type_info;
using std::bad_cast;
using std::bad_typeid;

// All included names should also be in the global namespace.
#ifndef _EXCEPTION_H_INCLUDED
 #include <exceptio.h>
#endif

#endif
