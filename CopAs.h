// Fransiskus Agapa
// Class CopAs Definition

#ifndef COPYASSIGNMENT_COPAS_H
#define COPYASSIGNMENT_COPAS_H

class CopAs
{
private:
    int *_data;
public:
    CopAs();                                     // default value
    void SetValue(const int& theData);           // value setter
    int GetValue() const;                        // value getter
    CopAs (const CopAs& theData);                // copy constructor
    CopAs& operator=(const CopAs& theData);      // copy assignment
    ~CopAs();                                    // destructor
};


#endif //COPYASSIGNMENT_COPAS_H
