### how to check linux dynamic lib symbols using nm command
+ build `libdefaultvisibility.so` and `libcontrolledvisibility.so` targets by running `make` command in this directory.
+ check dynamic lib symbols by running `nm -D libdefaultvisibility.so` or `nm -D libcontrolledvisibility.so` command.

Note how method 1 and method 2 affect symbol visibility.