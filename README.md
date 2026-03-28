# sokol-dll

```bash
# win
$ clang -shared -o lib/libsokol.dll src/sokol_dll.c -Iinclude

# linux
$ clang -shared -o lib/libsokol.so src/sokol_dll.c -Iinclude -fPIC -lXi -lX11 -lGL -lXcursor

# mac
$ clang -shared -o lib/libsokol.dylib src/sokol_dll.m -Iinclude -lobjc -framework CoreFoundation -framework Metal -framework IOKit -framework Cocoa -framework QuartzCore
```
