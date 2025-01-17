#ifndef _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CminOccursType
#define _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CminOccursType



namespace CMSD
{

namespace xs
{	

class CminOccursType : public TypeBase
{
public:
	CMSD_EXPORT CminOccursType(MSXML2::IXMLDOMNodePtr const& init);
	CMSD_EXPORT CminOccursType(CminOccursType const& init);
	void operator=(CminOccursType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CminOccursType); }

	enum EnumValues {
		Invalid = -1,
		k_0 = 0, // 0
		k_1 = 1, // 1
		EnumValueCount
	};
	void operator= (const unsigned __int64& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator unsigned __int64()
	{
		return CastAs<unsigned __int64 >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace CMSD

#endif // _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CminOccursType
