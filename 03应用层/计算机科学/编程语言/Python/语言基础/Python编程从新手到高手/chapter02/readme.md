# Python 开发环境

- 一个好的 python 开发环境通常包括语言解释器、pip 包管理器、虚拟环境、一个面向 Python 的代码编辑器，以及一个或多个静态分析分析器

## 安装 Python

- 安装解释器和包管理工具
- Windows
  - 官网下载、添加 PATH
- MacOS
  - Homebrew 或 MacPorts 下载
- Linux
  - apt、dnf、pacman 下载
- 源代码构建

## 认识 Python 解释器

- 交互式会话
  - 通过键入 python 启动
- 运行 Python 文件
  - 通过 python x.py 启动

## 包和虚拟环境

- 内置电池：Python 标准库，包含常用的功能，例如文件操作，网络操作，数据库操作
- 包: 一组代码，通过 import 完成
  - 通过第三方库可以实现其他功能
  - 不建议在系统自带的 Python 环境中安装第三方包
- 虚拟环境
  - 沙盒、可以安装特定项目所需的 Python 包、可以避免冲突
  - 通过 venv 工具实现
    - 创建虚拟环境
      - python -m venv 路径/文件夹
    - 激活虚拟环境
      - linux
        - source venv/bin/active
      - windows
        - source \Scripts\active.bat
    - 退出虚拟环境
      - deactivels

## pip 介绍

- 在进行任何 Python 开发工作时，都应该在虚拟环境中工作，这确保了使用正确的包
- 在系统环境中安装包使用如下命令
  - python3 -m pip command
  - pip command 表示 pip 命令,类似 pip install package
- requirements.txt
  - 通过配置文件可以列出项目所需包的信息
- 更新包
  - pip install --upgrade package/requirement.txt
- 卸载包
  - pip uninstall package
  - 卸载包的时候不会卸载依赖包，所以强烈建议在虚拟环境下使用
- 搜索包
  - pip search：由于安全原因，被禁用，可以使用 pip-search 包代替
- 一个警告
  - 不要使用 sudo pip 命令，会对本地系统造成不可估量的影响

## 虚拟环境与 Git

- 虚拟环境中有大量不必要文件，为了避免在版本控制系统中跟踪这些文件，有两个解决方案
  - 在你的仓库外创建虚拟环境
  - 不要将虚拟环境目录纳入版本控制系统的控制范围内
- 在仓库根目录下创建或编辑.gitignore 文件，将 venv/添加进入
