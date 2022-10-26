//
// Licensed under Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License
// https://creativecommons.org/licenses/by-nc-sa/4.0/
//
// Author: Giannis Gonidelis (c) 2022
//

#ifndef __CONFIG_HPP
#define __CONFIG_HPP

#if defined(NWGRAPH_USE_HPX)
#include <hpx/config.hpp>
#endif

#if defined(__GNUC__) || defined(__clang__)
#define NWGRAPH_ATTRIBUTE_NOINLINE [[gnu::noinline]]
#else
#define NWGRAPH_ATTRIBUTE_NOINLINE
#endif

#endif