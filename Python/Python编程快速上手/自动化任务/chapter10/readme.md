# 组织文件
- shutil模块: 可以让Python程序复制、移动、重命名和删除文件
- 函数
    - copy(source,destination) 将源文件复制到目标地址
    - copytree(source,destination) 复制整个文件夹和子文件夹
    - move(source,destination) 移动文件夹，返回新地址的绝对地址，可以进行重命名操作
    - rmtree(path) 删除path处的文件夹及所有文件
- os模块
- 函数
    - unlink(path) 删除path处的文件
    - rmdir(path) 删除path处的空文件夹
- send2trash模块: 将文件夹和文件发送到回收站

## 遍历目录树
- 通过os.walk(路径)可以遍历文件信息
- os.walk() 返回三个值
    - 当前文件夹名称的字符串
    - 当前文件夹中子文件夹的字符串的列表
    - 当前文件夹文件的字符串的列表

## 压缩与解压
- zipfile模块
    - ZipFile(文件名) 创建ZipFile对象
        - 参数w 写模式
        - 参数a 追加写
    - ZipFile对象
        - namelist()  返回ZIP文件中包含的所有文件和文件夹的字符串的列表
        - getinfo()  获取namelist()方法的返回值，并返回一个ZipInfo对象
        - extractall() 解压缩到当前工作目录
        - extract() 解压缩单个文件
        - write() 
            - 参数1 添加文件名
            - 参数2 压缩类型
    - ZipInfo对象
        - file_size 属性表示原文件大小
        - compress_size 属性表示压缩后文件大小