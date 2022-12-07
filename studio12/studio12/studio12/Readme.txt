2. 
class name: MyClass
method: MyClass()

class name: MyClass
method: MyClass()

class name: Derived
method: Derived()

class name: Derived
method: ~Derived()

class name: MyClass
method: ~MyClass()

class name: MyClass
method: ~MyClass()

the program needs to create another MyClass() in order to create Derived()
thats why we see 1 con/destructor per call of MyClass(),
and 2 con/destructors per call of Derived()

3.

calling dup on...
mine:
class name: MyClass
method: dup()

der:
class name: Derived
method: dup()

miner:
class name: MyClass
method: dup()

minder:
class name: MyClass
method: dup()

derr:
class name: Derived
method: dup()
-----------------------------
thats exactly what i expected

3.2

calling Virtual dup on...
mine:
class name: MyClass
method: dup()

der:
class name: Derived
method: dup()

miner:
class name: MyClass
method: dup()

minder:
class name: Derived  <-- only difference//
method: dup()

derr:
class name: Derived
method: dup()
-----------------------------
minder is the MyClass reference to der, our Derived class object.
that means that making our function virtual forces it to call on the object 
type rather than the reference type.

4.
calling dup on...
mine:
class name: MyClass
method: dup()

derp:
class name: Derived
method: dup()

minep:
class name: MyClass
method: dup()

minderp:
class name: MyClass
method: dup()

derp:
class name: Derived
method: dup()
------------------------------
non-virtual is the same as non-virtual reference calls from pt 3

calling virtual dup on...
mine:
class name: MyClass
method: dup()

derp:
class name: Derived
method: dup()

minep:
class name: MyClass
method: dup()

minderp:
class name: Derived <-- only difference, same as references
method: dup()

derp:
class name: Derived
method: dup()
--------------------------------
again, virtual calls the function of the derived class even though our ptr
points to the base class because the object belongs to the derived class
virtual behaves the same between refs and ptrs in this case

5.
non-virtual:
class name: MyClass
method: MyClass()

class name: MyClass
method: MyClass()

class name: Derived
method: Derived()

class name: MyClass
method: MyClass()

class name: Derived
method: Derived()

class name: MyClass
method: ~MyClass()

class name: MyClass
method: ~MyClass()

class name: Derived
method: ~Derived()

class name: MyClass
method: ~MyClass()
--------------------------
we see 5 constructors and 4 destructors above in the nonvirtual destructor scenario
virtual constructors are not allowed
with Virtual destructors:

class name: MyClass
method: MyClass()

class name: MyClass
method: MyClass()

class name: Derived
method: Derived()

class name: MyClass
method: MyClass()

class name: Derived
method: Derived()

class name: MyClass
method: ~MyClass()

class name: Derived
method: ~Derived()

class name: MyClass
method: ~MyClass()

class name: Derived
method: ~Derived()

class name: MyClass
method: ~MyClass()
------------------------
with virual, we delete all constructed objs, whereas we missed one derived class with non-virtual destructors
each call to derived class has 2 constructors, each call to base has 1 constructor.
the additional destructor enters when we make destructors virtual because the pointer is of type 
MyClass so the non virtual only deletes the base class, but virtual deletes both base and derived in that case
