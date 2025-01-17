#ifndef _ALTOVA_INCLUDED_CMSD_ALTOVA__ALTOVA_CDateType
#define _ALTOVA_INCLUDED_CMSD_ALTOVA__ALTOVA_CDateType



namespace CMSD
{

class CDateType : public TypeBase
{
public:
	CMSD_EXPORT CDateType(MSXML2::IXMLDOMNodePtr const& init);
	CMSD_EXPORT CDateType(CDateType const& init);
	void operator=(CDateType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDateType); }
	MemberElement<CschemaType, _altova_mi_altova_CDateType_altova_schema> schema;
	struct schema { typedef Iterator<CschemaType> iterator; };
};


}	// namespace CMSD

#endif // _ALTOVA_INCLUDED_CMSD_ALTOVA__ALTOVA_CDateType
