#include "ParameterSymbol.h"

#include "TypeSymbol.h"

namespace Mamba
{
    ParameterSymbol::ParameterSymbol(
        const std::shared_ptr<const String> Name,
        const std::shared_ptr<const class TypeSymbol> Type,
        const std::size_t Oridinal
    ) noexcept :
        Super(Name, false, Type, nullptr), Oridinal(Oridinal)
    {
    }

    SymbolKind ParameterSymbol::Kind() const noexcept
    {
        return SymbolKind::Parameter;
    }
} // namespace Mamba