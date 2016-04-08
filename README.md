
## Akshay Bembalkar

 * The inBounds() function will always return true.
	- There are two parameters to inBound() function, one is width and another one is height.
	- When we are passing the value of height (h), it is always going to be positive because of the initialization of I = (height – 1) to the function.
	- So, when we pass negative value of column, the inBound() should return false. Instead it returns true. Due to this, vector might try to access variable at 		  negative value causing segmentation fault.
 * In constructor, value of x (number of sequential pieces) is checked as less than or equal to zero, which will cause game to finish even for x = 1. This value    	should be either greater than 1 and less than length of column and width.
