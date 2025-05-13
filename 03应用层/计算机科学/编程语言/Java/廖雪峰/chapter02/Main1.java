public class Main1 {
    public static void main(String[] args) {
        int i = 2147483647;
        int i2 = -2147483648;
        int i3 = 2_000_000_000; // 加下划线更容易识别
        int i4 = 0xff0000; // 十六进制表示的16711680
        int i5 = 0b1000000000; // 二进制表示的512

        long n1 = 9000000000000000000L; // long型的结尾需要加L
        long n2 = 900; // 没有加L，此处900为int，但int类型可以赋值给long
        // int i6 = 900L; // 错误：不能把long型赋值给int

        float f1 = 3.14f;
        float f2 = 3.14e38f; // 科学计数法表示的3.14x10^38
        // float f3 = 1.0; // 错误：不带f结尾的是double类型，不能赋值给float

        double d = 1.79e308;
        double d2 = -1.79e308;
        double d3 = 4.9e-324; // 科学计数法表示的4.9x10^-324

        char a = 'A';
        char zh = '中';
        System.out.println(a);
        System.out.println(zh);


        String s = "hello";

        final double PI = 3.14;
        double r = 5.0;
        double area = PI * r * r;
    }    
}
