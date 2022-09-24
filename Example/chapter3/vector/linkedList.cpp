#include <iostream>

template <typename T>
class SingleLinkedList
{
private:
    class Node
    {
        private:
            T data;
            Node* next;
            Node(){};
            ~Node(){};
        public:
            friend class SingleLinkedList<T>;
    };
    Node* head = nullptr;
    Node EMPTY;
public:
    SingleLinkedList(){};
    ~SingleLinkedList();
    void push(const T& _d);
    const T& top() const;
    T pop();
    void print() const;
};

template <typename T>
void SingleLinkedList<T>::print() const
{
    Node* t = head;
    while(t != nullptr)
    {
        std::cout << t->data << ", ";
        t = t->next;
    }
    std::cout << "\b\b." << std::endl;
}

template <typename T>
void SingleLinkedList<T>::push(const T& _d)
{
    Node* t = new Node;
    t->data = _d;
    t->next = head;
    head = t;
}

template <typename T>
T SingleLinkedList<T>::pop()
{
    if(head == nullptr)
    {
        std::cout << "The list is empty." << std::endl;
        return EMPTY.data;
    }
    else
    {
        T result;
        Node* t = head;
        result = t->data;
        head = head->next;
        delete t;
        return result;
    }
}

template <typename T>
const T& SingleLinkedList<T>::top() const
{
    if(head != nullptr) 
        return head->data;
    else
    {
        std::cout << "The list is empty." << std::endl;
        return EMPTY.data;
    }
}

template <typename T>
SingleLinkedList<T>::~SingleLinkedList()
{
    while(head != nullptr)
    {
        Node* t = head;
        head = head->next;
        delete t;
    }
}

int main(int agrc, char* agrv[])
{
    SingleLinkedList<int> a;
    for(int i = 0; i < 3; i++)
        a.push(i);
    a.print();
    std::cout << a.top() << std::endl;
    // for(int i = 0; i < 3; i++)
        // std::cout << a.pop() << std::endl;

    return 0;
}