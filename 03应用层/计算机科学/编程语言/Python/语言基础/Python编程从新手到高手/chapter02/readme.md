# Python 开发环境

- 一个好的 python 开发环境通常包括语言解释器、pip 包管理器、虚拟环境、一个面向 Python 的代码编辑器，以及一个或多个静态分析分析器

## 安装 Python

- 安装解释器和包管理工具 pip
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
  - 由于某些包和其他包存在冲突，不建议在系统自带的 Python 环境中安装第三方包
- 虚拟环境
  - 沙盒、可以安装特定项目所需的 Python 包、可以避免冲突
  - 每个虚拟环境都位于专用目录中，通常文件夹命名为 env 或 venv
  - 通过 venv 工具实现
    - 创建虚拟环境
      - python -m venv(命令) 路径/文件夹
    - 激活虚拟环境
      - linux
        - source venv/bin/active
      - windows
        - venv\Scripts\active.bat
        - venv\Scripts\active.ps1
    - 退出虚拟环境
      - deactivate
    - 在虚拟环境中使用系统包
      - python -m venv --system-site-packages venv
      - 需要在创建虚拟环境之前更改

## pip 介绍

- 在进行任何 Python 开发工作时，都应该在虚拟环境中工作，这确保了使用正确的包
- 在系统环境中安装包使用如下命令
  - python3 -m pip command
  - pip command 表示 pip 命令,类似 pip install package
  - 如果需要特定版本需要在包名后跟上==版本号
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
- shebang
  - 位于 Python 文件的顶部的特殊命令，提供 Python 解释器的路径
- 文件编码
  - 自 Python3.1 开始，所有文件使用 UTF-8 编码
- 替代品
  - Pipenv 是 pip 和 venv 的结合体
  - pip-tools 是可以简化 pip 任务
  - poetry 可以代替包管理工具

## 认识 PEP 8

- Python 的官方代码风格指南 PEP 8
- 典型案例
  - 行宽限制 79 或 80 个字符，其他规范中有 100 或 120 个字符限制
  - 推荐使用空格而非制表符作为缩进，通常默认 4 个空格

## 代码质量控制：静态分析工具

- linter:代码检查器
  - Python 社区中最受欢迎的是 Pylint 和 PyFlakes
  - pylint
    - 后接文件名分析文件
    - 后接模块名分析包或模块
- 静态类型检查器
  - Mypy
- 复杂度分析器
  - mccabe
- 通常是按照从上到下的顺序跑，最后运行单元测试

- Flake8
  - Flake8 是三个静态分析器的组合 PyFlakes、pycodestyle、mccabe

## 自动格式化工具

- 自动更改 Python 代码风格，两个工具 autopep8,Black
- autopep8
  - 修复 pep8 问题，且原地更改

## 测试框架

- Python 中主要有三个测试框架: Pytest、nose2 和 unittest
  - 还有一个新项目 ward

## 代码编辑器

- IDLE
  - Python 自己的 IDE，两个组件，一个编辑器和一个交互式 shell 页面
- Emacs 和 Vim
  - Real Python 中有它的教程
- PyCharm
  - 社区版和专业版
-
