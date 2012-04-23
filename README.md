tup-sample
==========

Some foolaround with tup (with cxxtest, linking libs, ...)

CONTENT
-------

  * Dummy tests with cxxtest
  * shared lib

BUILD
-----

After a git clone, you have to init tup in the top directory of the repo:
```tup init```

Then you can compile'em all:
```tup upd```

All the files created during the build will be in the build dir, so it won't mess up.


NOTES
-----
The shared lib's path is hardcoded into the binary relatively, so runtime-linking should work.

