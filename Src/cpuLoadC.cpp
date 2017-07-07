// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.4.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:373


#include "cpuLoadC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "cpuLoadC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for CPULoad.

CPULoad_ptr
TAO::Objref_Traits<CPULoad>::duplicate (
    CPULoad_ptr p)
{
  return CPULoad::_duplicate (p);
}

void
TAO::Objref_Traits<CPULoad>::release (
    CPULoad_ptr p)
{
  ::CORBA::release (p);
}

CPULoad_ptr
TAO::Objref_Traits<CPULoad>::nil (void)
{
  return CPULoad::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<CPULoad>::marshal (
    const CPULoad_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
CPULoad::getLoadAvgs (
  ::CORBA::Float_out oneMinAvg,
  ::CORBA::Float_out fiveMinAvg,
  ::CORBA::Float_out tenMinAvg)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Float>::out_arg_val _tao_oneMinAvg (oneMinAvg);
  TAO::Arg_Traits< ::CORBA::Float>::out_arg_val _tao_fiveMinAvg (fiveMinAvg);
  TAO::Arg_Traits< ::CORBA::Float>::out_arg_val _tao_tenMinAvg (tenMinAvg);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_oneMinAvg,
      &_tao_fiveMinAvg,
      &_tao_tenMinAvg
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "getLoadAvgs",
      11,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

CPULoad::CPULoad (void)
{
}

CPULoad::~CPULoad (void)
{
}

void
CPULoad::_tao_any_destructor (void *_tao_void_pointer)
{
  CPULoad *_tao_tmp_pointer =
    static_cast<CPULoad *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

CPULoad_ptr
CPULoad::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<CPULoad>::narrow (
        _tao_objref,
        "IDL:CPULoad:1.0");
}

CPULoad_ptr
CPULoad::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<CPULoad>::unchecked_narrow (
        _tao_objref);
}

CPULoad_ptr
CPULoad::_nil (void)
{
  return 0;
}

CPULoad_ptr
CPULoad::_duplicate (CPULoad_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
CPULoad::_tao_release (CPULoad_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
CPULoad::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:CPULoad:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* CPULoad::_interface_repository_id (void) const
{
  return "IDL:CPULoad:1.0";
}

::CORBA::Boolean
CPULoad::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_CPULoad (
    ::CORBA::tk_objref,
    "IDL:CPULoad:1.0",
    "CPULoad");
  
::CORBA::TypeCode_ptr const _tc_CPULoad =
  &_tao_tc_CPULoad;

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<CPULoad>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CPULoad_ptr _tao_elem)
{
  CPULoad_ptr _tao_objptr =
    CPULoad::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CPULoad_ptr *_tao_elem)
{
  TAO::Any_Impl_T<CPULoad>::insert (
      _tao_any,
      CPULoad::_tao_any_destructor,
      _tc_CPULoad,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    CPULoad_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<CPULoad>::extract (
        _tao_any,
        CPULoad::_tao_any_destructor,
        _tc_CPULoad,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CPULoad_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CPULoad_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::CPULoad RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



