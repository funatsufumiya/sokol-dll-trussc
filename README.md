# sokol-dll

```bash
# win (in x64 developer command prompt)
$ cl /MD /LD src\sokol_dll.c lib\cimgui.lib /Iinclude /Fe:lib\libsokol_tc.dll legacy_stdio_definitions.lib ucrt.lib vcruntime.lib

# linux
$ clang -shared -o lib/libsokol_tc.so src/sokol_dll.c -Iinclude -Llib -lcimgui -fPIC -lXi -lX11 -lGL -lXcursor

# mac
$ clang -shared -o lib/libsokol_tc.dylib src/sokol_dll.m -Iinclude -Llib -lcimgui -lobjc -framework CoreFoundation -framework Metal -framework IOKit -framework Cocoa -framework QuartzCore
```
