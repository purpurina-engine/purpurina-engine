////////////////////////////////////////////////////////////
// Purpurina Engine
//
// \todo Copyright notice
//
////////////////////////////////////////////////////////////
///
/// \ingroup purpurina-core
/// \file Export.hpp
/// \author Tobias Ulrich <flamenco.bluegrass@gmail.com>
/// \date March 22, 2020
///
////////////////////////////////////////////////////////////

#ifndef _PURPURINA_CORE_EXPORTS_HPP_
#define _PURPURINA_CORE_EXPORTS_HPP_

#include <purpurina/Config.hpp>

#ifdef PURPURINA_CORE_EXPORTS
    #define PURPURINA_CORE_API PURPURINA_API_EXPORT
#else
    #define PURPURINA_CORE_API PURPURINA_API_IMPORT
#endif


#endif
