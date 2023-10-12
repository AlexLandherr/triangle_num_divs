//#include <vector>
#include <cstdint>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace func {
    //std::vector<int64_t> get_all_factors(int64_t num, bool use_sort);

    int64_t factor_count(int64_t num);

    //int64_t get_nth_triangle_num(int n);

    struct triangle_num_info {
        int64_t value_of;
        int index;
    };
    
    triangle_num_info factor_count_greater_than(int limit);
}

#endif