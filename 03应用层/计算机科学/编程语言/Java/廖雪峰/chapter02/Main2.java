public class Main2 {
  public static void main(String[] args) {
    // 浮点数运算
    double x = 1.0 / 10;
    double y = 1 - 9.0 / 10;
    System.out.println(x);
    System.out.println(y);

    double r = Math.abs(x - y);
    if (r < 0.00001) {
      System.out.println("相等");
    } else {
      System.out.println("不相等");
    }

    int n = 5;
    double d = 1.2 + 24.0 / n;
    System.out.println(d);

    d = 1.2 + 24 / 5;
    System.out.println(d);

    double d1 = 0.0 / 0;
    System.out.println(d1);
    double d2 = 1.0 / 0;
    System.out.println(d2);
    double d3 = -1.0 / 0;
    System.out.println(d3);

    int n1 = (int) 12.3;
    int n2 = (int) 12.7;
    int n3 = (int) -12.7;
    int n4 = (int) (12.7 + 0.5);
    int n5 = (int) 1.2e20;

    d = 2.6;
    n = (int) (d + 0.5);
    System.out.println(n);

    // 布尔运算
    boolean isGreater = 5 > 3; // true
    int age = 12;
    boolean isZero = age == 0; // false
    boolean isNonZero = !isZero; // true
    boolean isAdult = age >= 18; // false
    boolean isTeenager = age > 6 && age < 18; // true

    boolean b = 5 < 3;
    boolean result = b && (5 / 0 > 0);
    System.out.println(result);

    // 三元运算符
    int n6 = 100;
    int x6 =   n >= 0 ? n:-n; 
    System.out.println(x6);


    // 字符类型
    char c1  = 'A';
    char c2 = '中';
    int n7 = 'A';
    int n8 = '中';
    char c3 = '\u0041';
    char c4 = '\u4e2d';

    // 字符串类型
    String s = "";
    String s1 = "A";
    String s2 = "ABC";
    String s3 = "中文 ABC";
    s = "abc\"xyz";
    s = "abc\\xyz";


    s1 = "Hello";
    s2 = "world";
    s = s1 + " " + s2 + "!";
    System.out.println(s);


    age = 25;
    s = "age is" + age;
    System.out.println(s);
    
    s = """
        SELECT * FROM
          users
        WHERE id > 100
        ORDER BY name DESC""";
    System.out.println(s);

    s = "hello";
    System.out.println(s);
    s = "world";
    System.out.println(s);

    s = "hello";
    String t = s;
    s = "world";
    System.out.println(t);

    // 数组
    int[] ns = new int[5];
    ns[0] = 68;
    ns[1] = 79;
    ns[2] = 91;
    ns[3] = 85;
    ns[4] = 62;
    System.out.println(ns.length);
    // System.out.println(ns[ns.length]);
     ns =new int[] {68,79,91,85,62};
     ns = new int[]{1,2,3};


     String[] names = {
      "ABC","XYZ","zoo"
     };
     s = names[1];
     names[1] = "cat";
     System.out.println(s);
  }
}
