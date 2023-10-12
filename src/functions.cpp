#include "include/functions.h"
#include <vector>
#include <algorithm>
#include <cstdint>

namespace func {
    /* std::vector<int64_t> get_all_factors(int64_t num, bool use_sort) {
        std::vector<int64_t> result;
        int i = 1;

        //Loop from 1 to int(sqrt(x)).
        while(i * i <= num) {
            //Check if num is divisible by i.
            if(num % i == 0) {
                result.push_back(i);
                //Handle if num / i == i.
                if(num / i != i) {
                    result.push_back(num / i);
                }
            }
            i++;
        }
        
        if (use_sort) {
            std::sort(result.begin(), result.end());
        }

        //Return the list of factors of num.
        return result;
    } */

    int64_t factor_count(int64_t num) {
        std::vector<int> result;
        int i = 1;

        //Loop from 1 to int(sqrt(num)).
        while(i * i <= num) {
            //Check if num is divisible by i.
            if(num % i == 0) {
                result.push_back(i);
                //Handle if num / i == i.
                if(num / i != i) {
                    result.push_back(num / i);
                }
            }
            i++;
        }
        
        return static_cast<int>(result.size());
    }

    /* int64_t get_nth_triangle_num(int n) {
        int64_t result = 0;
        for (int i = 1; i <= n; i++) {
            result += i;
        }
        return result;
    } */

    func::triangle_num_info factor_count_greater_than(int limit) {
        int64_t current_triangle_num = 0;
        int i = 0;

        while (factor_count(current_triangle_num) < limit) {
            current_triangle_num += (i + 1);
            i++;
        }

        func::triangle_num_info result = {.value_of = current_triangle_num, .index = i};

        return result;
    }
}