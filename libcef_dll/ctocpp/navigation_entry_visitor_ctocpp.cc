// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=48281bb0de6e38b45f5dbc60bf7609b476241d76$
//

#include "libcef_dll/ctocpp/navigation_entry_visitor_ctocpp.h"
#include "libcef_dll/cpptoc/navigation_entry_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefNavigationEntryVisitorCToCpp::Visit(CefRefPtr<CefNavigationEntry> entry,
                                            bool current,
                                            int index,
                                            int total) {
  shutdown_checker::AssertNotShutdown();

  cef_navigation_entry_visitor_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, visit)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: entry; type: refptr_diff
  DCHECK(entry.get());
  if (!entry.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->visit(_struct, CefNavigationEntryCppToC::Wrap(entry),
                               current, index, total);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefNavigationEntryVisitorCToCpp::CefNavigationEntryVisitorCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefNavigationEntryVisitorCToCpp::~CefNavigationEntryVisitorCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_navigation_entry_visitor_t* CefCToCppRefCounted<
    CefNavigationEntryVisitorCToCpp,
    CefNavigationEntryVisitor,
    cef_navigation_entry_visitor_t>::UnwrapDerived(CefWrapperType type,
                                                   CefNavigationEntryVisitor*
                                                       c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefNavigationEntryVisitorCToCpp,
                        CefNavigationEntryVisitor,
                        cef_navigation_entry_visitor_t>::kWrapperType =
        WT_NAVIGATION_ENTRY_VISITOR;
