#include "Foo.h"

class FooImpl {
public:
   int bar(Foo &);
};

int FooImpl::bar(Foo &foo) {
return foo.var;
}

int Foo::bar() {
return 42;
}
