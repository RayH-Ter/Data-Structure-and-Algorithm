template <typename T>
class Array
{
private:
    int size = 0;
    T* elements = nullptr;
    void copyMemory(const T* _s, T* _d, int _n);

public:
    Array(){};
    Array(const Array& _obj);
    const Array& operator=(const Array& _obj);
    ~Array();
    void printArray() const;
    void makeEmpty();
    bool isEmpty() const;
    int find(const T& _val) const;
    void insert(int _p, const T& _val);
    void remove(int _p);
    void warning(int _err) const;
    void clearMemory();
};

template <typename T>
void Array<T>::clearMemory()
{
    if (elements != nullptr) 
    {
        delete [] elements;
    }
};

template <typename T>
void Array<T>::warning(int _err) const
{
    switch(_err)
    {
        case 1: std::cout << "Out of range." << std::endl; break;
        default: std::cout << "Unexpected error. " << std::endl; break;
    }
};

template <typename T>
void Array<T>::remove(int _p)
{
    if(_p < 0 || _p >= size)
    {
        warning(1);
        return;
    }
    copyMemory(elements + _p + 1, elements + _p, size - _p - 1);
    size --;
};

template <typename T>
void Array<T>::insert(int _p, const T& _val)
{
    if(_p < 0 || _p > size)
    {
        warning(1);
        return;
    }
    T* temp_data = new T [size + 1];
    copyMemory(elements, temp_data, _p);
    temp_data[_p] = _val;
    copyMemory(elements + _p, temp_data + _p + 1, size - _p);
    if(elements != nullptr)
        clearMemory();
    elements = temp_data;
    size ++;
};

template <typename T>
int Array<T>::find(const T& _val) const
{
    int i = 0;
    bool  found = false;
    for(; i < size; i++)
    {
        if(elements[i] == _val)
        {
            found = true;
            break;
        }
    }
    if(found == true) return i;
    else return -1;
};

template <typename T>
bool Array<T>::isEmpty() const
{
    if(size == 0) return true;
    else return false;
};

template <typename T>
void Array<T>::makeEmpty()
{
    size = 0;
};

template <typename T>
void Array<T>::printArray() const
{
    if(size == 0) return;
    for(int i = 0; i < size; i++)
    {
        std::cout << elements[i] << ", ";
    }
    std::cout << "\b\b." << std::endl;
};

template <typename T>
Array<T>::~Array()
{
    clearMemory();
};

template <typename T>
const Array<T>& Array<T>::operator=(const Array<T>& _obj)
{
    size = _obj.size;
    clearMemory();
    if(size == 0)
    {
        elements = nullptr;
        return *this;
    }
    elements = new T [size];
    copyMemory(_obj.elements, elements, size);

    return *this;
};

template <typename T>
void Array<T>::copyMemory(const T* _s, T* _d, int _n)
{
    for(int i = 0; i < _n; i++)
    {
        _d[i] = _s[i];
    }
};

template <typename T>
Array<T>::Array(const Array<T>& _obj)
{
    size = _obj.size;
    if(size == 0)
    {
        elements = nullptr;
        return;
    }
    elements = new T [size];
    copyMemory(_obj.elements, elements, size);
};
