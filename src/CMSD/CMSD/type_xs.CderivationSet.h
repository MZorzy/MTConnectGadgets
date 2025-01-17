#ifndef _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CderivationSet
#define _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CderivationSet



namespace CMSD
{

namespace xs
{	

class CderivationSet : public TypeBase
{
public:
	CMSD_EXPORT CderivationSet(MSXML2::IXMLDOMNodePtr const& init);
	CMSD_EXPORT CderivationSet(CderivationSet const& init);
	void operator=(CderivationSet const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CderivationSet); }

	enum EnumValues {
		Invalid = -1,
		k__all = 0, // #all
		k_extension = 1, // extension
		k_restriction = 2, // restriction
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

#endif // _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CderivationSet
