#ifndef EU4_NATIONAL_SYMBOL_H
#define EU4_NATIONAL_SYMBOL_H

#include "EU4CustomColors.h"

namespace EU4
{
	class NationalSymbol: public commonItems::parser
	{
	public:
		NationalSymbol() = default;
		explicit NationalSymbol(std::istream& theStream);
		[[nodiscard]] const auto& getMapColor() const { return mapColor; }
		[[nodiscard]] const auto& getCountryColor() const { return countryColor; }
		[[nodiscard]] const auto& getRevolutionaryColor() const { return revolutionaryColor; }
		auto& getCustomColors() { return customColors; }
		[[nodiscard]] auto isCustomColorsInitialized() const { return customColorsInitialized; }

		void setMapColor(const commonItems::Color& col) { mapColor = col; }
		void setCountryColor(const commonItems::Color& col) { countryColor = col; }
		void setRevolutionaryColor(const commonItems::Color& col) { revolutionaryColor = col; }
		void setCustomColors(const CustomColors& col) { customColors = col; }
		void setCustomColorsInitialized() { customColorsInitialized = true; }

	private:
		CustomColors customColors;
		commonItems::Color mapColor = commonItems::Color(0, 0, 0);
		commonItems::Color countryColor = commonItems::Color(0, 0, 0);
		commonItems::Color revolutionaryColor = commonItems::Color(0, 0, 0);
		bool customColorsInitialized = false;
	};
}

#endif // EU4_NATIONAL_SYMBOL_H
