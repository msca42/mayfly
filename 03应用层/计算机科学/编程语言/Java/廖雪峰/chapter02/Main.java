public class Main {
  public static void main(String[] args) {
    // 定义并初始化
    int n = 100;
    System.out.println(n);

    // 重新赋值
    n = 200;
    System.out.println(n);

    // 赋值给其他变量
    int x = n;
    System.out.println("x  = " + x);

    // 执行算术运算后赋值
    x = x + 100;
    System.out.println("x = " + x);
    System.out.println("n = " + n);

    // 整型
    int i = 2147483647;
    int i2 = -2147483648;
    int i3 = 2_000_000_000; // 加下划线更容易识别
    int i4 = 0xff0000; // 十六进制表示的16711680
    int i5 = 0b1000000000; // 二进制表示的512

    long n1 = 9000000000000000000L; // long型的结尾需要加L
    long n2 = 900; // 没有加L，此处900为int，但int类型可以赋值给long
    // int i6 = 900L; // 错误：不能把long型赋值给int

    // 浮点型
    float f1 = 3.14f;
    float f2 = 3.14e38f; // 科学计数法表示的3.14x10^38
    // float f3 = 1.0; // 错误：不带f结尾的是double类型，不能赋值给float

    double d = 1.79e308;
    double d2 = -1.79e308;
    double d3 = 4.9e-324; // 科学计数法表示的4.9x10^-324

    // 布尔类型
    boolean b1 = true;
    boolean b2 = false;
    boolean isGreater = 5 > 3; // 计算结果为true
    int age = 12;
    boolean isAdult = age >= 18; // 计算结果为false

    // 字符
    char a = 'A';
    char zh = '中';
    System.out.println(a);
    System.out.println(zh);

    // 常量
    final double PI = 3.14;
    double r = 5.0;
    double area = PI * r * r;
    // PI = 300;

    // var
    var sb = new StringBuilder();

    // 四则运算
    i = (100 + 200) * (99 - 88);
    n = 7 * (5 + (i - 9));
    System.out.println(i);
    System.out.println(n);
    x = 12345 / 67;
    int y = 12345 % 67;

    // 溢出
    x = 2147483640;
    y = 15;
    int sum = x + y;
    System.out.println(sum);

    // 溢出改进
    long x1 = 2147483640;
    long y1 = 15;
    long sum1 = x1 + y1;
    System.out.println(sum1);

    // 复合运算符
    n += 100;
    n -= 100;

    // 自增自减
    n = 3300;
    n++;
    n--;
    y = 100 + (++n);
    System.out.println(y);

    // 移位
    n = 7;
    int a5 = n << 1;
    int b5 = n << 2;
    int c5 = n << 28;
    int d5 = n << 29;

    n = -536870912;
    a5 = n >> 1;
    b5 = n >> 2;
    c5 = n >> 28;
    d5 = n >> 29;

    n = -536870912;
    a5 = n >>> 1;
    b5 = n >>> 2;
    c5 = n >>> 28;
    d5 = n >>> 29;

    // 位运算
    n = 0 & 0;
    n = 0 & 1;
    n = 1 & 0;
    n = 1 & 1;

    n = 0 | 0;
    n = 0 | 1;
    n = 1 | 0;
    n = 1 | 1;

    n = ~0;
    n = ~1;

    n = 0 ^ 0;
    n = 0 ^ 1;
    n = 1 ^ 0;
    n = 1 ^ 1;

    i = 167776589; // 00001010 00000000 00010001 01001101
    n = 167776512; // 00001010 00000000 00010001 00000000
                   // & -----------------------------------
                   // 00001010 00000000 00010001 00000000
    System.out.println(i & n); // 167776512

     short s = 1234;
      i = 123456;
      x = s + i;
      
      i = 12345;
      s = (short)i;
  }
}
