// Specification file for the IntegerList class.
#ifndef INTEGERLIST_H
#define INTEGERLIST_H
class IntegerList
{
    private:
    int *list; // Pointer to the array.
    int numElements; // Number of elements.
    bool isValid(int); // Validates subscripts.
    public:
    IntegerList(int); // Constructor
    ~IntegerList(); // Destructor
    void setElement(int, int); // Sets an element to a value.
    void getElement(int, int&); // Returns an element.
};
#endif