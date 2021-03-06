#ifndef COLONIAL_TAG_MAPPER_H
#define COLONIAL_TAG_MAPPER_H

#include "ColonialTag.h"

namespace mappers
{
	class ColonialTagMapper: commonItems::parser
	{
	public:
		ColonialTagMapper();
		explicit ColonialTagMapper(std::istream& theStream);
		
		[[nodiscard]] const auto& getColonyList() const { return colonyList; }

	private:
		void registerKeys();
		std::vector<ColonyStruct> colonyList;
	};
}

#endif // COLONIAL_TAG_MAPPER_H
