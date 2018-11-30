#include <cstdint>

struct dummy_struct {
    int a;
    float b;
};

template<typename T>
void f(T) { }

int main(void) {
    auto ptr = reinterpret_cast<intptr_t>(f<dummy_struct>);
    (void)ptr;
}
