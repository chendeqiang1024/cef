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
// $hash=db849902d1f4a2d4e41103d76fe5985a078a413a$
//

#include "libcef_dll/ctocpp/app_ctocpp.h"
#include "libcef_dll/cpptoc/command_line_cpptoc.h"
#include "libcef_dll/cpptoc/scheme_registrar_cpptoc.h"
#include "libcef_dll/ctocpp/browser_process_handler_ctocpp.h"
#include "libcef_dll/ctocpp/render_process_handler_ctocpp.h"
#include "libcef_dll/ctocpp/resource_bundle_handler_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefAppCToCpp::OnBeforeCommandLineProcessing(
    const CefString& process_type,
    CefRefPtr<CefCommandLine> command_line) {
  cef_app_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_command_line_processing)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: command_line; type: refptr_diff
  DCHECK(command_line.get());
  if (!command_line.get()) {
    return;
  }
  // Unverified params: process_type

  // Execute
  _struct->on_before_command_line_processing(
      _struct, process_type.GetStruct(),
      CefCommandLineCppToC::Wrap(command_line));
}

NO_SANITIZE("cfi-icall")
void CefAppCToCpp::OnRegisterCustomSchemes(
    CefRawPtr<CefSchemeRegistrar> registrar) {
  cef_app_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_register_custom_schemes)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: registrar; type: rawptr_diff
  DCHECK(registrar);
  if (!registrar) {
    return;
  }

  // Translate param: registrar; type: rawptr_diff
  CefOwnPtr<CefSchemeRegistrarCppToC> registrarPtr(
      CefSchemeRegistrarCppToC::WrapRaw(registrar));

  // Execute
  _struct->on_register_custom_schemes(_struct, registrarPtr->GetStruct());
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefResourceBundleHandler> CefAppCToCpp::GetResourceBundleHandler() {
  cef_app_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_resource_bundle_handler)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_resource_bundle_handler_t* _retval =
      _struct->get_resource_bundle_handler(_struct);

  // Return type: refptr_same
  return CefResourceBundleHandlerCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowserProcessHandler> CefAppCToCpp::GetBrowserProcessHandler() {
  cef_app_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_browser_process_handler)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_process_handler_t* _retval =
      _struct->get_browser_process_handler(_struct);

  // Return type: refptr_same
  return CefBrowserProcessHandlerCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefRenderProcessHandler> CefAppCToCpp::GetRenderProcessHandler() {
  cef_app_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_render_process_handler)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_render_process_handler_t* _retval =
      _struct->get_render_process_handler(_struct);

  // Return type: refptr_same
  return CefRenderProcessHandlerCToCpp::Wrap(_retval);
}

// CONSTRUCTOR - Do not edit by hand.

CefAppCToCpp::CefAppCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefAppCToCpp::~CefAppCToCpp() {}

template <>
cef_app_t* CefCToCppRefCounted<CefAppCToCpp, CefApp, cef_app_t>::UnwrapDerived(
    CefWrapperType type,
    CefApp* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefAppCToCpp, CefApp, cef_app_t>::kWrapperType = WT_APP;
