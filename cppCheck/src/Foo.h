class FooImpl;

class Foo {
public:
   int bar();
   friend class FooImpl;
private:
   int var;
};
