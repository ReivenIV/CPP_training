
- `_brain` is a pointer that holds the address of a `Brain` object.
- `this->_brain` gives you the pointer (the address of the `Brain` object).
- `*this->_brain` gives you the actual `Brain` object that the pointer points to.
- `&this->_brain` gives you the address of the pointer itself (not the `Brain` object).

In function:
```cpp
Brain &Dog::get_brain() const {
    return (*this->_brain);
}
```
You use `*this->_brain` to return the actual `Brain` object owned by the current `Dog`.  
This lets you work directly with the `Brain` object, not just its address or the pointer.