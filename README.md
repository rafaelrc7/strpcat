# strpcat()

strpcat() is a simple C function for concatenating multiple strings to one at once with low overhead and high portability.

## Usage
You may just clone the source and header files into your project and use them as you prefer.


Example:

```C
#include "strpcat.h"
...
strpcat(dest, string1, "string2", string3, NULL);
...
```
The destination string (which will be modified, be sure it's big enough) is sent as the first argument to the function. The strings to be concatenated to 'dest' are passed, in order, as arguments after 'dest'. The arguments must be ended with 'NULL'.

## Contributing
You may make pull requests for modifications you find relevant.

## License
[MIT](https://choosealicense.com/licenses/mit/)
