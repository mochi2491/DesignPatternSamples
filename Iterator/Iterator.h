namespace Iterator {
class Iterator {
public:
    virtual bool HasNext() = 0;
    virtual void* Next() = 0;
};
}  // namespace Iterator
