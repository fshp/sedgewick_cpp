#ifndef SEDGEWICK_CPP_CHAPTER1_CQUICKSEARCH_H
#define SEDGEWICK_CPP_CHAPTER1_CQUICKSEARCH_H

#include <vector>
#include <tuple>

class CQuickSearch {

public:
    using container_type = std::vector<std::size_t>;
    using value_type = std::tuple<std::size_t, std::size_t>;
    void add(const value_type &v);
    const container_type& get() const;

private:
    container_type m_v;

    void resize(const value_type &v);
};

#endif //SEDGEWICK_CPP_CHAPTER1_CQUICKSEARCH_H
