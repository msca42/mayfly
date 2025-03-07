# Git 基础
## 使用Git前的最小配置
- 配置user.name和user.email
```git
git config --global user.name ''
git config --global user.email ''
```
- 查看配置: git config --list
- 参数
    - global 当前用户所有仓库
    - local 单个仓库
    - system 系统所有登录用户

## 创建Git仓库
- 初始化git仓库: git init
- 添加文件到暂存区: git add 
- 查看仓库状态: git status
- 提交文件: git commit -m "提交说明"


## 工作区与暂存区
- git可以分为三个区域，工作目录、暂存区、正式提交
- 通过git add 可以将工作目录的变更提交到暂存区
- 通过git commit 可以将暂存区的变更正式提交
- git add -u: 将被管理的文件一同提交到暂存区

## 文件重命名
- git rm 删除文件
- git reset --hard 清理暂存区变更
- git mv 原文件名 修改后的文件名

## git log查看版本
- git log
    - --oneline 简介化处理
    - -n number 最近的number个提交
    - --all 查看所有分支的提交信息
    - --graph 图形化
- git branch -v 查看本地分支数
- git checkout -b 分支名 SHA-1哈希 以提交节点创建新的分支,也可以作为切换分支命令
- git commit -am  添加提交合并参数 
- git help --web 在网页端查看帮助信息

## gitk图形界面查看版本

## .git目录
- HEAD: 分支信息
    - 可以指向分支，也可以指向commit
- config: 配置信息
- refs: 引用信息，存放分支和tag信息

## commit、tree、blob对象关系
- 一次完整的提交是一个commit
- 一个commit对应一个tree
- 一个文件夹对应一个tree
- 一个文件对应一个blob
- git cat-file  查看git对象内容
    - -t 显示对象类型
    - -p 更友好的方式显示对象内容

## 分离头指针
- detached HEAD
- 通常切换分支做法
    - git checkout -b 分支名 SHA-1哈希值
- 分离头指针做法
    - git checkout SHA-1哈希值
    - 缺点: 没有分支，所以所有做的commit容易被清理
    - 优点: 做尝试性变更，如果需要保留，之后再新建分支

## HEAD和branch
- git diff 比较两次提交的不同
- 