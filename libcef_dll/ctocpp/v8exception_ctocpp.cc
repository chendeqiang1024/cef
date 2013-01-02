// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/ctocpp/v8exception_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefString CefV8ExceptionCToCpp::GetMessage() {
  if (CEF_MEMBER_MISSING(struct_, get_message))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_message(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefV8ExceptionCToCpp::GetSourceLine() {
  if (CEF_MEMBER_MISSING(struct_, get_source_line))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_source_line(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefV8ExceptionCToCpp::GetScriptResourceName() {
  if (CEF_MEMBER_MISSING(struct_, get_script_resource_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_script_resource_name(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

int CefV8ExceptionCToCpp::GetLineNumber() {
  if (CEF_MEMBER_MISSING(struct_, get_line_number))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_line_number(struct_);

  // Return type: simple
  return _retval;
}

int CefV8ExceptionCToCpp::GetStartPosition() {
  if (CEF_MEMBER_MISSING(struct_, get_start_position))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_start_position(struct_);

  // Return type: simple
  return _retval;
}

int CefV8ExceptionCToCpp::GetEndPosition() {
  if (CEF_MEMBER_MISSING(struct_, get_end_position))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_end_position(struct_);

  // Return type: simple
  return _retval;
}

int CefV8ExceptionCToCpp::GetStartColumn() {
  if (CEF_MEMBER_MISSING(struct_, get_start_column))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_start_column(struct_);

  // Return type: simple
  return _retval;
}

int CefV8ExceptionCToCpp::GetEndColumn() {
  if (CEF_MEMBER_MISSING(struct_, get_end_column))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_end_column(struct_);

  // Return type: simple
  return _retval;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefV8ExceptionCToCpp, CefV8Exception,
    cef_v8exception_t>::DebugObjCt = 0;
#endif

