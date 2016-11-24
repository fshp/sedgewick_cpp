#include "CQuickSearch.hpp"

using namespace std;

void CQuickSearch::add(const CQuickSearch::value_type &v) {
    resize(v);

    size_t p, q;
    tie(p, q) = v;

    const size_t t = m_v[p];

    if(t != m_v[q]) {
        for(size_t i = 0; i < m_v.size(); ++i)
            if(m_v[i] == t)
                m_v[i] = m_v[q];
    }
}

void CQuickSearch::resize(const CQuickSearch::value_type &v) {
    size_t a, b;
    tie(a, b) = v;

    const size_t old_size = m_v.size();
    const size_t new_size = max(old_size, max(a + 1, b + 1));

    m_v.resize(new_size);
    for(size_t i = old_size; i < m_v.size(); ++i)
        m_v[i] = i;
}

const CQuickSearch::container_type &CQuickSearch::get() const {
    return m_v;
}
