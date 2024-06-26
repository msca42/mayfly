# 数据压缩

## 引言

- 数据压缩可以分为无损压缩和有损压缩
- 无损方法针对文本或程序可以分为游程长度、赫夫曼和 Lempel Ziv
- 有损方法针对图像、视频和音频可以分为 JPEG、MPEG、MP3

## 无损压缩

- 游程长度
  - 将数据中连续重复出现的符号用一个字符和这个符号重复的次数代替
- 赫夫曼编码
  - 对于出现更为频繁的字符分配较短的编码，对于出现较少的字符分配更长的编码
- Lempel Ziv
  - 基于字典的编码，通信会话产生一个字符串字典

## 有损压缩

- 图像压缩:JPEG
- 视频压缩:MPEG
- 音频压缩:MP3

## 总结

- 区分无损压缩和有损压缩
- 描述游程长度编码和它时如何实现压缩的
- 描述赫夫曼编码和它时如何实现的
- 描述 Lempel Ziv 编码以及字典在编码和译码中的作用
- 描述压缩精致图像的 JPEG 标准背后的主要思想
- 描述压缩视频的 MPEG 标准背后的主要思想以及它与 JPEG 间的关系
- 描述压缩音频的 MP3 标准背后的主要思想
