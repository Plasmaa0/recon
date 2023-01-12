#ifndef RECON_TYPE_NAME_H
#define RECON_TYPE_NAME_H

#include <string_view>

namespace recon {
    template<typename T>
    constexpr auto type_name() {
        constexpr auto name = std::string_view{__PRETTY_FUNCTION__};
#ifdef __GNUC__
        constexpr auto prefix = std::string_view{"[with T = "};
        constexpr auto suffix = std::string_view{"]"};
#else
#error "Compiler not supported"
#endif
        constexpr auto start = name.find(prefix) + prefix.size();
        constexpr auto end = name.rfind(suffix);
        return name.substr(start, end - start);
    }
}

#endif //RECON_TYPE_NAME_H
