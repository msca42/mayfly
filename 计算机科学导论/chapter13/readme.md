# 文件结构

## 引言

- 文件存储在辅助存储设备或二级存储设备中
- 存取文件的方法决定检索记录的方式: 顺序或随机
- 顺序存取: 顺序文件结构需要顺序地存取记录
- 随机存取: 索引文件和散列文件允许随机存取

## 顺序文件

- 记录只能按照顺序从头到尾一个接一个地进行存取的文件
- 更新
  - 和更新有关的四个文件: 新主文件、旧主文件、事务文件和错误报告文件

## 索引文件

- 由数据文件组成，它是带索引的顺序文件，索引占两个字段键和地址

## 散列文件

- 相较于索引文件，散列文件使用函数进行键-地址映射，无需额外文件
- 散列方法:直接散列、求模法、数字析取法、其他方法
- 冲突: 在散列算法为插入键产生地址时，发现该地址被占用
  - 解决方案: 开放寻址、链表寻址、桶散列法、组合方法

## 目录

- 含有其他文件信息的一种特殊文件类型，在大多数操作系统中，目录被组织称像树一样的 ADT
- Unix 目录: 根目录，主目录，工作目录，父目录

## 文本文件与二进制文件

- 文本文件
  - 字符文件，内存储器格式不包含整数、浮点数或其他数据结构
- 二进制文件
  - 计算机内部格式存储的数据集合，数据可以是整型、浮点型或其他数据结构

## 总结

- 定义两类存取方法: 顺序存取和随机存取
- 理解顺序文件的结构和它们是如何更新的
- 理解索引文件的结构和索引文件与数据文件间的关系
- 理解散列文件背后的概念，说出一些散裂方法
- 描述地址冲突和它们是如何解决的
- 定义目录和它们是如何用来组织文件的
- 区分文本文件和二进制文件
