## Basic Operations for Starting Using a New Ubuntu System

进入root模式，首次使用su命令需更改密码：

sudo passwd update

su

换源，需要保证源的正确性：

1. 通过`lsb_release -a`查看ubuntu版本

2. 参考网址：https://www.cnblogs.com/sunanli/p/13797042.html 复制源，更改/etc/apt/sources.list文件

3. sudo apt-get updatee

安装软件

sudo apt install vim

sudo apt install build-essential

查看gcc/g++版本

gcc/g++ --version

设置用户信息

git config --global user.name ""

git config --global user.email ""

查看用户信息：

git config user.name

git config user.email

设置记住密码：

git config credential.helper store

git 常见操作：

git clone xxx

git add/reset xxx

git commit -m ""

git push



