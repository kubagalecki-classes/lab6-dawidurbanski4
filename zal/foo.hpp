#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj
    for_each(people.begin(), people.end(), [&](auto& iter) { return (iter.birthday()); });

    transform(people.begin(), people.end(), ret_v.rbegin(), [&](auto& iter) {
        if (iter.isMonster() == true) {
            return 'n';
        } else {
            return 'y';
        }
    });

    return ret_v;
}
