#include <string>
#include "tinyxml2.h"
#include "xml.h"
namespace xml
{
std::string generateXml()
{
	tinyxml2::XMLDocument doc;
	tinyxml2::XMLPrinter printer;

	auto* root = doc.NewElement("Root");
	root->SetText("Example XML Text");
	doc.InsertFirstChild(root);

	doc.Print(&printer);

	return printer.CStr();
}
}
