mkdir test0
mkdir test2
touch test1       # a file
touch test3       # the original file
ln test3 test5    # creating the hard link, now test5 looks like test3
touch test4       # another file
ln -s test0 test6 # create the solf link test6 -> test0

truncate -s 4 test1
truncate -s 1 test3
truncate -s 2 test4

chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4


touch -amt 202406012039 test0
touch -amt 202404021230 test1
touch -hmt 202003201430 test6

