#include "middle_list.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    vector<int>list1;
    list1.push_back(12);
    list1.push_back(-12);
    itc_pos_neg_analysis_lst(list1);
    return 0;
}
