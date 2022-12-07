1.2:
forward list must be populated differently, but to keep the teams even i also populated deque different

1.3:
H:\Current 332\Studio9\studio9\studio9\Debug>studio9.exe
Vector:
1, 2, 3, 4, 5,
list:
1, 2, 3, 4, 5,
forward_list:
1, 2, 3, 4, 5,
deque:
1, 2, 3, 4, 5,
H:\Current 332\Studio9\studio9\studio9\Debug>

2.1:
Only containers with random access iterators will work with std::sort...
i think list and forward list will have trouble with sort(),
and vector & deque will be able to use sort()
2.1.1:
Yeah only vector and deque work, the others threw errors in output on build

2.2 reverse() needs bidirectional iterators, so i'd say that's vector and list that itll work for...

2.2.1 it worked for vector and list and ALSO deque!