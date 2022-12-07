1. constructor had to be in header file, then i could build.
2. by switching from struct to class, "truck" becomes "inaccesable"
	when i make the constructor (in header) public, no errors on truck, but my member variables
	are then inaccesible
	Takeaway: for class defined in header, we want any accesable vars to be public
2.2 Class members are private by default, whereas struct members are public by default
4. 
H:\Current 332\studio8\studio8\studio8\x64\Debug>studio8.exe
0 0
200 100

H:\Current 332\studio8\studio8\studio8\x64\Debug>
5. default constructor is creating new obj with our instantialized values
	copy constructor is duplicating our existing obj in a new memory location
6. my copy constructor returns the same values as the complier-supplied constructor :

H:\Current 332\studio8\studio8\studio8\x64\Debug>studio8.exe  //compiler supplied
ridgeline.getMilage =0 and ridgeline.getValue =0
ridgeline.getMilage =200 and ridgeline.getValue =100
ridgeline.getMilage =200 and ridgeline.getValue =100

H:\Current 332\studio8\studio8\studio8\x64\Debug>studio8.exe  //my copy
ridgeline.getMilage = 0 and ridgeline.getValue = 0
ridgeline.getMilage = 200 and ridgeline.getValue = 100
fwanfidy.getMilage = 200 and fwanfidy.getValue = 100

H:\Current 332\studio8\studio8\studio8\x64\Debug>