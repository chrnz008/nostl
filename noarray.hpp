#include <cstddef>
template <typename T, std::size_t N> class noarray {
  private:
    T m_array[N]{};
    size_t m_cpacity = 0;

  public:
    // Element access
    T &at(size_t pos) { return &m_array[pos]; }
    T operator[](size_t index) { return m_array[index]; }
    T front() { return m_array[0]; }
    T back() { return m_array[N]; }
    T *data() { return m_array; }

    // Capacity
    bool empty() {
        if (m_cpacity == 0) {
            return true;
        } else {
            return false;
        }
    }
    size_t size() { return m_cpacity; }
    size_t max_size() { return N; }

    // Operations
    void fill(const T value) {
        for (int i = 0; i < N; i++) {
            m_array[i] = value;
        }
    }
    // void swap()
};
