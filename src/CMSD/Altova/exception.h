////////////////////////////////////////////////////////////////////////
//
// exception.h
//
// This file was generated by XMLSpy 2011r3sp1 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////


#pragma once
#ifndef _Altova_exception_INCLUDED_
#define _Altova_exception_INCLUDED_

#include <string>
#include <stdexcept>
#include "AltovaDefs.h"
#include "StructInfo.h"

namespace altova
{
	class Error : public std::logic_error
	{
		const std::exception* m_inner;
		string_type m_message;
	public:
		Error(const string_type& message, const std::exception* inner = 0)
			: std::logic_error("altova::Error"), m_message(message), m_inner(inner) {}

		~Error () throw () {};

		string_type message() const { return m_message; }
		const std::exception* inner() const { return m_inner; }
	};

	class Exception : public std::runtime_error
	{
		const std::exception* m_inner;
		string_type m_message;
	public:
		Exception(const string_type& message, const std::exception* inner = 0)
			: std::runtime_error("altova::Exception"), m_message(message), m_inner(inner) {}

        ~Exception () throw () {};

		string_type message() const { return m_message; }
		const std::exception* inner() const { return m_inner; }
	};


	class InvalidArgumentException : public Exception
	{
	public:
		InvalidArgumentException(const string_type& message, const std::exception* inner = 0)
			: Exception(message, inner) {}
	};


	/*	Exception thrown when a type conversion fails.

		Type conversions are value space conversions, lexical space to value space conversions,
		and value space to lexical space conversions.
	*/
	class ConversionException : public Exception
	{
	public:
		ConversionException(const string_type& message, const std::exception* inner = 0)
			: Exception(message, inner) {}
	};


	/*	Exception thrown for lexical space to value space conversions. */
	class StringParseException : public ConversionException
	{
	public:
		StringParseException(const string_type& targetTypeName, const string_type& sourceValue)
			: ConversionException(_T("'") + sourceValue + _T("' could not be parsed as ") + targetTypeName)
		{}

		StringParseException(const string_type& message, const std::exception* inner = 0)
			: ConversionException(message, inner) {}
	};


	/*	Exception thrown for value space to lexical space conversions. */
	class ValueNotRepresentableException : public ConversionException
	{
	public:
		ValueNotRepresentableException(const string_type& sourceTypeName, const string_type& reason)
			: ConversionException(_T("Source value of type ") + sourceTypeName + _T(" cannot be converted to string: ") + reason)
		{}

		ValueNotRepresentableException(const string_type& message, const std::exception* inner = 0)
			: ConversionException(message, inner) {}
	};


	/*	Exception thrown when source value cannot be represented in target domain. */
	class OutOfRangeException : public ConversionException
	{
	public:
		OutOfRangeException(const string_type& sourceTypeName, const string_type& targetTypeName, const string_type& value)
			: ConversionException(_T("Source value '") + value + _T("' of type ") + sourceTypeName + _T(" cannot be converted to ") + targetTypeName)
		{}
	};



	class InvalidOperationException : public Exception
	{
	public:
		InvalidOperationException(const string_type& message, const std::exception* inner = 0)
			: Exception(message, inner) {}
	};


	class DataSourceUnavailableException : public Exception
	{
	public:
		DataSourceUnavailableException(const string_type& message, const std::exception* inner = 0)
			: Exception(message, inner) {}
	};

	class DataTargetUnavailableException : public Exception
	{
	public:
		DataTargetUnavailableException(const string_type& message, const std::exception* inner = 0)
			: Exception(message, inner) {}
	};

	class TargetUpdateFailureException : public Exception
	{
	public:
		TargetUpdateFailureException(const string_type& message, const std::exception* inner = 0)
			: Exception(message, inner) {}
	};


	class UserException : public Exception
	{
	public:
		UserException(const string_type& message, const std::exception* inner = 0)
			: Exception(message, inner) {}
	};
}

#endif // _Altova_exception_INCLUDED_
