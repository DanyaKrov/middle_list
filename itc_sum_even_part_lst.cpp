#include "middle_list.h"

long itc_sum_even_part_lst(const vector <int> &lst){
    long num = 0;
    for (int i = 0; i < lst.size(); i++){
            if (lst[i] % 2 == 0)
                num += lst[i];
    }
    return num;
}
