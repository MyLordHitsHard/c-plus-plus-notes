#include "print"

template<class T>
class Vector {
    T* vector_ = nullptr;
    size_t capacity_ = 0;
    size_t curr_idx_ = 0;
    
    void reserve(const size_t capacity);
    
    
    public:
    
        Vector() = default;
        
        ~Vector() { delete[] vector_; }
        
        // DELETE COPY OPERATIONS (to disable copying)
        Vector(const Vector&) = delete;
        Vector& operator=(const Vector&) = delete;
        
        Vector(Vector<T>&& another_vector) noexcept;
        Vector<T>& operator=(Vector<T>&&) noexcept;
        
        
        Vector(size_t capacity, const T& initial = {});
        
        void emplace_back(const T& element);
        T pop();
    
        size_t size() const { return curr_idx_; }
        size_t capacity() const { return capacity_;}
        
        T& operator[](const size_t index);
    
};

template<class T>
T& Vector<T>::operator[](const size_t index) {
    
    if (index >= curr_idx_) throw std::invalid_argument("Index must be less than vector's size");
    
    return vector_[index];
    
}

template<class T>
Vector<T>::Vector(Vector<T>&& other) noexcept {
    
    vector_ = other.vector_;
    curr_idx_ = other.curr_idx_;
    capacity_ = other.capacity_;
    
    other.vector_ = nullptr;
    other.capacity_ = 0;
    other.curr_idx_ = 0;

}

template<class T>
Vector<T>& Vector<T>::operator=(Vector<T>&& other) noexcept {
    
    if (this != &other) {
        delete[] vector_;
        
        vector_ = other.vector_;
        capacity_ = other.capacity_;
        curr_idx_ = other.curr_idx_;

        other.vector_ = nullptr;
        other.capacity_ = 0;
        other.curr_idx_ = 0;
    }
    
    return *this;
}

template<class T>
Vector<T>::Vector(size_t capacity, const T& initial): capacity_{capacity}, curr_idx_{capacity}, vector_{new T[capacity]} {
    std::fill(vector_, vector_ + capacity, initial);
}



template<class T>
void Vector<T>::emplace_back(const T& element) {
    
    if (curr_idx_ == capacity_) {
        if (capacity_ == 0) reserve(8);
        else reserve(capacity_ * 2);
    }
    
    vector_[curr_idx_] = element;
    curr_idx_++;
}

template<class T>
T Vector<T>::pop() {
    if (curr_idx_ > 0) {
        T to_return = vector_[curr_idx_ - 1];
        curr_idx_--;
        std::println("here");
        
        return to_return;
    }
    else throw std::out_of_range("Nothing to pop");
}


template<class T>
inline void Vector<T>::reserve(const size_t capacity) {
    if (capacity <= capacity_) return;
    
    T* new_data = new T[capacity];
    
    for (size_t i = 0; i < curr_idx_; i++)
        new_data[i] = std::move(vector_[i]);
        
    delete[] vector_;
    vector_ = new_data;
    capacity_ = capacity_;
}

int main(int argc, char* argv[]) {
    
    Vector<int> vector(10, 69);
    Vector<int> vector_ones(10, 1);
    Vector<int> newOne = std::move(vector);
    std::println("{}", newOne[0]);
    Vector<int> temp;
    temp.emplace_back(1);
    std::println("{}", temp[0]);
    std::println("{}", temp.pop());
    
    
    return 0;
}
