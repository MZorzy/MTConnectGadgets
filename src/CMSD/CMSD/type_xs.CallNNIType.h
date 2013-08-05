#ifndef _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CallNNIType
#define _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CallNNIType



namespace CMSD
{

namespace xs
{	

class CallNNIType : public TypeBase
{
public:
	CMSD_EXPORT CallNNIType(MSXML2::IXMLDOMNodePtr const& init);
	CMSD_EXPORT CallNNIType(CallNNIType const& init);
	void operator=(CallNNIType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CallNNIType); }

	enum EnumValues {
		Invalid = -1,
		k_unbounded = 0, // unbounded
		EnumValueCount
	};
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace CMSD

#endif // _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CallNNIType