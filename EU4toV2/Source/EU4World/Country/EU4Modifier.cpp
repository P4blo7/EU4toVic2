#include "EU4Modifier.h"
#include "ParserHelpers.h"

EU4::EU4Modifier::EU4Modifier(std::istream& theStream)
{
	registerKeyword("modifier", [this](const std::string& unused, std::istream& theStream)
		{
			const commonItems::singleString modifierStr(theStream);
			modifier = modifierStr.getString();
		});
	registerRegex("[a-zA-Z0-9_\\.:]+", commonItems::ignoreItem);

	parseStream(theStream);
	clearRegisteredKeywords();
}
